// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Collectables/IDFKeyActor.h"
#include "Subsystems/IDFItemUIManager.h"
#include "Kismet/GameplayStatics.h"
#include "Subsystems/KeyItemsManager.h"
#include "EnhancedInputComponent.h"
//#include "ForgottenEchoes/Player/FEPlayerCharacter.h"


void AIDFKeyActor::DisableActor()
{
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
}

void AIDFKeyActor::EndExamination(AActor* InteractingActor)
{
	Super::EndExamination(InteractingActor);

	UE_LOG(LogTemp, Warning, TEXT("Stop examination"));
	bIsMovingToPosition = false;

	HideItemUI();

	if (bIsTargeted)
	{
		if (TargetedMaterial.IsNull()) return;

		UMaterialInstance* Material = TargetedMaterial.LoadSynchronous();

		if (!IsValid(Material)) return;

		ItemMesh->SetOverlayMaterial(Material);
	}


	UKeyItemsManager* KeyItemsManager = GetGameInstance()->GetSubsystem<UKeyItemsManager>();

	if (KeyItemsManager == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("KEY ITEM MANAGER NULL"));

		return;
	}

	KeyItemsManager->AddFoundKey(KeyItemSettings);

	DisableActor();
}

void AIDFKeyActor::ShowItemUI()
{
	UIDFItemUIManager* DescManager = GetGameInstance()->GetSubsystem<UIDFItemUIManager>();
	if (DescManager)
	{
		DescManager->ShowItemDescription(KeyItemSettings.KeyName, KeyItemSettings.KeyDescription);
	}
}
