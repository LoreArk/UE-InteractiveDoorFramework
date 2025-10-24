// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/IDFMovableActor.h"
#include "Components/BoxComponent.h"
#include "Components/IDFLockComponent.h"
#include "EnhancedInput/Public/InputActionValue.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "Components/ArrowComponent.h"
#include "EnhancedInputComponent.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "EnhancedInputSubsystems.h"
#include "IDFDoorActor.generated.h"

/**
 * 
 */
UCLASS()
class INTERACTIVEDOORFRAMEWORK_API AIDFDoorActor : public AIDFMovableActor
{
	GENERATED_BODY()
	
public:
	/**
	 * @brief Constructor for the door actor.
	 * @details Sets the default value of the door actor.
	 */
	AIDFDoorActor();

	/**< This component represents the visual and animated skeletal mesh of the door.*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Door")
	USkeletalMeshComponent* DoorSkeletalMesh;

	/**< Collider used to mimic  a lock behavior, stops the door to align with the door frame - this works for the front side of the door, relative to the actor X axis.*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Collision")
	UBoxComponent* DoorBlockerF;

	/**< Collider used to mimic  a lock behavior, stops the door to align with the door frame - this works for the back side of the door, relative to the actor X axis.*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Collision")
	UBoxComponent* DoorBlockerB;

	/**< Name of the bone controlling the physical door shutter.*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Door Settings")
	FName DoorBoneName;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Handles")
	USceneComponent* HandleTransformRef;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Lock")
	USceneComponent* LockTransformRef;

	/**< Reference to the montage to play when a key is used, to set in editor. 
		If set, the door will be unlocked with a montage notify. 
			If left empty, the montage will be ignored, and the door will open immediately after the interaction.*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Door Settings")
	TSoftObjectPtr<UAnimMontage> UnlockMontage;

	/**< Reference to the montage to play when the player interacts.*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Door Settings")
	TSoftObjectPtr<UAnimMontage> InteractMontage;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Audio")
	TSoftObjectPtr<USoundCue> HandleInteractionSFX;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Audio")
	TSoftObjectPtr<USoundCue> UnlockedSFX;

	/**< Component that handles the lock system, a door is locked when the LockComponent RequiredKeyIDs array is not empty.*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Door")
	UIDFLockComponent* LockComponent;

	/**< The door is considered closed when the difference between the actor yaw and the door shutter yaw is less than this value.*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Door Settings")
	float DoorCloseYawTolerance;

	/**< Max time the interaction input is pressed to be considered a "tap" interaction.*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Door Interaction")
	float InteractionTapTimeThreshold;

	/**< How long the door should be stopped when the door aligns with the lock, to avoid saloon style door behavior.*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Door Interaction")
	float BlockDoorWhenCloseTime;

	/**< Represent the force to apply when the door is pushed with a single tap of the interaction input*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Door Interaction")
	float SoftPushStregth;

	/**< Represent the force to apply when the door is pushed with a double tap of the interaction input*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Door Interaction")
	float StrongPushStregth;

	/**< A multiplier applied to the input value when holding and moving a door */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Door Interaction")
	float MoveDoorAmount;

	/**< Max velocity applied to the door when held and moved, lower values make the door feel heavier, higher values make the door feel lighter */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Door Interaction")
	float MaxAngularVelocity;

	/**< This component represents the static mesh of the door frame. The door skeletal mesh is attached to this component.*/
	//UPROPERTY(EditDefaultsOnly, Category = "Components")
	//UStaticMeshComponent* DoorFrameMesh;

	/**< Flag used to get the double tap, true when one tap is performed, false when a InteractionTapTimeThreshold has passed since the first tap.*/
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Door Interaction")
	bool bDoubleTapFlag;
	
	/**< Set it to true to debug the following: door push vector.*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug")
	bool bDrawDebugs;

	/**
	 * @brief Getter to know if the player is in front or on the back of the door FRAME.
	 * @details The player is considered in front of the door when he points in the same direction of the forward (x axis) of the door FRAME. 
		It is used to determine on which direction the door hinge should rotate.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Door Functions")
	bool IsPlayerInFrontOfFrame();
	
	/**
	 * @brief Getter to know if the player is in front or on the back of the door MESH.
	 * @details The player is considered in front of the door when he points in the same direction of the forward (x axis) of the door MESH.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Door Functions")
	bool IsPlayerInFrontOfDoor();

	/**
	 * @brief Get if the door is closed.
	 * @details Return true if the door skeletal mesh yaw is close (considering DoorCloseYawTolerance) enough to the actor yaw.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Door Functions")
	virtual bool IsClosed();
	
	/**
	 * @brief Push the door.
	 * @details Push the door on player tap input, input float of the function is the force applyed.
	 */
	UFUNCTION(BlueprintCallable, Category = "Door Functions")
	virtual void PushDoor(float PushImpulseStrength);

