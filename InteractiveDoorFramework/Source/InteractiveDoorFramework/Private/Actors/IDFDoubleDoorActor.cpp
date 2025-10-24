// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/IDFDoubleDoorActor.h"
#include "GameFramework/Character.h"
#include "Subsystems/IDFItemUIManager.h"
#include "PhysicsEngine/BodySetup.h"     
#include "Kismet/GameplayStatics.h"

AIDFDoubleDoorActor::AIDFDoubleDoorActor()
{
	SecondDoorSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SecondDoorMesh"));
	SecondDoorSkeletalMesh->SetupAttachment(RootComponent);
	SecondDoorBlockerF = CreateDefaultSubobject<UBoxComponent>(TEXT("SecondDoorBlockerF"));
	SecondDoorBlockerF->SetupAttachment(RootComponent);
	SecondDoorBlockerB = CreateDefaultSubobject<UBoxComponent>(TEXT("SecondDoorBlockerB"));
	SecondDoorBlockerB->SetupAttachment(RootComponent);
	

	HandleTransformRefB = CreateDefaultSubobject<USceneComponent>(TEXT("HandleTransformRef B"));
	HandleTransformRefB->SetupAttachment(SecondDoorSkeletalMesh);
	HandleTransformRefB->SetRelativeLocation(FVector::ZeroVector);
}

void AIDFDoubleDoorActor::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	ClearPreviousComponents();

	if (DoorMesh.IsValid())
	{
		UStaticMeshComponent* Door = Cast<UStaticMeshComponent>(AddComponentByClass(UStaticMeshComponent::StaticClass(), false, FTransform::Identity, false));
		if (Door)
		{
			Door->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			Door->SetCollisionObjectType(ECollisionChannel::ECC_PhysicsBody);
			Door->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldStatic, ECollisionResponse::ECR_Ignore);
			Door->SetStaticMesh(DoorMesh.Get());
			FVector Scale = Door->GetRelativeScale3D();
			Scale.X = Scale.X * -1;
			Door->SetRelativeScale3D(Scale);
			Door->AttachToComponent(SecondDoorSkeletalMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName("DoorSocket"));
			
			CreatedDoorComponentB = Door;
			CreatedComponentsB.Add(Door);

			ApplyMaterials(Door, DoorMaterials);
		}
	}

	FVector LocalHandleLocation = HandleTransformRef->GetRelativeLocation();
	
	HandleTransformRefB->SetRelativeLocation(LocalHandleLocation);

	const bool bShowHandleB = !bIsOneSided || (bIsOneSided && (!bFlipOpeningSide || !bHideBlockedSideHandle));
	const bool bShowHandleA = !bIsOneSided || (bIsOneSided && (bFlipOpeningSide || !bHideBlockedSideHandle));

	if (HandleMesh.IsValid())
	{
		FTransform HandleBoneTransform = SecondDoorSkeletalMesh->GetBoneTransform(FName("Handle"), ERelativeTransformSpace::RTS_Component);
		FTransform HandleSocketATransform = SecondDoorSkeletalMesh->GetBoneTransform(FName("HandleSocket_1"), ERelativeTransformSpace::RTS_Component);
		FTransform HandleSocketBTransform = SecondDoorSkeletalMesh->GetBoneTransform(FName("HandleSocket_2"), ERelativeTransformSpace::RTS_Component);

		const FVector OffsetA = HandleSocketATransform.GetLocation() - HandleBoneTransform.GetLocation();
		const FVector OffsetB = HandleSocketBTransform.GetLocation() - HandleBoneTransform.GetLocation();

		const FVector RefLocation = HandleTransformRefB->GetComponentLocation();

		const FVector MeshALocation = RefLocation + OffsetA;
		const FVector MeshBLocation = RefLocation + OffsetB;

		if (bShowHandleA && HandleTransformRef)
		{
			UStaticMeshComponent* Handle1 = Cast<UStaticMeshComponent>(AddComponentByClass(UStaticMeshComponent::StaticClass(), false, FTransform::Identity, false));
			if (Handle1)
			{
				Handle1->SetStaticMesh(HandleMesh.Get());
				Handle1->SetSimulatePhysics(false);
				Handle1->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				Handle1->SetupAttachment(SecondDoorSkeletalMesh);
				//Handle1->RegisterComponent();
				//Handle1->SetRelativeLocation(HandleTransformRef->GetRelativeLocation());
				FVector Scale = Handle1->GetRelativeScale3D();
				Scale.Z *= -1;
				Handle1->SetRelativeScale3D(Scale);

				Handle1->SetWorldLocation(MeshBLocation);
				FRotator Rot = HandleSocketBTransform.GetRotation().Rotator();
				Rot.Roll += 180.f; 
				Handle1->SetWorldRotation(Rot);
				Handle1->SetMobility(EComponentMobility::Movable);

				CreatedHandleAComponentB = Handle1;
				CreatedComponentsB.Add(Handle1);

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
				Handle2->SetupAttachment(SecondDoorSkeletalMesh);
				//Handle2->RegisterComponent();
				//Handle2->SetRelativeLocation(HandleTransformRef->GetRelativeLocation());
				Handle2->SetWorldLocation(MeshALocation);
				FRotator Rot = HandleSocketATransform.GetRotation().Rotator();
				Rot.Roll += 180.f;
				Handle2->SetWorldRotation(Rot);
				Handle2->SetMobility(EComponentMobility::Movable);

				CreatedHandleBComponentB = Handle2;
				CreatedComponentsB.Add(Handle2);
				ApplyMaterials(Handle2, HandleMaterials);
			}
		}
	}

	AlignDoorBlockers();
}

