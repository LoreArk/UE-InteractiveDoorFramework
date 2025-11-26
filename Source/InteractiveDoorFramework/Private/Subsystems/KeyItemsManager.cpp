// Fill out your copyright notice in the Description page of Project Settings.


#include "Subsystems/KeyItemsManager.h"
#include "Structs/IDFCollectibleStructs.h"

TArray<FKeyItem> UKeyItemsManager::GetFoundKeys()
{
	return FoundKeys;
}

void UKeyItemsManager::AddFoundKey(FKeyItem KeyID)
{

	UE_LOG(LogTemp, Warning, TEXT("KEY ITEM MANAGER KEY ADDED"));
	FoundKeys.Add(KeyID);
}


