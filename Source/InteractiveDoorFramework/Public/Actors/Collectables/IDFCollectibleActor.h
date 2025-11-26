// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/IDFInteractableActor.h"
#include "InputActionValue.h"
#include "IDFCollectibleActor.generated.h"

/**
 * 
 */

UCLASS()
class INTERACTIVEDOORFRAMEWORK_API AIDFCollectibleActor : public AIDFInteractableActor
{
	GENERATED_BODY()

public:

	AIDFCollectibleActor();

	virtual void Tick(float DeltaTime) override;
	
	virtual void BeginPlay() override;

	/**< The static mesh of the collectable actor. Created in the constructor*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* ItemMesh;

	/**< Speed with which the object is moved to the target position for the examination */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Examination Settings")
	float MoveSpeed = 5.0f;
	/**< Speed with which the object is rotated to the target rotation for the examination */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Examination Settings")
	float RotateSpeed = 10.f;

	/**< Controls the speed with which the object is rotated during the examination */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Examination Settings")
	float ExaminationRotationSpeed = 500.f;

	virtual void SetIsTargeted_Implementation(bool bNewIsTargeted, UPrimitiveComponent* TargetedComponent) override;

	virtual void InteractStarted_Implementation(AActor* InteractingActor, FHitResult TraceHitResult) override;

	/**< True if the object is currently being examinated*/
	bool bBeingExamined;

	/**< True if the object is translating to the examiation position*/
	bool bIsMovingToPosition;

	/**< True if the player is looking at the actor*/
	bool bIsTargeted;

	/**< Input action used to rotate the actor during the examination*/
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	class UInputAction* LookAction;

	/**
	 * @brief Handles the look input action event (input triggered)
	 */
	void OnLookInput(const FInputActionValue& Value);

	/**
	 * @brief Handles the look input action event (input completed)
	 */
	void OnLookInputCompleted(const FInputActionValue& Value);

	/**< Stores the look input vector, used to rotate the actor during the examination*/
	FVector2D LookInput;

	/**
	 * @brief Move the actor to TargetTransform
	 * @details  Move the actor to TargetTransform location and rotation, used when the actor is interacted for examination
	 */
	void MoveToTarget(float DeltaTime);

	/**
	 * @brief  Rotate the actor when examinated and bCanRotate is true
	 */
	void ExamineRotate(float DeltaTime);

	/**
	 * @brief Enables the possibility to be rotated for examination.
	 */
	void EnableRotation();
	/**
	 * @brief  Disables the possibility to be rotated for examination.
	 */
	void DisableRotation();

	/**
	 * @brief Called when examination starts.
	 * @details Enables input for examination rotation, set TargetTransform, start the translation to the examination position;
	 */
	void StartExamination();

	/**
	 * @brief Shows the item UI with name and description.
	 */
	virtual void ShowItemUI();

	/**
	 * @brief Hides the item UI with name and description.
	 */
	virtual void HideItemUI();

	/**
	 * @brief Called when examination ends.
	 * @details Disable input for examination rotation, start the translation to the InitialTransform position and rotation;
	 */
	virtual void EndExamination(AActor* InteractingActor);

	/**< Flag to allow/stop the possibility to rotate the object for examination*/
	bool bCanRotate;

	/**< When examination starts, the actor is move to this transform position and rotation, its value is set relative to the camera position and rotation*/
	FTransform TargetTransform;

	/**< The transform of the object on BeginPlay*/
	FTransform InitialTransform;

};
