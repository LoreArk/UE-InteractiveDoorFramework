// Fill out your copyright notice in the Description page of Project Settings.

#include "Actors/Collectables/IDFCollectibleActor.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/PlayerCameraManager.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Subsystems/IDFItemUIManager.h"
#include "Camera/CameraComponent.h"



AIDFCollectibleActor::AIDFCollectibleActor()
{
	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Item Mesh"));
	ItemMesh->SetupAttachment(RootComponent);
}

void AIDFCollectibleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsMovingToPosition)
	{
		MoveToTarget(DeltaTime);
	}

	if (bCanRotate)
	{
		ExamineRotate(DeltaTime);
	}
}

void AIDFCollectibleActor::BeginPlay()
{
	Super::BeginPlay();

	InitialTransform = GetActorTransform();
}

void AIDFCollectibleActor::InteractStarted_Implementation(AActor* InteractingActor, FHitResult TraceHitResult)
{
	Super::InteractStarted_Implementation(InteractingActor, TraceHitResult);

	if (bIsMovingToPosition) return;

	if (bBeingExamined == false)
	{
		StartExamination();
	}
	else
	{
		EndExamination(InteractingActor);
	}
}

void AIDFCollectibleActor::OnLookInput(const FInputActionValue& Value)
{
	LookInput = Value.Get<FVector2D>();
}

void AIDFCollectibleActor::OnLookInputCompleted(const FInputActionValue& Value)
{
	LookInput = FVector2D(0, 0);
}

void AIDFCollectibleActor::MoveToTarget(float DeltaTime)
{
	FVector NewLocation = FMath::VInterpTo(GetActorLocation(), TargetTransform.GetLocation(), DeltaTime, MoveSpeed);
	
	FQuat CurrentQuat(GetActorRotation());
	FQuat TargetQuat(TargetTransform.GetRotation());
	FQuat InterpQuat = FMath::QInterpTo(CurrentQuat, TargetQuat, DeltaTime, RotateSpeed);

	SetActorLocation(NewLocation);
	SetActorRotation(InterpQuat);

	if (FVector::Dist(GetActorLocation(), TargetTransform.GetLocation()) < 1.f)
	{
		bIsMovingToPosition = false;
		if (bBeingExamined)
		{
			EnableRotation();
		}
		else
		{
			ItemMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			bCanStartInteraction = true;
			UpdatePrompt();
		}
	}
}

void AIDFCollectibleActor::ExamineRotate(float DeltaTime)
{
	float YawInput = LookInput.X;
	float PitchInput = LookInput.Y;

	// Get the reference transform axes
	FVector ReferenceUp = TargetTransform.GetUnitAxis(EAxis::Z);      // Up axis from reference
	FVector ReferenceRight = TargetTransform.GetUnitAxis(EAxis::Y);   // Right axis from reference

	// Calculate rotation amounts based on mouse movement
	float YawAmount = YawInput * ExaminationRotationSpeed * DeltaTime;
	float PitchAmount = -PitchInput * ExaminationRotationSpeed * DeltaTime;

	// Get current rotation
	FQuat CurrentRotation = GetActorQuat();

	// Create rotation quaternions around reference axes
	FQuat YawRotation = FQuat(ReferenceUp, FMath::DegreesToRadians(YawAmount));
	FQuat PitchRotation = FQuat(ReferenceRight, FMath::DegreesToRadians(PitchAmount));

	FQuat TargetRotation = YawRotation * PitchRotation * CurrentRotation;

	FQuat SmoothedRotation = FMath::QInterpTo(CurrentRotation, TargetRotation, DeltaTime, 10.0f);

	SetActorRotation(SmoothedRotation);
}

void AIDFCollectibleActor::EnableRotation()
{
	bCanRotate = true;
}

void AIDFCollectibleActor::DisableRotation()
{
	bCanRotate = false;
}

void AIDFCollectibleActor::StartExamination()
{
	APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (PC)
	{
		// Get enhanced input component if available
		UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(PC->InputComponent);
		if (EIC && LookAction)
		{
			// Bind our look function to the look action
			EIC->BindAction(LookAction, ETriggerEvent::Triggered, this, &AIDFCollectibleActor::OnLookInput);
			EIC->BindAction(LookAction, ETriggerEvent::Completed, this, &AIDFCollectibleActor::OnLookInputCompleted);
		}
	}


	ItemMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	ACharacter* Character = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

	UE_LOG(LogTemp, Warning, TEXT("Start examination"));
	bBeingExamined = true;

	APlayerCameraManager* CameraManager = PC->PlayerCameraManager;

	FVector CameraLocation = CameraManager->GetCameraLocation();
	FVector TargetLocation = CameraLocation + CameraManager->GetCameraRotation().Vector() * 75.f;

	FRotator LookAtRotation = (CameraLocation - GetActorLocation()).Rotation();

	TargetTransform.SetLocation(TargetLocation);
	TargetTransform.SetRotation(LookAtRotation.Quaternion());

	bIsMovingToPosition = true;
	PC->SetIgnoreLookInput(true);
	Character->GetCharacterMovement()->DisableMovement();

	ShowItemUI();

	if (bIsTargeted)
	{
		ItemMesh->SetOverlayMaterial(nullptr);
	}

	bCanStartInteraction = false;
	UpdatePrompt();
}

void AIDFCollectibleActor::ShowItemUI()
{
	
}

void AIDFCollectibleActor::HideItemUI()
{
	UIDFItemUIManager* DescManager = GetGameInstance()->GetSubsystem<UIDFItemUIManager>();
	if (DescManager)
	{
		DescManager->HideItemDescription();
	}
}

void AIDFCollectibleActor::EndExamination(AActor* InteractingActor)
{
	APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (PC)
	{
		UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(PC->InputComponent);
		if (EIC && LookAction)
		{
			EIC->RemoveBindingByHandle(EIC->BindAction(LookAction, ETriggerEvent::Triggered, this, &AIDFCollectibleActor::OnLookInput).GetHandle());
			EIC->RemoveBindingByHandle(EIC->BindAction(LookAction, ETriggerEvent::Completed, this, &AIDFCollectibleActor::OnLookInputCompleted).GetHandle());
		}
	}

	ACharacter* Character = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

	bBeingExamined = false;

	DisableRotation();
	TargetTransform = InitialTransform;
	bIsMovingToPosition = true;
	PC->ResetIgnoreLookInput();
	Character->GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);

	HideItemUI();

	if (bIsTargeted)
	{
		if (TargetedMaterial.IsNull()) return;

		UMaterialInstance* Material = TargetedMaterial.LoadSynchronous();

		if (!IsValid(Material)) return;

		ItemMesh->SetOverlayMaterial(Material);
	}

}

void AIDFCollectibleActor::SetIsTargeted_Implementation(bool bNewIsTargeted, UPrimitiveComponent* TargetedComponent)
{
	Super::SetIsTargeted_Implementation(bNewIsTargeted, TargetedComponent);

	if (bBeingExamined) return;

	bIsTargeted = bNewIsTargeted;
	if (bNewIsTargeted)
	{

		/*UFEItemUIManager* DescManager = GetGameInstance()->GetSubsystem<UFEItemUIManager>();
		if (DescManager)
		{
			DescManager->ShowPromptWidget(GetActorLocation());
		}*/

		if (TargetedMaterial.IsNull()) return;

		UMaterialInstance* Material = TargetedMaterial.LoadSynchronous();

		if (!IsValid(Material)) return;

		ItemMesh->SetOverlayMaterial(Material);
	}
	else
	{
		ItemMesh->SetOverlayMaterial(nullptr);
	}
}
