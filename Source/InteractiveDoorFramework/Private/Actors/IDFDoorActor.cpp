// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractiveDoorFramework/Public/Actors/IDFDoorActor.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include <NavModifierComponent.h>
#include "NavAreas/NavArea_Default.h"
#include "NavAreas/NavArea_Null.h"
#include "Kismet/GameplayStatics.h"
#include "InteractiveDoorFramework/Public/Components/IDFLockComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "PhysicsEngine/BodySetup.h"     
#include "Components/StaticMeshComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputAction.h"
#include "Subsystems/KeyItemsManager.h"
#include "InputMappingContext.h"

AIDFDoorActor::AIDFDoorActor()
{
	
	//DoorFrameMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door FrameMesh"));
	//DoorFrameMesh->SetupAttachment(RootComponent);

	DoorSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Door Skeletal Mesh"));
	DoorSkeletalMesh->SetupAttachment(RootComponent);

	DoorBlockerF = CreateDefaultSubobject<UBoxComponent>(TEXT("DoorBlockerF"));
	DoorBlockerF->SetupAttachment(RootComponent);
	DoorBlockerB = CreateDefaultSubobject<UBoxComponent>(TEXT("DoorBlockerB"));
	DoorBlockerB->SetupAttachment(RootComponent);

	HandleTransformRef = CreateDefaultSubobject<USceneComponent>(TEXT("HandleTransformRef"));
	HandleTransformRef->SetupAttachment(DoorSkeletalMesh);
	HandleTransformRef->SetRelativeLocation(FVector::ZeroVector);

	LockTransformRef = CreateDefaultSubobject<USceneComponent>(TEXT("LockTransformRef"));
	LockTransformRef->SetupAttachment(RootComponent);
	LockTransformRef->SetRelativeLocation(FVector::ZeroVector);

	LockComponent = CreateDefaultSubobject<UIDFLockComponent>(TEXT("LockComponent"));

	OpeningDirectionArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("OpeningDirectionArrow"));
	OpeningDirectionArrow->SetupAttachment(RootComponent);
	OpeningDirectionArrow->SetHiddenInGame(true);
	OpeningDirectionArrow->SetVisibility(false);

	LockPreviewMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LockLocationGizmo"));
	LockPreviewMesh->SetupAttachment(RootComponent);
	LockPreviewMesh->SetHiddenInGame(true);

	MoveDoorAmount = 50.f;
	MaxAngularVelocity = 25.f;
	InteractionTapTimeThreshold = .2f;
	SoftPushStregth = 200.f;
	StrongPushStregth = 500.f;
	DoorCloseYawTolerance = 1.f;
	BlockDoorWhenCloseTime = 0.2f;

	NavObstacle = CreateDefaultSubobject<UNavModifierComponent>(TEXT("NavObstacle"));
}

