// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IDFDoorActor.h"
#include "IDFDoubleDoorActor.generated.h"

/**
 * 
 */
UCLASS()
class INTERACTIVEDOORFRAMEWORK_API AIDFDoubleDoorActor : public AIDFDoorActor
{
	GENERATED_BODY()

public:

	AIDFDoubleDoorActor();

	/**< the skeletal mesh for the second door */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	USkeletalMeshComponent* SecondDoorSkeletalMesh;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Handles")
	USceneComponent* HandleTransformRefB;

	/**< additional door blocker for the second door */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Collision")
	UBoxComponent* SecondDoorBlockerF;

	/**< additional door blocker for the second door */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Collision")
	UBoxComponent* SecondDoorBlockerB;

	virtual void PushDoor(float PushImpulseStrength) override;

	void MoveDoor(float Amount) override;

	/**
	 * @brief Get if both doors are closed.
	 * @details return true if both doors yaw is close enough (considering DoorCloseYawTolerance) to the actor yaw.
	 */
	bool IsSecondDoorClosed();

	virtual void UpdateDoorBlockers() override;

	virtual void InteractStarted_Implementation(AActor* InteractingActor, FHitResult TraceHitResult) override;


	void UpdateSecondDoorBlockers();

	void DisableFirstDoorBlockers();
	void DisableSecondDoorBlockers();

	FTimerHandle SecondDoorBlockerTimerHandle;

	/* Makes the door movable if the lock component is unlocked.
	* @details Activates the door's skeletal mesh physics.
	*/
	virtual void TryUnlockDoor();

	/**< flag used to keep the second door closed for a brief moment when the door is close to the door lock. Used with Door Blockers to avoid "saloon" like door behavior */
	bool bKeepSecondDoorClosed;

protected:

	virtual void OnConstruction(const FTransform& Transform) override;

	void BeginPlay() override;

	virtual void PlayInteractionMontageAndSound(bool bShouldStopAllMontages) override;

	virtual void EndInteraction() override;

	virtual void UpdatePrompt() override;

	virtual void SetInteractionTarget(UPrimitiveComponent* TargetComponent) override;

	/**
	 * @brief Getter to know if the player is in front or on the back of the door MESH.
	 * @details The player is considered in front of the door when he points in the same direction of the forward (x axis) of the door MESH.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Door Functions")
	bool IsPlayerInFrontOfDoorB();

	UPROPERTY()
	bool bWasPlayerInFrontAtGrabB;

	virtual void AlignDoorBlockers() override;

private: 
	
	void ClearPreviousComponents();

	UPROPERTY(Transient)
	TArray<UStaticMeshComponent*> CreatedComponentsB;

	UPROPERTY()
	UStaticMeshComponent* CreatedHandleAComponentB;

	UPROPERTY()
	UStaticMeshComponent* CreatedHandleBComponentB;

	UPROPERTY()
	UStaticMeshComponent* CreatedDoorComponentB;
};
