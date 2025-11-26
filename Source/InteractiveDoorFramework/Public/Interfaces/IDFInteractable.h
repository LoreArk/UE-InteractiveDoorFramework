// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IDFInteractable.generated.h"

UINTERFACE(MinimalAPI)
class UIDFInteractable : public UInterface
{
	GENERATED_BODY()
};

class INTERACTIVEDOORFRAMEWORK_API IIDFInteractable
{
	GENERATED_BODY()

public:

	/**
	 * @brief Starts the interaction.
	 * @details This function is called when the interaction begins, typically when the player presses the interact button.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interaction Interface")
	void InteractStarted(AActor* InteractingActor, FHitResult TraceHitResult);

	/**
	 * @brief Holds the interaction.
	 * @details This function is called while the interaction button is held down, typically to keep moving or interacting with an object.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interaction Interface")
	void InteractHeld();

	/**
	 * @brief Completes the interaction.
	 * @details This function is called when the interaction is finished, typically when the player releases the interact button or completes the action.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interaction Interface")
	void InteractCompleted();

	/**
	 * @brief Handles when an object is targeted.
	 * @details This function is called when the object is targeted by the player, typically to show visual feedback like highlighting the object or displaying an interaction prompt.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interaction Interface")
	void SetIsTargeted(bool bNewIsTargeted, UPrimitiveComponent* TargetedComponent);

};