void AIDFDoorActor::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	ClearDoubleDoorPreviousComponents();

	if (DoorFrameMesh.IsValid())
	{
		UStaticMeshComponent* Frame = Cast<UStaticMeshComponent>(AddComponentByClass(UStaticMeshComponent::StaticClass(), false, FTransform::Identity, false));
		if (Frame)
		{
			Frame->SetStaticMesh(DoorFrameMesh.Get());
			Frame->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			Frame->AttachToComponent(SceneRoot, FAttachmentTransformRules::SnapToTargetNotIncludingScale);

			CreatedDoorFrameComponent = Frame;
			CreatedComponents.Add(Frame);

			ApplyMaterials(Frame, FrameMaterials);
		}
	}

	if (DoorMesh.IsValid())
	{
		UStaticMeshComponent* Door = Cast<UStaticMeshComponent>(AddComponentByClass(UStaticMeshComponent::StaticClass(), false, FTransform::Identity, false));
		if (Door)
		{
			Door->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			Door->SetCollisionObjectType(ECollisionChannel::ECC_PhysicsBody);
			Door->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldStatic, ECollisionResponse::ECR_Ignore);
			Door->SetStaticMesh(DoorMesh.Get());
			Door->AttachToComponent(DoorSkeletalMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName("DoorSocket"));

			CreatedDoorComponent = Door;
			CreatedComponents.Add(Door);
			ApplyMaterials(Door, DoorMaterials);
		}
	}

	if (HandleTransformRef)
	{
		HandleBoneLocation = FVector(0.f, HandleBoneLocation.Y, HandleBoneLocation.Z);
		FVector NewLocation = HandleBoneLocation;
		HandleTransformRef->SetRelativeLocation(NewLocation);
		HandleTransformRef->SetRelativeRotation(FQuat::Identity);
	}

	if (LockTransformRef)
	{
		LockBoneLocation = LockTransformRef->GetRelativeLocation();

	}

	if (bIsOneSided)
	{
		OpeningDirectionArrow->SetVisibility(true);

		const float ArrowLength = 50.f;
		OpeningDirectionArrow->SetArrowLength(ArrowLength);

		FVector ArrowOffset = FVector(-ArrowLength * 0.5f, 0.f, 0.f);
		FVector ArrowLocation = bFlipOpeningSide ? HandleTransformRef->GetRelativeLocation() - ArrowOffset : HandleTransformRef->GetRelativeLocation() + ArrowOffset;
		OpeningDirectionArrow->SetRelativeLocation(ArrowLocation);

		OpeningDirectionArrow->SetRelativeRotation(FRotator(0.f, bFlipOpeningSide ? 180.f : 0.f, 0.f));
		OpeningDirectionArrow->SetRelativeScale3D(FVector(1.f));
	}
	else
	{
		OpeningDirectionArrow->SetVisibility(false);
	}

	const bool bShowHandleA = !bIsOneSided || (bIsOneSided && (!bFlipOpeningSide || !bHideBlockedSideHandle));
	const bool bShowHandleB = !bIsOneSided || (bIsOneSided && (bFlipOpeningSide || !bHideBlockedSideHandle));

	if (HandleMesh.IsValid())
	{
		FTransform HandleBoneTransform = DoorSkeletalMesh->GetBoneTransform(FName("Handle"), ERelativeTransformSpace::RTS_Component);
		FTransform HandleSocketATransform = DoorSkeletalMesh->GetBoneTransform(FName("HandleSocket_1"), ERelativeTransformSpace::RTS_Component);
		FTransform HandleSocketBTransform = DoorSkeletalMesh->GetBoneTransform(FName("HandleSocket_2"), ERelativeTransformSpace::RTS_Component);

		FVector BoneReferenceDifference = HandleBoneLocation - HandleBoneTransform.GetLocation();
		FVector MeshALocation = BoneReferenceDifference + HandleSocketATransform.GetLocation();
		FVector MeshBLocation = BoneReferenceDifference + HandleSocketBTransform.GetLocation();

		if (bShowHandleA && HandleTransformRef)
		{
			UStaticMeshComponent* Handle1 = Cast<UStaticMeshComponent>(AddComponentByClass(UStaticMeshComponent::StaticClass(), false, FTransform::Identity, false));
			if (Handle1)
			{
				Handle1->SetStaticMesh(HandleMesh.Get());
				Handle1->SetSimulatePhysics(false);
				Handle1->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				
				Handle1->AttachToComponent(DoorSkeletalMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale);

				FVector Scale = Handle1->GetRelativeScale3D();
				Scale.Z *= -1;
				Handle1->SetRelativeScale3D(Scale);

				Handle1->SetRelativeLocation(MeshALocation);
				Handle1->SetRelativeRotation(HandleSocketATransform.GetRotation());
				Handle1->SetMobility(EComponentMobility::Movable);

				CreatedHandleAComponent = Handle1;
				CreatedComponents.Add(Handle1);

				ApplyMaterials(Handle1, HandleMaterials);
			}
		}

		if (bShowHandleB && HandleTransformRef)
		{
			UStaticMeshComponent* Handle2 = Cast<UStaticMeshComponent>(AddComponentByClass(UStaticMeshComponent::StaticClass(), false, FTransform::Identity, false));
			if (Handle2)
			{
				Handle2->SetStaticMesh(HandleMesh.Get());
				Handle2->SetSimulatePhysics(false);
				Handle2->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				Handle2->AttachToComponent(DoorSkeletalMesh, FAttachmentTransformRules::KeepRelativeTransform);

				Handle2->SetRelativeLocation(MeshBLocation);
				Handle2->SetRelativeRotation(HandleSocketBTransform.GetRotation());
				Handle2->SetMobility(EComponentMobility::Movable);


				CreatedHandleBComponent = Handle2;
				CreatedComponents.Add(Handle2);
				ApplyMaterials(Handle2, HandleMaterials);
			}
		}
	}

	if (LockPreviewMesh)
	{
		LockPreviewMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}

	//Set all component to not affect navigation, 
	// the nav obstacle will take care of navigation affection depending on if the door is locked/broken or not.
	// See UpdateShouldAffectNavigation method
	DoorSkeletalMesh->SetCanEverAffectNavigation(false);

	for (UActorComponent* Component : CreatedComponents)
	{
		if (!Component || !IsValid(Component))
			continue;

		if (USceneComponent* SceneComp = Cast<USceneComponent>(Component))
		{
			SceneComp->SetCanEverAffectNavigation(false);
		}
	}

	AlignDoorBlockers();

	UpdateNavObstacleAreaClass();
}

