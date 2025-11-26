// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IDFCollectibleActor.h"
#include "Structs/IDFCollectibleStructs.h"
#include "IDFDocumentActor.generated.h"

/**
 * 
 */
UCLASS()
class INTERACTIVEDOORFRAMEWORK_API AIDFDocumentActor : public AIDFCollectibleActor
{
	GENERATED_BODY()
	
public:
	/* The datas of this document, to display thorugh UI*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Document Item Settings")
	FDocumentItem DocumentSettings;

	virtual void InteractStarted_Implementation(AActor* InteractingActor, FHitResult TraceHitResult) override;

	/* @brief Shows the texts (name, description) held in DocumentSettings
	* @details calls the ItemUIManager subsystem to show the item description panel
	*/
	virtual void ShowItemUI() override;

};
