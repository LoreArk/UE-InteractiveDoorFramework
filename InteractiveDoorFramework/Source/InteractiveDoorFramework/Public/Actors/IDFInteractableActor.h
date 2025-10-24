// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/IDFInteractable.h"
#include "IDFInteractableActor.generated.h"

UCLASS()
class INTERACTIVEDOORFRAMEWORK_API AIDFInteractableActor : public AActor, public IIDFInteractable
{
	GENERATED_BODY()
	
public:

	/**
	 * @brief Interactable Actor Constructor
	 * @details Sets default values for this actor's properties
	 */
	AIDFInteractableActor();

	/**
	 * @brief Begin Play Function
	 * @details Called when the game starts or when spawned
	 */
	virtual void BeginPlay() override;
	/**
	 * @brief Starts the interaction.
	 * @details This function is called when the interaction begins, typically when the player presses the interact button.
	 */
	virtual void InteractStarted_Implementation(AActor* InteractingActor, FHitResult TraceHitResult) override;

	/**
	 * @brief Holds the interaction.
	 * @details This function is called while the interaction button is held down, typically to keep moving or interacting with an object.
	 */
	virtual void InteractHeld_Implementation() override;

	/**
	 * @brief Completes the interaction.
	 * @details This function is called when the interaction is finished, typically when the player releases the interact button or completes the action.
	 */
	virtual void InteractCompleted_Implementation() override;

	/**
	 * @brief Handles when an object is targeted.
	 * @details This function is called when the object is targeted by the player, typically to show visual feedback like highlighting the object or displaying an interaction prompt.
	 */
	virtual void SetIsTargeted_Implementation(bool bNewIsTargeted, UPrimitiveComponent* TargetedComponent) override;

	/* @brief Requests the UI Manager to place and show or hide the prompt widget. */
	virtual void UpdatePrompt();

	UPROPERTY(VisibleAnywhere)
	USceneComponent* SceneRoot;

	/* Holds the location where to place the interaction prompt when the actor is targeted by the player. */
	UPROPERTY(VisibleAnywhere)
	USceneComponent* PromptLocation;

	/* Flag to prevent starting the interaction when the previous interaction is not completed yet. */
	bool bCanStartInteraction;

protected:

	/**< Represent if the actor is being targeted by player or not*/
	UPROPERTY(VisibleAnywhere, Category = "Interaction")
	bool bIsTargeted;

	/**< Material set as Overlay Material when the actor is looked at by the player*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Interaction")
	TSoftObjectPtr<UMaterialInstance> TargetedMaterial;


};