void AIDFDoorActor::AlignDoorBlockers()
{
	if (!CreatedDoorComponent || !DoorBlockerF || !DoorBlockerB || !SceneRoot)
		return;

	UStaticMesh* StaticMesh = CreatedDoorComponent->GetStaticMesh();
	if (!StaticMesh || !StaticMesh->GetBodySetup())
		return;

	UBodySetup* BodySetup = StaticMesh->GetBodySetup();

	if (BodySetup->AggGeom.BoxElems.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("No box collision primitives found in the static mesh"));
		return;
	}

	DoorBlockerF->SetBoxExtent(FVector(10.f, 30.f, 100.f));
	DoorBlockerB->SetBoxExtent(FVector(10.f, 30.f, 100.f));

	const FKBoxElem& Box = BodySetup->AggGeom.BoxElems[0];

	FVector BoxCenterLocal(Box.Center.X, Box.Center.Y, Box.Center.Z);
	FVector BoxExtent(Box.X * 0.5f, Box.Y * 0.5f, Box.Z * 0.5f);

	FTransform MeshTransform = CreatedDoorComponent->GetComponentTransform();

	FVector BoxCenterWorld = MeshTransform.TransformPosition(BoxCenterLocal);

	FTransform SceneRootTransform = SceneRoot->GetComponentTransform();
	FVector BoxCenterLocalToSceneRoot = SceneRootTransform.InverseTransformPosition(BoxCenterWorld);

	FVector BlockerExtent(10.f, 30.f, 100.f);

	float BlockerY = BoxCenterLocalToSceneRoot.Y;  // Y hardcoded: same height of the collider

	float BlockerZ = 0.f;

	float BoxMinX = BoxCenterLocalToSceneRoot.X - BoxExtent.X;
	float BoxMaxX = BoxCenterLocalToSceneRoot.X + BoxExtent.X;

	FVector BlockerFPos(BoxMaxX + BlockerExtent.X + 0.5f, BlockerY, BlockerZ);
	FVector BlockerBPos(BoxMinX - BlockerExtent.X - 0.5f, BlockerY, BlockerZ);

	DoorBlockerF->SetRelativeLocation(BlockerFPos);
	DoorBlockerB->SetRelativeLocation(BlockerBPos);
}



void AIDFDoorActor::ApplyMaterials(UStaticMeshComponent* MeshComp, const TArray<UMaterialInterface*>& Materials)
{
	if (!MeshComp) return;

	int32 SlotCount = MeshComp->GetNumMaterials();
	for (int32 i = 0; i < SlotCount; ++i)
	{
		if (Materials.IsValidIndex(i) && Materials[i])
		{
			MeshComp->SetMaterial(i, Materials[i]);
		}
	}
}

void AIDFDoorActor::ClearDoubleDoorPreviousComponents()
{
	for (UActorComponent* Component : CreatedComponents)
	{
		if (!Component || !IsValid(Component))
			continue;

		if (USceneComponent* SceneComp = Cast<USceneComponent>(Component))
		{
			SceneComp->DetachFromComponent(
				FDetachmentTransformRules::KeepWorldTransform);

			if (SceneComp->IsRegistered())
			{
				SceneComp->UnregisterComponent();
			}
		}

		Component->DestroyComponent();
	}

	CreatedComponents.Empty();
	CreatedDoorFrameComponent = nullptr;
	CreatedDoorComponent = nullptr;
	CreatedHandleAComponent = nullptr;
	CreatedHandleBComponent = nullptr;
}

#if WITH_EDITOR
void AIDFDoorActor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (HasAnyFlags(RF_ClassDefaultObject))
	{
		return;
	}

	const FName PropertyName = PropertyChangedEvent.GetPropertyName();

	if (!PropertyName.IsNone())
	{
		UE_LOG(LogTemp, Log, TEXT("Property changed: %s; Rebuilding door"), *PropertyName.ToString());
	}

	RerunConstructionScripts();
}
#endif

