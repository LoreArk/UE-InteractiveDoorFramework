// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "IDFHUDMessageWidget.generated.h"

/**
 * 
 */
UCLASS()
class INTERACTIVEDOORFRAMEWORK_API UIDFHUDMessageWidget : public UUserWidget
{
	GENERATED_BODY()
public:

    // Set HUD Message text with new text, the blueprint implementation will handle animations and other show/hide effects
    UFUNCTION(BlueprintNativeEvent, Category = "Item Description")
    void ShowMessage(const FText& MessageText);
    void ShowMessage_Implementation(const FText& MessageText);

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "Item Description")
	UTextBlock* MessageTextBlock;

};
