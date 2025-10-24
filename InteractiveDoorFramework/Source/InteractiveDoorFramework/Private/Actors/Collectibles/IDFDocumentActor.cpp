// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Collectables/IDFDocumentActor.h"
#include "Subsystems/IDFItemUIManager.h"

void AIDFDocumentActor::InteractStarted_Implementation(AActor* InteractingActor, FHitResult TraceHitResult)
{
	Super::InteractStarted_Implementation(InteractingActor, TraceHitResult);
}

void AIDFDocumentActor::ShowItemUI()
{
    UIDFItemUIManager* DescManager = GetGameInstance()->GetSubsystem<UIDFItemUIManager>();
    if (DescManager)
    {
        DescManager->ShowItemDescription(DocumentSettings.DocumentTitle, DocumentSettings.DocumentContent);
    }
}