bool AIDFDoubleDoorActor::IsPlayerInFrontOfDoorB()
{
	ACharacter* PlayerChar = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	if (!PlayerChar) return false;

	if (!CreatedDoorComponentB) return false;

	FVector PlayerLocation = PlayerChar->GetActorLocation();

	FVector DoorLocation = CreatedDoorComponentB->GetComponentLocation();

	FVector DoorForward = CreatedDoorComponentB->GetForwardVector();

	FVector DoorToPlayer = (PlayerLocation - DoorLocation).GetSafeNormal();
	float Dot = FVector::DotProduct(DoorForward, DoorToPlayer);

	return Dot < 0;
}

void AIDFDoubleDoorActor::AlignDoorBlockers()
{
	Super::AlignDoorBlockers();

	if (!CreatedDoorComponentB || !SecondDoorBlockerF || !SecondDoorBlockerB || !SceneRoot)
		return;

	UStaticMesh* StaticMesh = CreatedDoorComponentB->GetStaticMesh();
	if (!StaticMesh || !StaticMesh->GetBodySetup())
		return;

	UBodySetup* BodySetup = StaticMesh->GetBodySetup();

	if (BodySetup->AggGeom.BoxElems.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("No box collision primitives found in the static mesh"));
		return;
	}

	SecondDoorBlockerF->SetBoxExtent(FVector(10.f, 30.f, 100.f));
	SecondDoorBlockerB->SetBoxExtent(FVector(10.f, 30.f, 100.f));

	const FKBoxElem& Box = BodySetup->AggGeom.BoxElems[0];

	FVector BoxCenterLocal(Box.Center.X, Box.Center.Y, Box.Center.Z);
	FVector BoxExtent(Box.X * 0.5f, Box.Y * 0.5f, Box.Z * 0.5f);

	FTransform MeshTransform = CreatedDoorComponentB->GetComponentTransform();

	FVector BoxCenterWorld = MeshTransform.TransformPosition(BoxCenterLocal);

	FTransform SceneRootTransform = SceneRoot->GetComponentTransform();
	FVector BoxCenterLocalToSceneRoot = SceneRootTransform.InverseTransformPosition(BoxCenterWorld);

	FVector BlockerExtent(10.f, 30.f, 100.f);

	float BlockerY = BoxCenterLocalToSceneRoot.Y;  // Y hardcoded: stessa altezza dell'origin del collider

	// Metti Z a zero o altro valore hardcoded
	float BlockerZ = 0.f;

	float BoxMinX = BoxCenterLocalToSceneRoot.X - BoxExtent.X;
	float BoxMaxX = BoxCenterLocalToSceneRoot.X + BoxExtent.X;

	FVector BlockerFPos(BoxMaxX + BlockerExtent.X + 0.5f, BlockerY, BlockerZ);
	FVector BlockerBPos(BoxMinX - BlockerExtent.X - 0.5f, BlockerY, BlockerZ);

	SecondDoorBlockerF->SetRelativeLocation(BlockerFPos);
	SecondDoorBlockerB->SetRelativeLocation(BlockerBPos);
}