	/**
	 * @brief Handle tap interaction.
	 * @details Handle the tap and decide wheather to apply push (soft or strong) or not.
	 */
	UFUNCTION(BlueprintCallable, Category = "Door Functions")
	void TapInteraction(bool bIsDoubleTap);

	/**
	 * @brief Move door function when held by the player.
	 * @details The input represet how much the door is moved, higher number means faster.
	 */
	UFUNCTION(BlueprintCallable, Category = "Door Functions")
	virtual void MoveDoor(float Amount);

	/**
	 * @brief Update Box Collision Blockers.
	 * @details Enable or disable collision of the door blockers based on current door rotation.
	 */
	UFUNCTION(BlueprintCallable, Category = "Door Functions")
	virtual void UpdateDoorBlockers();

	/**
	 * @brief Disable collisions of both door blockers.
	 */
	UFUNCTION(BlueprintCallable, Category = "Door Functions")
	virtual void DisableDoorBlockers();

	virtual void InteractStarted_Implementation(AActor* InteractingActor, FHitResult TraceHitResult) override;

	virtual void InteractHeld_Implementation() override;

	virtual void InteractCompleted_Implementation() override;

	virtual void SetIsTargeted_Implementation(bool bNewIsTargeted, UPrimitiveComponent* TargetedComponent) override;

	virtual void SetInteractionTarget(UPrimitiveComponent* TargetComponent);

	/* @brief Requests the UI Manager to place and show or hide the prompt widget. */
	virtual void UpdatePrompt() override;
	/**
	 * @brief Event triggered when the player interacts with the door having a required key.
	 * @details Use this function to play animations and/or attach a key item mesh to the a door skeletal mesh socket.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Door Functions")
	void KeyUsed(FKeyItem UsedKey);
	void KeyUsed_Implementation(FKeyItem UsedKey);

	/**
	 * @brief Unlocks the door if all the required keys are used.
	 * @details Checks if RequiredKeyIDs of the lock component is empty, if so, activates the door hinge physics.
	 */
	UFUNCTION(BlueprintCallable, Category = "Door Functions")
	virtual void TryUnlockDoor();

	/**
	 * @brief Event to receive  montage notifies.
	 * @details Use to handle unlock event driven by a anim montage, if UnlockAnimMontage is set from the editor.
	 */
	UFUNCTION()
	void OnMontageNotifyReceived(FName NotifyName, const FBranchingPointNotifyPayload& Payload);

	/**
	 * @brief Used to spawn the key mesh when the player uses a required key.
	 * @details Spawns a mesh of the key (KeyItemStaticMesh) and place it under a target DoorSkeletalMesh socket (SocketName).
	 * @return KeyItemStaticMesh (soft pointer).
	 */
	UFUNCTION(BlueprintCallable, Category = "Door Functions")
	UStaticMeshComponent* SpawnKeyItemMesh(TSoftObjectPtr<UStaticMesh> KeyItemMesh, FName SocketName);

	/**
	 * @brief Hides the spawned key item.
	 */
	UFUNCTION(BlueprintCallable)
	void HideSpawnedKeyMesh();

	/**< Reference of the key item static mesh spawned by SpawnKeyItemMesh*/
	UPROPERTY(BlueprintReadWrite)
	TWeakObjectPtr<UStaticMeshComponent> KeyItemStaticMesh;

	

	/**< flag used to keep the door closed for a brief moment when the door is close to the door lock. Used with Door Blockers to avoid "saloon" like door behavior */
	bool bKeepClosed;

protected:

	virtual void OnConstruction(const FTransform& Transform) override;

#if WITH_EDITOR
	// Called every time a property is changed in the editor
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	void BeginPlay() override;

	void Tick(float DeltaTime) override;

	/**< The input action used to move the door while holding it*/
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TSoftObjectPtr<UInputAction> DoorInteractionAction;

	/**< Saves the input action binding handle value, used to remove the input action binding by input action handle*/
	uint32 DoorActionBindingHandle;

	/**
	 * @brief Handles the input for moving the door when held.
	 */
	void OnDoorMoveAction(const FInputActionValue& Value);

	/**< Handle the timer to block the door when is closed - mimics lock behavior avoiding "saloon" style door behavior */
	UPROPERTY()
	FTimerHandle DoorBlockerTimerHandle;

	/**
	 * @brief Enable/disable door inputs.
	 * @details Used to enable/disable the door from receiving input
	 */
	UFUNCTION()
	void SetDoorAsInputListener(bool newShouldListen);

	/**
	 * @brief Enable/disable the player movement and look.
	 * @details (Ideally made on the character script through an interface) Used to enable and disable player movement and player look
	 */
	UFUNCTION()
	virtual void SetInteractingActorBlocked(bool newIssBlocked);

	UFUNCTION()
	virtual void OnDoorBlockerHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	/**
	 * @brief Handles collision with the door skeletal mesh.
	 * @details Updates the collider state of the door blockers when something hits the door skeletal mesh.
	 */
	UFUNCTION()
	void OnDoorMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	virtual void HandleComponentHit(float ImpulseLength, float DeltaMagnitude, FHitResult Hit) override;

