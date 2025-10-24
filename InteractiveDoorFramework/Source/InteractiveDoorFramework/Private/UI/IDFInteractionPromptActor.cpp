// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/IDFInteractionPromptActor.h"
#include "Components/WidgetComponent.h"
#include "UI/IDFInteractionPromptActor.h"


AIDFInteractionPromptActor::AIDFInteractionPromptActor()
{
	PrimaryActorTick.bCanEverTick = false;

	PromptWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("PromptWidget"));
	PromptWidget->SetupAttachment(RootComponent);
}


void AIDFInteractionPromptActor::ShowWidget()
{
	PromptWidget->SetVisibility(true);
}

void AIDFInteractionPromptActor::HideWidget()
{
	PromptWidget->SetVisibility(false);
}


