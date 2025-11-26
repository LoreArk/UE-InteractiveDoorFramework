// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/IDFMovableActor.h"
#include "Kismet/GameplayStatics.h"

AIDFMovableActor::AIDFMovableActor()
{
	PrimaryActorTick.bCanEverTick = true;

	CurrentInteractionState = EIDFInteractionState::NotHeld;


}

void AIDFMovableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsTargeted)
	{
		UpdatePrompt();
	}
}


void AIDFMovableActor::InteractStarted_Implementation(AActor* InteractingActor, FHitResult TraceHitResult)
{
	Super::InteractStarted_Implementation(InteractingActor, TraceHitResult);

	SetInteractionState(EIDFInteractionState::Held);
	
	InteractionTargetComponent = TraceHitResult.Component;
}

void AIDFMovableActor::InteractHeld_Implementation()
{
	Super::InteractHeld_Implementation();
}

void AIDFMovableActor::InteractCompleted_Implementation()
{
	Super::InteractCompleted_Implementation();

	SetInteractionState(EIDFInteractionState::NotHeld);
}

void AIDFMovableActor::SetIsTargeted_Implementation(bool bNewIsTargeted, UPrimitiveComponent* TargetedComponent)
{
	Super::SetIsTargeted_Implementation(bNewIsTargeted, TargetedComponent);
}


void AIDFMovableActor::EventNoise_Implementation(FHitResult Hit)
{
	if (!NoiseSFX.IsNull())
	{
		USoundCue* LoadedSoundCue = NoiseSFX.LoadSynchronous();
		if (LoadedSoundCue && GetWorld())
		{
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), LoadedSoundCue, Hit.Location);
		}
	}

	APawn* NoiseInstigator = Cast<APawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));

	if (NoiseInstigator)
	{
	}
}

void AIDFMovableActor::EventSound_Implementation(FVector Location)
{
	if (!SoftCollisionSFX.IsNull())
	{
		USoundCue* LoadedSoundCue = SoftCollisionSFX.LoadSynchronous();
		if (LoadedSoundCue && GetWorld())
		{
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), LoadedSoundCue, Location);
		}
	}
}

void AIDFMovableActor::SetInteractionState(EIDFInteractionState NewInteractionState)
{
	CurrentInteractionState = NewInteractionState;
}

void AIDFMovableActor::HandleComponentHit(float NormalImpulseLength,float DeltaMagnitude, FHitResult Hit)
{
	
}
