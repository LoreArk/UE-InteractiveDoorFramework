// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/WidgetComponent.h"
#include "IDFInteractionPromptActor.generated.h"

UCLASS()
class INTERACTIVEDOORFRAMEWORK_API AIDFInteractionPromptActor : public AActor
{
	GENERATED_BODY()
	
public:	

	AIDFInteractionPromptActor();


public:

	/*
	* @brief The widget containing the prompt icon.
	*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UWidgetComponent* PromptWidget;

	/*
	* @brief Sets the visibility of PromptWidget to true;
	*/
	void ShowWidget();
	/*
	* @brief Sets the visibility of PromptWidget to true;
	*/
	void HideWidget();
};