void AIDFDoorActor::BeginPlay()
{
	Super::BeginPlay();

	if(!IsValid(LockComponent)) return;

	if (!LockComponent->OnKeyItemUsed.IsBound())
	{
		LockComponent->OnKeyItemUsed.AddDynamic(this, &AIDFDoorActor::KeyUsed);
	}
	if (!LockComponent->OnOneSideUnlock.IsBound())
	{
		LockComponent->OnOneSideUnlock.AddDynamic(this, &AIDFDoorActor::TryUnlockDoor);
	}

	if (LockComponent->GetIsLocked())
	{
		DoorSkeletalMesh->SetBodySimulatePhysics(DoorBoneName, false);
	}
	if (!DoorSkeletalMesh->GetAnimInstance())
	{
		UE_LOG(LogTemp, Error, TEXT("IDFDoorActor BeginPlay: Anim Instance is null! Check if animation blueprint is assigned"));
		return;
	}

	if (IsValid(CreatedDoorComponent))
	{
		CreatedDoorComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		CreatedDoorComponent->SetCollisionObjectType(ECollisionChannel::ECC_PhysicsBody);
		CreatedDoorComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldStatic, ECollisionResponse::ECR_Ignore);
		CreatedDoorComponent->SetNotifyRigidBodyCollision(true);
		CreatedDoorComponent->OnComponentHit.AddDynamic(this, &AIDFDoorActor::OnDoorMeshHit);
	}

	if (IsValid(CreatedHandleAComponent))
	{
		CreatedHandleAComponent->AttachToComponent(DoorSkeletalMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, "HandleSocket_1");
	}

	if (IsValid(CreatedHandleBComponent))
	{
		CreatedHandleBComponent->AttachToComponent(DoorSkeletalMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, "HandleSocket_2");
	}
	
	DoorBlockerF->OnComponentHit.AddDynamic(this, &AIDFDoorActor::OnDoorBlockerHit);
	DoorBlockerB->OnComponentHit.AddDynamic(this, &AIDFDoorActor::OnDoorBlockerHit);

	DoorBlockerF->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	DoorBlockerB->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	DoorBlockerF->SetCollisionResponseToChannel(ECollisionChannel::ECC_PhysicsBody, ECollisionResponse::ECR_Block);
	DoorBlockerB->SetCollisionResponseToChannel(ECollisionChannel::ECC_PhysicsBody, ECollisionResponse::ECR_Block);

	DoorSkeletalMesh->GetAnimInstance()->OnPlayMontageNotifyBegin.AddDynamic(this, &AIDFDoorActor::OnMontageNotifyReceived);

	DoorSkeletalMesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldStatic, ECollisionResponse::ECR_Ignore);

	DisableDoorBlockers();

	if (bIsOneSided)
	{
		if (bFlipOpeningSide)
		{
			DoorBlockerF->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			return;
		}

		DoorBlockerB->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		return;
	}

	UpdateNavObstacleAreaClass();
}

void AIDFDoorActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AIDFDoorActor::OnDoorMoveAction(const FInputActionValue& Value)
{
	const FVector2D LookAxisVector = Value.Get<FVector2D>();

	MoveDoor(LookAxisVector.Y * MoveDoorAmount);
}

void AIDFDoorActor::OnDoorBlockerHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	float ImpulseLength = NormalImpulse.Size();
	if (HitComponent)
	{
		//UE_LOG(LogTemp, Warning, TEXT("BLOCKER Hit component: %s"), *HitComponent->GetName());
	}
	HandleComponentHit(ImpulseLength, 0.f, Hit);
}

void AIDFDoorActor::OnDoorMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (HitComponent)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Hit component: %s"), *HitComponent->GetName());
	}
	UpdateDoorBlockers();
}

void AIDFDoorActor::HandleComponentHit(float ImpulseLength, float DeltaMagnitude, FHitResult Hit)
{
	if (ImpulseLength < 10.f)
		return;

	if (ImpulseLength > MakeNoiseImpulseLengthThreshold)
	{
		OnMakeNoise.Broadcast(Hit);
		EventNoise(Hit);
	}
	else 
	{
		EventSound(Hit.Location);
	}
}

bool AIDFDoorActor::IsClosed()
{
	FRotator SocketRotation = DoorSkeletalMesh->GetSocketTransform(DoorBoneName, ERelativeTransformSpace::RTS_World).Rotator();

	float DoorYaw = SocketRotation.Yaw;
	float ActorYaw = GetActorRotation().Yaw;

	float NormalizedYawDifference = FRotator::NormalizeAxis(ActorYaw - DoorYaw);

	//UE_LOG(LogTemp, Warning, TEXT("ActorYaw: %f, DoorYaw: %f, NormalizedYawDifference: %f"), ActorYaw, DoorYaw, NormalizedYawDifference);

	return FMath::Abs(NormalizedYawDifference) < DoorCloseYawTolerance;
}

bool AIDFDoorActor::IsPlayerInFrontOfFrame()
{
	ACharacter* PlayerChar = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	if (!PlayerChar) return false;

	FVector PlayerLocation = PlayerChar->GetActorLocation();

	FVector DoorLocation = GetActorLocation();

	FVector DoorForward = GetActorForwardVector();

	FVector DoorToPlayer = (PlayerLocation - DoorLocation).GetSafeNormal();
	float Dot = FVector::DotProduct(DoorForward, DoorToPlayer);

	return Dot > 0;
}

bool AIDFDoorActor::IsPlayerInFrontOfDoor()
{
	ACharacter* PlayerChar = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	if (!PlayerChar) return false;

	if (!CreatedDoorComponent) return false;

	FVector PlayerLocation = PlayerChar->GetActorLocation();

	FVector DoorLocation = CreatedDoorComponent->GetComponentLocation();

	FVector DoorForward = CreatedDoorComponent->GetForwardVector();

	FVector DoorToPlayer = (PlayerLocation - DoorLocation).GetSafeNormal();
	float Dot = FVector::DotProduct(DoorForward, DoorToPlayer);

	return Dot > 0;
}