void AIDFDoubleDoorActor::ClearPreviousComponents()
{

	for (UActorComponent* Component : CreatedComponentsB)
	{
		if (Component)
		{
			Component->DestroyComponent();
		}
	}

	CreatedComponentsB.Empty();

	CreatedDoorComponentB = nullptr;
	CreatedHandleAComponentB = nullptr;
	CreatedHandleBComponentB = nullptr;
}

void AIDFDoubleDoorActor::TryUnlockDoor()
{
	if (LockComponent && LockComponent->GetIsLocked() == false)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, "DOOR UNLOCKED");
		DoorSkeletalMesh->SetBodySimulatePhysics(DoorBoneName, true);
		SecondDoorSkeletalMesh->SetBodySimulatePhysics(DoorBoneName, true);

		if (!UnlockedSFX.IsNull())
		{
			USoundCue* LoadedSoundCue = UnlockedSFX.LoadSynchronous();
			if (LoadedSoundCue && GetWorld())
			{
				UGameplayStatics::PlaySoundAtLocation(GetWorld(), LoadedSoundCue, GetActorLocation());
			}
		}
	}

	if (bUsingKey)
	{
		bUsingKey = false;
	}


	SecondDoorSkeletalMesh->IgnoreComponentWhenMoving(DoorSkeletalMesh, true);
	DoorSkeletalMesh->IgnoreComponentWhenMoving(SecondDoorSkeletalMesh, true);
}

void AIDFDoubleDoorActor::BeginPlay()
{
	Super::BeginPlay();

	if (!DoorSkeletalMesh)
	{
		UE_LOG(LogTemp, Error, TEXT("IDFDoubleDoorActor BeginPlay: DoorSkeletalMesh from parent is null!"));
		return;
	}
	if (!SecondDoorSkeletalMesh)
	{
		UE_LOG(LogTemp, Error, TEXT("IDFDoubleDoorActor BeginPlay: SecondDoorSkeletalMesh is null!"));
		return;
	}
	if (!LockComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("IDFDoubleDoorActor BeginPlay: LockComponent is null!"));
		return;
	}

	if (LockComponent->GetIsLocked())
	{
		SecondDoorSkeletalMesh->SetBodySimulatePhysics(DoorBoneName, false);
	}

	if (IsValid(CreatedDoorComponentB))
	{
		CreatedDoorComponentB->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		CreatedDoorComponentB->SetCollisionObjectType(ECollisionChannel::ECC_PhysicsBody);
		CreatedDoorComponentB->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldStatic, ECollisionResponse::ECR_Ignore);
		CreatedDoorComponentB->SetNotifyRigidBodyCollision(true);
		CreatedDoorComponentB->OnComponentHit.AddDynamic(this, &AIDFDoubleDoorActor::OnDoorMeshHit);
	}

	if (IsValid(CreatedHandleAComponentB))
	{
		CreatedHandleAComponentB->AttachToComponent(SecondDoorSkeletalMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, "HandleSocket_1");
	}

	if (IsValid(CreatedHandleBComponentB))
	{
		CreatedHandleBComponentB->AttachToComponent(SecondDoorSkeletalMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, "HandleSocket_2");
	}


	SecondDoorBlockerF->OnComponentHit.AddDynamic(this, &AIDFDoubleDoorActor::OnDoorBlockerHit);
	SecondDoorBlockerB->OnComponentHit.AddDynamic(this, &AIDFDoubleDoorActor::OnDoorBlockerHit);

	SecondDoorBlockerF->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	SecondDoorBlockerB->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	SecondDoorBlockerF->SetCollisionResponseToChannel(ECollisionChannel::ECC_PhysicsBody, ECollisionResponse::ECR_Block);
	SecondDoorBlockerB->SetCollisionResponseToChannel(ECollisionChannel::ECC_PhysicsBody, ECollisionResponse::ECR_Block);

	SecondDoorSkeletalMesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldStatic, ECollisionResponse::ECR_Ignore);
	
	DisableSecondDoorBlockers();

	if (bIsOneSided)
	{
		if (bFlipOpeningSide)
		{
			SecondDoorBlockerF->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			return;
		}

		SecondDoorBlockerB->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		return;
	}


}

