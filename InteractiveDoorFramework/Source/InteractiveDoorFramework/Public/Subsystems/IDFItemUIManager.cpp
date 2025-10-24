// Fill out your copyright notice in the Description page of Project Settings.


#include "IDFItemUIManager.h"
#include "UI/IDFItemDescriptionWidget.h"
#include "Kismet/GameplayStatics.h"
#include "UI/IDFInteractionPromptActor.h"
#include "Blueprint/UserWidget.h"

void UIDFItemUIManager::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UIDFItemUIManager::Deinitialize()
{
    if (DescriptionWidget)
    {
        DescriptionWidget->RemoveFromParent();
        DescriptionWidget = nullptr;
    }

    Super::Deinitialize();
}

void UIDFItemUIManager::SetDescriptionWidgetClass(TSubclassOf<UUserWidget> WidgetClass)
{
    DescriptionWidgetClass = WidgetClass;
}

void UIDFItemUIManager::SetPromptWidgetClass(TSubclassOf<AIDFInteractionPromptActor> ActorClass)
{
    PromptActorClass = ActorClass;
}

void UIDFItemUIManager::ShowItemDescription(const FText& ItemName, const FText& ItemDescription, float DisplayDuration)
{
    EnsureDescriptionWidgetExists();

    if (DescriptionWidget)
    {
        DescriptionWidget->SetContent(ItemName, ItemDescription);

        DescriptionWidget->ShowPanel();

    }
}

void UIDFItemUIManager::ShowPromptWidget(FVector Location)
{
    EnsurePromptActorExists();

    if (PromptActor)
    {   
        PromptActor->SetActorLocation(Location);
        PromptActor->ShowWidget();
    }
}

void UIDFItemUIManager::HideItemDescription()
{
    if (DescriptionWidget)
    {
        DescriptionWidget->HidePanel();
    }
}

void UIDFItemUIManager::HidePromptWidget()
{
    if (PromptActor)
    {
        PromptActor->HideWidget();
    }
}

void UIDFItemUIManager::EnsureDescriptionWidgetExists()
{
    if (!DescriptionWidget && DescriptionWidgetClass)
    {
        APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
        if (PC)
        {
            DescriptionWidget = CreateWidget<UIDFItemDescriptionWidget>(PC, DescriptionWidgetClass);
            if (DescriptionWidget)
            {
                DescriptionWidget->AddToViewport(100);
            }
        }
    }
}

void UIDFItemUIManager::EnsurePromptActorExists()
{
    if (!PromptActor && !PromptActorClass.IsNull())
    {
        UWorld* World = GetWorld();
        if (World)
        {
            FActorSpawnParameters SpawnParams;
            SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

            UClass* ActorClass = PromptActorClass.LoadSynchronous();
            if (ActorClass)
            {
                PromptActor = World->SpawnActor<AIDFInteractionPromptActor>(ActorClass, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
            }
        }
    }
}
