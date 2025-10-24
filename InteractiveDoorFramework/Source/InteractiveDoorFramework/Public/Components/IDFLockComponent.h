// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Structs/IDFCollectibleStructs.h"
#include "IDFLockComponent.generated.h"

UENUM(BlueprintType)
enum class EDefaultLockState : uint8
{
	Default UMETA(DisplayName = "Unlocked"),
	OneSide UMETA(DisplayName = "One-Side Lock"),
	Key     UMETA(DisplayName = "Locked with Key")
};

UENUM(BlueprintType)
enum class EDoorLockState : uint8
{
	Unlocked        UMETA(DisplayName = "Unlocked"),
	Locked_NoKey    UMETA(DisplayName = "Locked - Missing Key"),
	Locked_WrongSide UMETA(DisplayName = "Locked - Wrong Side")
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKeyItemUsed, FKeyItem, KeyItem);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOneSideUnlock);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INTERACTIVEDOORFRAMEWORK_API UIDFLockComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UIDFLockComponent();


	/**< Event listened by the DoorActor. */
	UPROPERTY(BlueprintAssignable)
	FOnKeyItemUsed OnKeyItemUsed;

	UPROPERTY(BlueprintAssignable)
	FOnOneSideUnlock OnOneSideUnlock;

protected:
	/**< Called when the game starts. */
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Lock Setup")
	EDefaultLockState DefaultLockState = EDefaultLockState::Default;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Lock Runtime")
	EDoorLockState LockState = EDoorLockState::Unlocked;

	/**< List of key IDs required to unlock the door. If this array is not empty, the door will be locked. */
	UPROPERTY(EditAnywhere, Category = "Lock Setup", meta = (EditCondition = "DefaultLockState==EDoorLockState::Locked_NoKey"))
	TArray<FName> RequiredKeyIDs;

	/** Optional: indicates which side is allowed to unlock the door. Could be an enum or bool depending on your side system. */
	UPROPERTY(EditAnywhere, Category = "Lock Setup", meta = (EditCondition = "LockState==EDoorLockState::OneSide"))
	bool bUnlockFromFrontSide = true;

public:
	/**
	 * @brief Checks if the door is currently locked.
	 * @return True if locked (i.e. if RequiredKeyIDs is not empty), false otherwise.
	 */
	UFUNCTION(BlueprintCallable, Category = "Lock")
	bool GetIsLocked() const;

	/**
	 * @brief Attempts to unlock the door using the given keys.
	 * @param PlayerKeys The array of key items that the player possesses.
	 * @return True if the player possess a required key.
	 */
	UFUNCTION(BlueprintCallable)
	EDoorLockState  TryUnlock(const TArray<FKeyItem>& PlayerKeys, bool bPlayerOnFrontSide);

};