void AIDFDoubleDoorActor::PlayInteractionMontageAndSound(bool bShouldStopAllMontages)
{
	if (InteractionTargetComponent == CreatedDoorComponent)
	{
		Super::PlayInteractionMontageAndSound(bShouldStopAllMontages);
	}
	else
	{
		if (bAnimateOpening && InteractMontage.IsValid())
		{
			SecondDoorSkeletalMesh->GetAnimInstance()->Montage_Play(InteractMontage.Get(), 1.0f, EMontagePlayReturnType::MontageLength, 0.0f, bShouldStopAllMontages);
		}
	}

	if (!HandleInteractionSFX.IsNull())
	{
		USoundCue* LoadedSoundCue = HandleInteractionSFX.LoadSynchronous();
		if (LoadedSoundCue && GetWorld())
		{
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), LoadedSoundCue, GetActorLocation());
		}
	}
}

void AIDFDoubleDoorActor::EndInteraction()
{
	Super::EndInteraction();

	SecondDoorSkeletalMesh->GetAnimInstance()->StopAllMontages(0.25f);
}

void AIDFDoubleDoorActor::UpdatePrompt()
{
	if (!InteractionTargetComponent.IsValid()) return;
	//UE_LOG(LogTemp, Warning, TEXT("InteractionTargetComponent: %s"), *InteractionTargetComponent->GetName());

	if (InteractionTargetComponent == CreatedDoorComponent)
	{
		Super::UpdatePrompt();
		return;
	}
	
	if (IsPlayerInFrontOfDoorB())
	{
		PromptLocation->AttachToComponent(SecondDoorSkeletalMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, "PromptSocket_2");
	}
	else
	{
		PromptLocation->AttachToComponent(SecondDoorSkeletalMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, "PromptSocket_1");
	}

	UIDFItemUIManager* UIManager = GetGameInstance()->GetSubsystem<UIDFItemUIManager>();
	if (bCanStartInteraction && bIsTargeted)
	{
		if (UIManager)
		{
			UIManager->ShowPromptWidget(PromptLocation->GetComponentLocation());
		}
	}
	else
	{
		if (UIManager)
		{
			UIManager->HidePromptWidget();
		}
	}
}

void AIDFDoubleDoorActor::SetInteractionTarget(UPrimitiveComponent* TargetComponent)
{
	if (TargetComponent == DoorSkeletalMesh && CreatedDoorComponent) InteractionTargetComponent = CreatedDoorComponent;
	else if (TargetComponent == SecondDoorSkeletalMesh && CreatedDoorComponentB) InteractionTargetComponent = CreatedDoorComponentB;
	else InteractionTargetComponent = TargetComponent;
}


