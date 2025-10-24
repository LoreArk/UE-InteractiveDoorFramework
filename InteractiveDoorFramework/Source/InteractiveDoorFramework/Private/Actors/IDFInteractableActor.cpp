// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/IDFInteractableActor.h"
#include "Subsystems/IDFItemUIManager.h"

AIDFInteractableActor::AIDFInteractableActor()
{
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
	RootComponent = SceneRoot;

	PromptLocation = CreateDefaultSubobject<USceneComponent>(TEXT("Prompt Location"));
	PromptLocation->SetupAttachment(SceneRoot);

	bCanStartInteraction = true;
}

void AIDFInteractableActor::BeginPlay()
{
	Super::BeginPlay();

}

void AIDFInteractableActor::InteractStarted_Implementation(AActor* InteractingActor, FHitResult TraceHitResult)
{
}

void AIDFInteractableActor::InteractHeld_Implementation()
{
}

void AIDFInteractableActor::InteractCompleted_Implementation()
{
}

void AIDFInteractableActor::SetIsTargeted_Implementation(bool bNewIsTargeted, UPrimitiveComponent* TargetedComponent)
{
	bIsTargeted = bNewIsTargeted;

	/*if (bIsTargeted == true)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, "SET IS TARGETED");
	}
	else
	{

		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, "SET IS TARGETED false");
	}*/


	UpdatePrompt();
}

void AIDFInteractableActor::UpdatePrompt()
{
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


