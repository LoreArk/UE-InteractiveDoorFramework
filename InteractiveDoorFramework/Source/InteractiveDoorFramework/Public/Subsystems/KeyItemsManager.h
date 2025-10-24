// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "KeyItemsManager.generated.h"

/**
 * 
 */
UCLASS()
class INTERACTIVEDOORFRAMEWORK_API UKeyItemsManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<FKeyItem> FoundKeys;

public:

	UFUNCTION()
	TArray<FKeyItem> GetFoundKeys();

	UFUNCTION(BlueprintCallable)
	void AddFoundKey(FKeyItem KeyID);
};