void AIDFDoubleDoorActor::PushDoor(float PushImpulseStrength)
{
	if (!DoorSkeletalMesh || !SecondDoorSkeletalMesh) return;

	if (IsClosed())
	{
		DisableFirstDoorBlockers();
	}
	if (IsSecondDoorClosed())
	{
		DisableSecondDoorBlockers();
	}

	ACharacter* PlayerChar = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	if (!PlayerChar) return;

	FVector PlayerLocation = PlayerChar->GetActorLocation();
	FVector ActorLocation = GetActorLocation(); 

	FVector DoorFaceLocation = DoorSkeletalMesh->GetSocketLocation("DoorFace");
	FRotator DoorFaceRotation = DoorSkeletalMesh->GetSocketRotation("DoorFace");
	FVector DoorPushDirection = DoorFaceRotation.RotateVector(FVector(1, 0, 0)).GetSafeNormal();

	FVector SecondDoorFaceLocation = SecondDoorSkeletalMesh->GetSocketLocation("DoorFace");
	FRotator SecondDoorFaceRotation = SecondDoorSkeletalMesh->GetSocketRotation("DoorFace");
	FVector SecondDoorPushDirection = SecondDoorFaceRotation.RotateVector(FVector(1, 0, 0)).GetSafeNormal();

	float Dot = FVector::DotProduct(PlayerChar->GetActorForwardVector(), GetActorForwardVector());

	if (Dot < 0)
	{
		DoorPushDirection *= -1;
		SecondDoorPushDirection *= -1;
	}

	SecondDoorPushDirection *= -1;

	if (IsClosed() && IsSecondDoorClosed())
	{
		// Push both doors if closed
		DoorSkeletalMesh->AddImpulse(DoorPushDirection * PushImpulseStrength, "Door", true);
		SecondDoorSkeletalMesh->AddImpulse(SecondDoorPushDirection * PushImpulseStrength, "Door", true);
	}
	else if (InteractionTargetComponent.IsValid())
	{
		// Push only the interacted door if doors are open
		if (InteractionTargetComponent == CreatedDoorComponent)
		{
			UE_LOG(LogTemp, Warning, TEXT("Pushing FIRST door."));
			DoorSkeletalMesh->AddImpulse(DoorPushDirection * PushImpulseStrength, "Door", true);
			
			if (PushImpulseStrength >= StrongPushStregth)
			{
				FHitResult HitRes;
				HitRes.Location = DoorFaceLocation;
				OnMakeNoise.Broadcast(HitRes);
				EventNoise(HitRes);
			}
		}
		else if (InteractionTargetComponent == CreatedDoorComponentB)
		{
			UE_LOG(LogTemp, Warning, TEXT("Pushing SECOND door."));
			SecondDoorSkeletalMesh->AddImpulse(SecondDoorPushDirection * PushImpulseStrength, "Door", true);

			if (PushImpulseStrength >= StrongPushStregth)
			{
				FHitResult HitRes;
				HitRes.Location = SecondDoorFaceLocation;
				OnMakeNoise.Broadcast(HitRes);
				EventNoise(HitRes);
			}
		}
	}

	if (bDrawDebugs)
	{
		float DebugLineLength = 100.0f;
		float DebugArrowSize = 10.0f;

		DrawDebugDirectionalArrow(GetWorld(),
			DoorFaceLocation, DoorFaceLocation + (DoorPushDirection * DebugLineLength),
			DebugArrowSize, FColor::Red, false, 2.0f, 0, 2.0f);

		DrawDebugDirectionalArrow(GetWorld(),
			SecondDoorFaceLocation, SecondDoorFaceLocation + (SecondDoorPushDirection * DebugLineLength),
			DebugArrowSize, FColor::Blue, false, 2.0f, 0, 2.0f);
	}
}