void AIDFDoorActor::PushDoor(float PushImpulseStrength)
{
	if (!DoorSkeletalMesh) return;

	ACharacter* PlayerChar = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	if (!PlayerChar) return;

	FVector PlayerLocation = PlayerChar->GetActorLocation();

	FVector DoorSocketLocation = DoorSkeletalMesh->GetSocketLocation("Door");

	FVector DoorFaceLocation = DoorSkeletalMesh->GetSocketLocation("DoorFace");
	FRotator DoorFaceRotation = DoorSkeletalMesh->GetSocketRotation("DoorFace");

	FVector DoorPushDirection = DoorFaceRotation.RotateVector(FVector(1, 0, 0)).GetSafeNormal();

	float Dot = FVector::DotProduct(PlayerChar->GetActorForwardVector(), GetActorForwardVector());
	
	if (Dot < 0)
	{
		DoorPushDirection *= -1;
	}

	if (PushImpulseStrength >= StrongPushStregth)
	{
		FHitResult HitRes;
		HitRes.Location = DoorFaceLocation;
		OnMakeNoise.Broadcast(HitRes);
		EventNoise(HitRes);
	}

	DoorSkeletalMesh->AddImpulse(DoorPushDirection * PushImpulseStrength, "Door", true);

	if (bDrawDebugs)
	{
		float DebugLineLength = 100.0f;
		DrawDebugLine(GetWorld(),
			DoorFaceLocation - (DoorPushDirection * DebugLineLength),  // Start point (behind the door)
			DoorFaceLocation + (DoorPushDirection * DebugLineLength),  // End point (in front of the door)
			FColor::Red, false, 2.0f, 0, 2.0f);
	}
}

void AIDFDoorActor::TapInteraction(bool bIsDoubleTap)
{
	SetDoubleTapFlag(true);

	DisableDoorBlockers();

	float PushStrength = bIsDoubleTap ? StrongPushStregth : SoftPushStregth;
		
	PushDoor(PushStrength);
	
	
	TWeakObjectPtr<AIDFDoorActor> ThisWeak = this;
	GetWorld()->GetTimerManager().SetTimer(TapResetTimerHandle, [ThisWeak]()
		{
			if (ThisWeak.IsValid())
			{
				ThisWeak->SetDoubleTapFlag(false);
			}
		}, InteractionTapTimeThreshold, false);


	USoundCue* LoadedMovingSFX = nullptr;

	LoadedMovingSFX = MovementSFX.LoadSynchronous();

	if (LoadedMovingSFX)
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), LoadedMovingSFX, GetActorLocation());
	}

	if (IsClosed())
	{
		PlayInteractionMontageAndSound(false);
	}
}

void AIDFDoorActor::MoveDoor(float Amount)
{
	float directionFix = bWasPlayerInFrontAtGrab ? 1.f : -1.f;

	float NewAngVelZ = FMath::Clamp(Amount, MaxAngularVelocity * -1, MaxAngularVelocity);
	FVector AngularVelocity(0.0f, 0.0f, NewAngVelZ * directionFix);

	HandleDoorMovementSounds(Amount);

	DoorSkeletalMesh->SetPhysicsAngularVelocityInDegrees(AngularVelocity, true, DoorBoneName);

	UpdateDoorBlockers();
}

void AIDFDoorActor::HandleDoorMovementSounds(float Amount)
{
	const FTransform BoneTransform = DoorSkeletalMesh->GetBoneTransform(DoorBoneName, ERelativeTransformSpace::RTS_ParentBoneSpace);

	const float CurrentAngle = BoneTransform.Rotator().Pitch;

	const float DeltaAngle = CurrentAngle - PreviousDoorAngle;

	PreviousDoorAngle = CurrentAngle;

	bool bIsMoving = FMath::Abs(DeltaAngle) > 5.f;

	// DEBUG PRINT
	GEngine->AddOnScreenDebugMessage(
		-1,
		0.f,
		FColor::Yellow,
		FString::Printf(TEXT("DeltaAngle: %.3f"), DeltaAngle)
	);

	// Determine current direction: -1, 0, 1
	int CurrentDirection = 0;
	if (Amount > 0.01f) CurrentDirection = 1;
	else if (Amount < -0.01f) CurrentDirection = -1;

	USoundCue* LoadedMovingSFX = nullptr;
	// 1. Start moving from stopped: play sound
	if (!bWasMoving && bIsMoving)
	{
		//LoadedMovingSFX = MovementSFX.LoadSynchronous();
	} // 2. The player changes direction: play sound
	if (bIsMoving && CurrentDirection != LastMovementDirection && LastMovementDirection != 0)
	{
		LoadedMovingSFX = MovementSFX.LoadSynchronous();
	}

	if (LoadedMovingSFX)
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), LoadedMovingSFX, GetActorLocation());
	}

	// Update tracking
	bWasMoving = bIsMoving;
	LastMovementDirection = CurrentDirection;

}

