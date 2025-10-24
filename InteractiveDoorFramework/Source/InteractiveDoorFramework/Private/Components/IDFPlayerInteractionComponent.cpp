


#include "Components/IDFPlayerInteractionComponent.h"

#include "Interfaces/IDFInteractable.h"
//#include "Actors/IDFPropActor.h"
#include "Camera/CameraComponent.h"
//#include "ForgottenEchoes/Player/FEPlayerCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"


// Sets default values for this component's properties
UIDFPlayerInteractionComponent::UIDFPlayerInteractionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UIDFPlayerInteractionComponent::StartInteraction()
{
	FHitResult HitResult;
	InteractTrace(HitResult);

	if(!HitResult.IsValidBlockingHit()) return;

	if(HitResult.Component != TargetInteractable) return;

	if (TargetInteractable.IsValid())
	{
		InteractedActor = TargetInteractable;
		IIDFInteractable::Execute_InteractStarted(InteractedActor.Get()->GetOwner(), GetOwner(), HitResult);
	}

	//AFEPropActor* Prop = Cast<AFEPropActor>(HitResult.GetActor());
	//if(!IsValid(Prop)) return;

	//AFEPlayerCharacter* PlayerCharacter = Cast<AFEPlayerCharacter>(GetOwner());
	//if(!IsValid(PlayerCharacter)) return;

	//UPhysicsHandleComponent* PlayerPhysicsHandle = PlayerCharacter->GetPhysicsHandle();
	//if(!IsValid(PlayerPhysicsHandle)) return;
	
	//UPrimitiveComponent* GrabbedComponent = HitResult.GetComponent();
	//if(!IsValid(GrabbedComponent)) return;

	//FRotator Rotation = InteractedActor->GetOwner()->GetRootComponent()->GetComponentRotation();

	//PlayerPhysicsHandle->GrabComponentAtLocationWithRotation(GrabbedComponent, "None", HitResult.Location, Rotation);
	//USceneComponent* GrabHandle = PlayerCharacter->GetGrabHandle();
	//GrabHandle->SetWorldLocationAndRotation(HitResult.Location, Rotation);
}

void UIDFPlayerInteractionComponent::EndInteraction()
{
	if (InteractedActor.IsValid())
	{
		IIDFInteractable::Execute_InteractCompleted(InteractedActor.Get()->GetOwner());
		InteractedActor = nullptr;
	}

	//AFEPlayerCharacter* PlayerCharacter = Cast<AFEPlayerCharacter>(GetOwner());
	//if(!IsValid(PlayerCharacter)) return;

	//UPhysicsHandleComponent* PlayerPhysicsHandle = PlayerCharacter->GetPhysicsHandle();
	//if(!IsValid(PlayerPhysicsHandle)) return;
	
	//UPrimitiveComponent* GrabbedComponent = PlayerPhysicsHandle->GetGrabbedComponent();
	/*if(IsValid(GrabbedComponent))
	{
		PlayerPhysicsHandle->ReleaseComponent();		
	}*/
}


// Called when the game starts
void UIDFPlayerInteractionComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
}

void UIDFPlayerInteractionComponent::InteractTrace(FHitResult& OutHitResult)
{

	AActor* Owner = GetOwner();
	if (!IsValid(Owner)) return;


	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (!PlayerController) return;


	FCollisionQueryParams Params;
	Params.AddIgnoredActor(Owner);
	
	FHitResult HitResult;
	FCollisionObjectQueryParams ObjectQueryParams;
	ObjectQueryParams.AddObjectTypesToQuery(ECC_PhysicsBody);
	ObjectQueryParams.AddObjectTypesToQuery(ECC_WorldDynamic);
	ObjectQueryParams.AddObjectTypesToQuery(ECC_GameTraceChannel1);
	ObjectQueryParams.AddObjectTypesToQuery(ECC_GameTraceChannel2);

	FCollisionShape Shape = FCollisionShape::MakeSphere(TraceRadius);

	FVector Start;
	FRotator ViewRotation;
	PlayerController->GetPlayerViewPoint(Start, ViewRotation);

	FVector End = Start + (ViewRotation.Vector() * TraceLength);
	
	GetWorld()->SweepSingleByObjectType(HitResult, Start, End, FQuat::Identity, ObjectQueryParams, Shape, Params);

	OutHitResult = HitResult;

	if (bDebugTrace == false)
		return;

	if (HitResult.bBlockingHit)
	{
		DrawDebugSphere(GetWorld(), HitResult.ImpactPoint, 10.0f, 12, FColor::Green, false, 0.02f);
	}
	else
	{
		DrawDebugSphere(GetWorld(), End, Shape.GetSphereRadius(), 12, FColor::Red, false, 0.02f);
	}
}

void UIDFPlayerInteractionComponent::UpdateTargetInteractable()
{
	FHitResult HitResult;
	InteractTrace(HitResult);
	AActor* HitActor = HitResult.GetActor();

	// Check if we hit an interactable actor
	if (HitResult.bBlockingHit && HitActor && HitActor->Implements<UIDFInteractable>())
	{
		if (TargetInteractable.IsValid())
		{
			if (TargetInteractable.Get()->GetOwner() != HitResult.Component->GetOwner())
			{
				IIDFInteractable::Execute_SetIsTargeted(TargetInteractable.Get()->GetOwner(), false, nullptr);
			}
		}

		// Set new target
		TargetInteractable = HitResult.Component;
		IIDFInteractable::Execute_SetIsTargeted(HitActor, true, HitResult.GetComponent());
		
		return;
	}
	
	// Clear the target if nothing valid is hit
	if (TargetInteractable.IsValid())
	{
		IIDFInteractable::Execute_SetIsTargeted(TargetInteractable.Get()->GetOwner(), false, nullptr);
		TargetInteractable = nullptr;
	}
}


// Called every frame
void UIDFPlayerInteractionComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                                  FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UpdateTargetInteractable();
	/*
	// ...
	AFEPlayerCharacter* PlayerCharacter = Cast<AFEPlayerCharacter>(GetOwner());
	if(!IsValid(PlayerCharacter)) return;

	UPhysicsHandleComponent* PlayerPhysicsHandle = PlayerCharacter->GetPhysicsHandle();
	if(!IsValid(PlayerPhysicsHandle)) return;
	
	UPrimitiveComponent* GrabbedComponent = PlayerPhysicsHandle->GetGrabbedComponent();
	if(IsValid(GrabbedComponent))
	{
		if (InteractedActor.Get() == nullptr)
		{
			UE_LOG(LogTemp, Error, TEXT("Interacted actor valid"));
		}
		USceneComponent* GrabHandle = PlayerCharacter->GetGrabHandle();
		if(!IsValid(GrabHandle)) return;
		
		//Calculate location
		FVector TargetLocation;
		FRotator TargetRotation;
		PlayerPhysicsHandle->GetTargetLocationAndRotation(TargetLocation, TargetRotation);
		FVector GrabHandleLocation = GrabHandle->GetComponentLocation();
		FVector LerpedLocation = FMath::Lerp(TargetLocation, GrabHandleLocation, DeltaTime * 15);

		//Calculate rotation
		float GrabHandleYaw = GrabHandle->GetComponentRotation().Yaw;
		FRotator InteractableNewRotation = InteractedActor.Get()->GetOwner()->GetActorRotation();
		InteractableNewRotation.Yaw = GrabHandleYaw;

		PlayerPhysicsHandle->SetTargetLocationAndRotation(LerpedLocation, InteractableNewRotation);
	}*/
}