void AIDFDoubleDoorActor::MoveDoor(float Amount)
{
	if (InteractionTargetComponent == CreatedDoorComponent)
	{
		Super::MoveDoor(Amount);
		return;
	}
	
	UE_LOG(LogTemp, Warning, TEXT("Move double door"));

	float directionFix = -1;
	if (bWasPlayerInFrontAtGrabB)
	{
		directionFix = 1;
	}
	float NewAngVelZ = FMath::Clamp(Amount, -MaxAngularVelocity, MaxAngularVelocity);

	FVector AngularVelocity(0.0f, 0.0f, NewAngVelZ * directionFix);
	FVector SecondDoorAngularVel(0.0f, 0.0f, -NewAngVelZ * directionFix);

	SecondDoorSkeletalMesh->SetPhysicsAngularVelocityInDegrees(SecondDoorAngularVel, true, DoorBoneName);
	/*if(InteractionTargetComponent == CreatedDoorComponent)
	DoorSkeletalMesh->SetPhysicsAngularVelocityInDegrees(AngularVelocity, true, DoorBoneName);

	if (InteractionTargetComponent == CreatedDoorComponentB)
	SecondDoorSkeletalMesh->SetPhysicsAngularVelocityInDegrees(SecondDoorAngularVel, true, DoorBoneName);*/

	UpdateDoorBlockers();
}

bool AIDFDoubleDoorActor::IsSecondDoorClosed()
{
	float ActorYaw = GetActorRotation().Yaw;
	float SecondDoorYaw = SecondDoorSkeletalMesh->GetSocketRotation(DoorBoneName).Yaw;
	float SecondYawDifference = FMath::FindDeltaAngleDegrees(ActorYaw + 180, SecondDoorYaw);

	return FMath::Abs(SecondYawDifference) < DoorCloseYawTolerance;
}


void AIDFDoubleDoorActor::UpdateDoorBlockers()
{
	Super::UpdateDoorBlockers();
	
	UpdateSecondDoorBlockers();
}

void AIDFDoubleDoorActor::InteractStarted_Implementation(AActor* InteractingActor, FHitResult TraceHitResult)
{
	Super::InteractStarted_Implementation(InteractingActor, TraceHitResult);

	bWasPlayerInFrontAtGrabB = IsPlayerInFrontOfDoorB();
}

void AIDFDoubleDoorActor::UpdateSecondDoorBlockers()
{
	if (bKeepSecondDoorClosed)
		return;
	if (IsSecondDoorClosed())
	{
		bKeepSecondDoorClosed = true;
		TWeakObjectPtr<AIDFDoubleDoorActor> ThisWeak = this;
		GetWorld()->GetTimerManager().SetTimer(SecondDoorBlockerTimerHandle, [ThisWeak]()
			{
				if (ThisWeak.IsValid())
				{
					ThisWeak->bKeepSecondDoorClosed = false;
					ThisWeak->DisableSecondDoorBlockers();
				}
			}, BlockDoorWhenCloseTime, false);
		return;
	}

	float SecondDoorYaw = SecondDoorSkeletalMesh->GetSocketRotation(DoorBoneName).Yaw;
	float ActorYaw = GetActorRotation().Yaw;

	float SecondYawDifference = FMath::FindDeltaAngleDegrees(ActorYaw + 180, SecondDoorYaw);

	//UE_LOG(LogTemp, Warning, TEXT("DoorYaw: %f, ActorYaw: %f, YawDifference: %f"), DoorYaw, ActorYaw, YawDifference);
	//UE_LOG(LogTemp, Warning, TEXT("SecondDoorYaw: %f, SecondActorYaw: %f, SecondYawDifference: %f"), SecondDoorYaw, ActorYaw + 180, SecondYawDifference);

	if (IsSecondDoorClosed() == false)
	{
		if (SecondYawDifference > 0)
		{
			SecondDoorBlockerB->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
			DisableBlocker(SecondDoorBlockerF, false);
		}
		else
		{
			SecondDoorBlockerF->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
			DisableBlocker(SecondDoorBlockerB, true);
		}
	}
}

void AIDFDoubleDoorActor::DisableFirstDoorBlockers()
{
	DisableDoorBlockers();
}

void AIDFDoubleDoorActor::DisableSecondDoorBlockers()
{
	DisableBlocker(SecondDoorBlockerB, true);
	DisableBlocker(SecondDoorBlockerF, false);
}