void AIDFDoorActor::UpdateDoorBlockers()
{
	if (bKeepClosed)
		return;
	if (IsClosed())
	{
		bKeepClosed = true;
		TWeakObjectPtr<AIDFDoorActor> ThisWeak = this;
		GetWorld()->GetTimerManager().SetTimer(DoorBlockerTimerHandle, [ThisWeak]()
			{
				if (ThisWeak.IsValid())
				{
					ThisWeak->bKeepClosed = false;
					ThisWeak->DisableDoorBlockers();
				}
			}, BlockDoorWhenCloseTime, false);
		return;
	}
	
	FRotator SocketRotation = DoorSkeletalMesh->GetSocketTransform(DoorBoneName, ERelativeTransformSpace::RTS_World).Rotator();

	float DoorYaw = FRotator::NormalizeAxis(SocketRotation.Yaw);
	float ActorYaw = FRotator::NormalizeAxis(GetActorRotation().Yaw);

	float NormalizedYawDifference = FRotator::NormalizeAxis(DoorYaw - ActorYaw);
	//UE_LOG(LogTemp, Warning, TEXT("DoorYaw: %f | ActorYaw: %f | NormalizedYawDiff: %f"), DoorYaw, ActorYaw, NormalizedYawDifference);

	if(NormalizedYawDifference > 0)
	{
		//UE_LOG(LogTemp, Warning, TEXT("ENABLE BLOCKER F"));

		DoorBlockerF->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
		DisableBlocker(DoorBlockerB, true);
	}
	else 
	{
		//UE_LOG(LogTemp, Warning, TEXT("ENABLE BLOCKER B"));

		DoorBlockerB->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
		DisableBlocker(DoorBlockerF, false);
	}
}

void AIDFDoorActor::DisableDoorBlockers()
{
	//UE_LOG(LogTemp, Warning, TEXT("BLOCKERS DISABLED"));
	DisableBlocker(DoorBlockerF, false);
	DisableBlocker(DoorBlockerB, true);
}

