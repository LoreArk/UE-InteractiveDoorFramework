// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IDFCollectibleActor.h"
#include "Structs/IDFCollectibleStructs.h"
#include "IDFKeyActor.generated.h"

UCLASS()
class INTERACTIVEDOORFRAMEWORK_API AIDFKeyActor : public AIDFCollectibleActor
{
	GENERATED_BODY()
	
public:


	/**< Struct holding relevant info for Unlock system and UI.*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Key Item Settings")
	FKeyItem KeyItemSettings;

	//virtual void InteractStarted_Implementation(AActor* InteractingActor, FHitResult TraceHitResult) override;

	//virtual void InteractHeld_Implementation() override;

	//virtual void InteractCompleted_Implementation() override;

	/**
	 * @brief Disables the actor when picked up.
	 * @details Hides the mesh and disables all collisions.
	 */
	UFUNCTION(BlueprintCallable)
	void DisableActor();

	/**
	 * @brief Stops examination and collects the item.
	 */
	virtual void EndExamination(AActor* InteractingActor) override;


	/* @brief Shows the texts (name, description) held in KeyItemSettings
	* @details calls the ItemUIManager subsystem to show the item description panel
	*/
	virtual void ShowItemUI() override;
};
