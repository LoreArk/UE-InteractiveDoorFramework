// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "IDFItemDescriptionWidget.generated.h"

/**
 * 
 */
UCLASS()
class INTERACTIVEDOORFRAMEWORK_API UIDFItemDescriptionWidget : public UUserWidget
{
	GENERATED_BODY()

public:
    // Set the content of the widget
    UFUNCTION(BlueprintCallable, Category = "Item Description")
    void SetContent(const FText& ItemName, const FText& ItemDescription);

    // Sets the widget visibility to Visible
    UFUNCTION(BlueprintCallable, Category = "Item Description")
    void ShowPanel();

    // Sets the widget visibility to Hidden
    UFUNCTION(BlueprintCallable, Category = "Item Description")
    void HidePanel();

protected:
    // Reference to UI elements
    UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Item Description")
    UTextBlock* NameText;

    UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Item Description")
    UTextBlock* DescriptionText;

};