void AIDFDoorActor::DisableBlocker(UBoxComponent* Blocker, bool bBackBlocker)
{
	bool bCanBeDisabled = true;
	if (bBackBlocker == false)
	{
		if (bIsOneSided && bFlipOpeningSide)
		{
			bCanBeDisabled = false;
		}
	}
	else if (bBackBlocker)
	{
		if (bIsOneSided && !bFlipOpeningSide)
		{
			bCanBeDisabled = false;
		}
	}

	if (bCanBeDisabled)
	{
		Blocker->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}

void AIDFDoorActor::UpdateNavObstacleAreaClass()
{
	bool bShouldAffectNavigation = LockComponent->GetIsLocked() ? true : false;

	if (bShouldAffectNavigation)
	{
		NavObstacle->SetAreaClass(UNavArea_Null::StaticClass());
	}
	else
	{
		NavObstacle->SetAreaClass(UNavArea_Default::StaticClass());
	}
}


void AIDFDoorActor::InteractStarted_Implementation(AActor* InteractingActor, FHitResult TraceHitResult)
{

	UE_LOG(LogTemp, Warning, TEXT("Hit component: %s"), *InteractionTargetComponent->GetName());

	if (bUsingKey == true) // block the interaction when the unlock montage is playing
	{
		return;
	}

	if (LockComponent)
	{
		// Check if the door is locked
		if (LockComponent->GetIsLocked())
		{
			UKeyItemsManager* KeyItemsManager = GetGameInstance()->GetSubsystem<UKeyItemsManager>();
			if (KeyItemsManager)
			{
				bool bPlayerOnFront = IsPlayerInFrontOfDoor();

				EDoorLockState CurrentState = LockComponent->TryUnlock(KeyItemsManager->GetFoundKeys(), bPlayerOnFront);

				switch (CurrentState)
				{
				case EDoorLockState::Unlocked:
					break;

				case EDoorLockState::Locked_NoKey:
					SendHUDMessage(NoKeyTextMessage);
					PlayInteractionMontageAndSound(false);
					break;

				case EDoorLockState::Locked_WrongSide:
					SendHUDMessage(WrongSideTextMessage);
					PlayInteractionMontageAndSound(false);
					break;
				case EDoorLockState::Broken:
					SendHUDMessage(BrokenTextMessage);
					PlayInteractionMontageAndSound(false);
					break;
				}

				return; // early exit: interaction ends here if the door is locked or we just unlocked it
			}
		}
	}

	//if using key is false and the door is not locked: succesful interaction
	InteractionStartedWorldSeconds = UGameplayStatics::GetTimeSeconds(GetWorld());

	//The interaction is started, we can set the Interaction state as Held
	Super::InteractStarted_Implementation(InteractingActor, TraceHitResult);
	SetInteractionTarget(TraceHitResult.GetComponent());
}

void AIDFDoorActor::InteractHeld_Implementation()
{
	Super::InteractHeld_Implementation();

	if (CurrentInteractionState != EIDFInteractionState::Held)
		return;

	const float CurrentTime = UGameplayStatics::GetTimeSeconds(GetWorld());
	InteractionHeldDuration = CurrentTime - InteractionStartedWorldSeconds;

	// Since holding the door stops player movement, we first check that the interaction isn't just a quick tap
	// before triggering the hold behavior. This prevents unwanted movement interruptions
	// and allows tap interactions while the player is moving.
	// We use InteractionHoldTimeThreshold instead of InteractionTapTimeThreshold
	// to provide more flexibility for fine-tuning the timing.
	if (InteractionHeldDuration > InteractionHoldTimeThreshold && bListeningToInputs == false)
	{
		SetInteractingActorBlocked(true);
		SetDoorAsInputListener(true);
		DisableDoorBlockers();

		PlayInteractionMontageAndSound(true);

		bWasPlayerInFrontAtGrab = IsPlayerInFrontOfDoor();
		bCanStartInteraction = false;
		UpdatePrompt();
	}
}

void AIDFDoorActor::InteractCompleted_Implementation()
{
	Super::InteractCompleted_Implementation(); 

	if (bUsingKey == true) // block the interaction when the unlock montage is playing
	{
		return;
	}

	SetInteractingActorBlocked(false);
	SetDoorAsInputListener(false);

	//check if the interaction was a tap
	float currentTimeSeconds = UGameplayStatics::GetTimeSeconds(GetWorld());
	if (currentTimeSeconds - InteractionStartedWorldSeconds < InteractionTapTimeThreshold)
	{
		TapInteraction(bDoubleTapFlag);
	}

	EndInteraction();
}

void AIDFDoorActor::SetIsTargeted_Implementation(bool bNewIsTargeted, UPrimitiveComponent* TargetedComponent)
{
	Super::SetIsTargeted_Implementation(bNewIsTargeted, TargetedComponent);

	if(TargetedComponent != nullptr && CurrentInteractionState == EIDFInteractionState::NotHeld)
		SetInteractionTarget(TargetedComponent);
}

void AIDFDoorActor::SetInteractionTarget(UPrimitiveComponent* TargetComponent)
{
	if (TargetComponent == DoorSkeletalMesh) InteractionTargetComponent = CreatedDoorComponent;
	else InteractionTargetComponent = TargetComponent;
}

void AIDFDoorActor::UpdatePrompt()
{
	if (IsPlayerInFrontOfDoor())
	{
		PromptLocation->AttachToComponent(DoorSkeletalMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, "PromptSocket_1");
	}
	else
	{
		PromptLocation->AttachToComponent(DoorSkeletalMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, "PromptSocket_2");
	}

	Super::UpdatePrompt();
}

void AIDFDoorActor::PlayInteractionMontageAndSound(bool bShouldStopAllMontages)
{
	USoundCue* LoadedInteractionSFX = nullptr;

	if (bAnimateHandle && !HandleInteractionSFX.IsNull())
	{
		LoadedInteractionSFX = HandleInteractionSFX.LoadSynchronous();
	}

	if (LoadedInteractionSFX && GetWorld())
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), LoadedInteractionSFX, GetActorLocation());
	}

	if (LockComponent->GetIsLocked())
	{
		UAnimMontage* LoadedLockedMontage = LockedMontage.LoadSynchronous();
		if (LoadedLockedMontage)
		{
			DoorSkeletalMesh->GetAnimInstance()->Montage_Play(LoadedLockedMontage, 1.0f, EMontagePlayReturnType::MontageLength, 0.0f, false);
		}
	}

	if (bAnimateHandle == false || LockComponent->GetCurrentLockState() == EDoorLockState::Broken) return;

	UAnimMontage* LoadedMontage = InteractMontage.LoadSynchronous();
	if (LoadedMontage)
	{
		DoorSkeletalMesh->GetAnimInstance()->Montage_Play(LoadedMontage, 1.0f, EMontagePlayReturnType::MontageLength, 0.15f, bShouldStopAllMontages);
	}
}

void AIDFDoorActor::EndInteraction()
{
	UpdateDoorBlockers();

	DoorSkeletalMesh->GetAnimInstance()->StopAllMontages(0.25f);

	bCanStartInteraction = true;
	UpdatePrompt();
}


void AIDFDoorActor::KeyUsed_Implementation(FKeyItem UsedKey)
{
	SpawnKeyItemMesh(UsedKey.KeyMesh, UsedKey.DoorTargetSocket);

	bUsingKey = true;

	//if unlock montage is set from the editor, play montage and add TryUnlockDoor() to the "Unlock" montage notify event
	UAnimMontage* Montage = UnlockMontage.LoadSynchronous();
	if (IsValid(Montage))
	{
		UAnimInstance* AnimInstance = DoorSkeletalMesh->GetAnimInstance();
		if (AnimInstance)
		{
			AnimInstance->Montage_Play(Montage);
		}
	}
	else //if unlock montage is not set, then execute TryUnlockDoor immediately insted
	{
		
		TryUnlockDoor();
	}
}

