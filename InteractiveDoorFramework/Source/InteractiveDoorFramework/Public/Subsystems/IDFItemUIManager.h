// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UI/IDFInteractionPromptActor.h"
#include "IDFItemUIManager.generated.h"

/**
 * 
 */
UCLASS()
class INTERACTIVEDOORFRAMEWORK_API UIDFItemUIManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
    // Initialize and shutdown functions
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;

    /* @brief Setter for the DescriptionWidgetClass to spawn when needed */
    UFUNCTION(BlueprintCallable)
    void SetDescriptionWidgetClass(TSubclassOf<UUserWidget> WidgetClass);

    /* @brief Setter for the PromptActorClass to spawn when needed */
    UFUNCTION(BlueprintCallable)
    void SetPromptWidgetClass(TSubclassOf<AIDFInteractionPromptActor> WidgetClass);

    /**
     * @brief Shows the item description panel with the specified details
     * @param ItemName The name of the collected item
     * @param ItemDescription The description text for the item
     * @param DisplayDuration How long to show the panel (0 = until manually hidden)
     */
    UFUNCTION(BlueprintCallable, Category = "Item Description")
    void ShowItemDescription(const FText& ItemName, const FText& ItemDescription, float DisplayDuration = 5.0f);

    /**
     * @brief Shows the prompt widget at the specified location.
     * @param Location - The location in world space where the widget should be placed.
     */
    UFUNCTION()
    void ShowPromptWidget(FVector Location);

    /**
     * @brief Manually hide the item description panel
     */
    UFUNCTION(BlueprintCallable, Category = "Item Description")
    void HideItemDescription();

    /**
     * @brief Manually hide the prompt widget
     */
    UFUNCTION()
    void HidePromptWidget();

private:
    // The description widget instance
    UPROPERTY()
    class UIDFItemDescriptionWidget* DescriptionWidget;

    // The prompt widget instance
    UPROPERTY()
    AIDFInteractionPromptActor* PromptActor;

    // Class to use for the description widget
    UPROPERTY(EditDefaultsOnly, Category = "UI")
    TSubclassOf<UUserWidget> DescriptionWidgetClass;

    // Class to use for the prompt widget
    UPROPERTY(EditDefaultsOnly, Category = "UI")
    TSoftClassPtr<AIDFInteractionPromptActor> PromptActorClass;

    /*
    * @brief Creates the description widget if it doesn't exist
    */
    void EnsureDescriptionWidgetExists();

    /*
    * @brief Creates the prompt actor widget if it doesn't exist
    */
    void EnsurePromptActorExists();
};