	UFUNCTION()
	virtual void PlayInteractionMontageAndSound(bool bShouldStopAllMontages);

	UFUNCTION()
	virtual void EndInteraction();

	// Editable Meshes
	UPROPERTY(EditAnywhere, Category = "01 - Door Setup")
	TSoftObjectPtr<UStaticMesh> DoorMesh;

	UPROPERTY(EditAnywhere, Category = "01 - Door Setup")
	TSoftObjectPtr<UStaticMesh> DoorFrameMesh;

	UPROPERTY(EditAnywhere, Category = "01 - Door Setup")
	TSoftObjectPtr<UStaticMesh> HandleMesh;

	/** Should the door handle animate when the door opens? Usually false if the handle is fixed. */
	UPROPERTY(EditAnywhere, Category = "01 - Door Setup")
	bool bAnimateOpening = true;

	/** Reference location of the handle bone inside the skeletal mesh. Used to correctly position the handle mesh. */
	UPROPERTY(EditAnywhere, Category = "01 - Door Setup")
	FVector HandleBoneLocation;

	/** Reference location of the lock bone inside the skeletal mesh. Used to correctly position the lock mesh. */
	UPROPERTY(EditAnywhere, Category = "01 - Door Setup")
	FVector LockBoneLocation;

	/** Is the door one-sided? If true, the door can only be opened in the defined direction (check the red arrow in the editor). 
	The direction can be changed using FlipOpeningSide. */
	UPROPERTY(EditAnywhere, Category = "01 - Door Setup")
	bool bIsOneSided;

	/** Flip which side is considered the opening side (only used if one-sided). */
	UPROPERTY(EditAnywhere, Category = "01 - Door Setup", meta = (EditCondition = "bIsOneSided"))
	bool bFlipOpeningSide;

	/** Hide the handle on the blocked side (only used if one-sided). */
	UPROPERTY(EditAnywhere, Category = "01 - Door Setup", meta = (EditCondition = "bIsOneSided"))
	bool bHideBlockedSideHandle;
	
	// Door Materials
	/** List of materials to apply to the door mesh. Materials are applied in the order of the mesh's material slots. */
	UPROPERTY(EditAnywhere, Category = "02 - Door Materials", meta = (ToolTip = "Materials applied to the door mesh. Applied in order of the mesh's material slots."))
	TArray<UMaterialInterface*> DoorMaterials;

	/** List of materials to apply to the door frame mesh. Materials are applied in the order of the mesh's material slots. */
	UPROPERTY(EditAnywhere, Category = "02 - Door Materials", meta = (ToolTip = "Materials applied to the door frame mesh. Applied in order of the mesh's material slots."))
	TArray<UMaterialInterface*> FrameMaterials;

	/** List of materials to apply to the door handle mesh. Materials are applied in the order of the mesh's material slots. */
	UPROPERTY(EditAnywhere, Category = "02 - Door Materials", meta = (ToolTip = "Materials applied to the door handle mesh. Applied in order of the mesh's material slots."))
	TArray<UMaterialInterface*> HandleMaterials;

	UPROPERTY()
	UArrowComponent* OpeningDirectionArrow;

	UPROPERTY()
	UStaticMeshComponent* LockPreviewMesh;

	UPROPERTY()
	UStaticMeshComponent* CreatedDoorComponent;

	/**< World seconds to get when the interaction starts. Used to get the time enlapsed between interaction input pressed and interaction input released*/
	UPROPERTY()
	float InteractionStartedWorldSeconds;

	UPROPERTY()
	bool bWasPlayerInFrontAtGrab;

	/**< true when an animation for key unlocking is playing */
	bool bUsingKey;

	UFUNCTION()
	virtual void ApplyMaterials(UStaticMeshComponent* MeshComp, const TArray<UMaterialInterface*>& Materials);

	virtual void AlignDoorBlockers();

	virtual void DisableBlocker(UBoxComponent* Blocker, bool bBackBlocker);
private:

	/**
	 * @brief Set bDubleTapFlag.
	 * @details While bDoubleTap is true, another tap will trigger the double tap behavior
	 */
	UFUNCTION()
	void SetDoubleTapFlag(bool bNewDoubleTapFlag);

	UFUNCTION()
	void ShowUIMessage(FString Message);

	/**< Handles the timer that disable the double tap flag*/
	UPROPERTY()
	FTimerHandle TapResetTimerHandle;

	void ClearPreviousComponents();

	UPROPERTY(Transient)
	TArray<UStaticMeshComponent*> CreatedComponents;

	UPROPERTY()
	UStaticMeshComponent* CreatedHandleAComponent;

	UPROPERTY( )
	UStaticMeshComponent* CreatedHandleBComponent;


	UPROPERTY()
	UStaticMeshComponent* CreatedDoorFrameComponent;


};