void AIDFDoorActor::TryUnlockDoor()
{
	//Check if door is still locked after the key has been used
	if (LockComponent->GetIsLocked() == false)
	{
		UE_LOG(LogTemp, Error, TEXT("TRY UNLOCK - Not Locked, set simulate physics"));
		DoorSkeletalMesh->SetBodySimulatePhysics(DoorBoneName, true);
		UpdateNavObstacleAreaClass();
		if (!UnlockedSFX.IsNull())
		{
			USoundCue* LoadedSoundCue = UnlockedSFX.LoadSynchronous();
			if (LoadedSoundCue && GetWorld())
			{
				UGameplayStatics::PlaySoundAtLocation(GetWorld(), LoadedSoundCue, GetActorLocation());
			}
		}
	}

	bUsingKey = false;
}

void AIDFDoorActor::OnMontageNotifyReceived(FName NotifyName, const FBranchingPointNotifyPayload& Payload)
{
	if (NotifyName == "Unlock")
	{
		SendHUDMessage(UnlockedHUDMessage);
		TryUnlockDoor();
	}
}


UStaticMeshComponent* AIDFDoorActor::SpawnKeyItemMesh(TSoftObjectPtr<UStaticMesh> KeyItemMesh, FName SocketName)
{
	if (KeyItemMesh.IsValid())
	{
		UStaticMesh* LoadedMesh = KeyItemMesh.LoadSynchronous();

		if (LoadedMesh)
		{
			KeyItemStaticMesh = NewObject<UStaticMeshComponent>(this);

			if (KeyItemStaticMesh.IsValid())
			{
				KeyItemStaticMesh->SetStaticMesh(LoadedMesh);
				KeyItemStaticMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

				KeyItemStaticMesh->AttachToComponent(DoorSkeletalMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, SocketName);

				KeyItemStaticMesh->RegisterComponent();

				return KeyItemStaticMesh.Get();
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Failed to load StaticMesh from the soft pointer."));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid soft reference to StaticMesh."));
	}

	return nullptr;
}

void AIDFDoorActor::HideSpawnedKeyMesh()
{
	UE_LOG(LogTemp, Warning, TEXT("HIDE SPAWNED KEY "));
	if (KeyItemStaticMesh.IsValid())
	{
		UStaticMeshComponent* MeshComponent = KeyItemStaticMesh.Get();
		if (MeshComponent)
		{
			UE_LOG(LogTemp, Warning, TEXT("Key mesh component valid: HIDE SPAWNED KEY"));
			MeshComponent->SetVisibility(false);
			MeshComponent->SetHiddenInGame(true);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Key item mesh component not valid"));

		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Key item soft pointer ref not valid"));
	}
}



void AIDFDoorActor::SetDoubleTapFlag(bool bNewDoubleTapFlag)
{
	bDoubleTapFlag = bNewDoubleTapFlag;
}


void AIDFDoorActor::SetDoorAsInputListener(bool bNewShouldListen)
{
	APlayerController* Controller = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (!Controller) return;

	if (Controller == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("FEDoorActor::SetDoorAsInputListener: PlayerController is null! Cannot run the function"));
		return;
	}

	UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(Controller->InputComponent);
	if (EIC == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("FEDoorActor::SetDoorAsInputListener: EnhancedInputComponent is null! Cannot run the function"));
		return;
	}

	if (bNewShouldListen)
	{
		this->EnableInput(Controller);

		if (EIC && !DoorInteractionAction.IsNull())
		{
			DoorActionBindingHandle = EIC->BindAction(DoorInteractionAction.LoadSynchronous(), ETriggerEvent::Triggered, this, &AIDFDoorActor::OnDoorMoveAction).GetHandle();
			UE_LOG(LogTemp, Warning, TEXT("ADD ACTION BINDING"));
		}
	}
	else
	{
		if (EIC && !DoorInteractionAction.IsNull())
		{
			UE_LOG(LogTemp, Warning, TEXT("REMOVE ACTION BINDING"));
			EIC->RemoveBindingByHandle(DoorActionBindingHandle);
		}

		this->DisableInput(Controller);
	}

	bListeningToInputs = bNewShouldListen;
}

void AIDFDoorActor::SetInteractingActorBlocked(bool newIsBlocked)
{
	APlayerController* Controller = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	ACharacter* Character = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	
	if (Controller == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("FEDoorActor::SetInteractingActorBlocked: PlayerController is null! Cannot run the function"));
		return;
	}
	if (Character == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("FEDoorActor::SetInteractingActorBlocked: Character is null! Cannot run the function"));
		return;
	}

	if (newIsBlocked == true)
	{
		Character->GetCharacterMovement()->DisableMovement();
		Controller->SetIgnoreLookInput(newIsBlocked);
	}
	else
	{
		Character->GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);
		Controller->ResetIgnoreLookInput();
	}
}
