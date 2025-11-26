// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IDFInteractableActor.h"
#include "Sound/SoundCue.h" 
#include "IDFMovableActor.generated.h"

UENUM(BlueprintType)
enum class EIDFInteractionState : uint8
{
	NotHeld UMETA(DisplayName = "Not Held"),
	Held UMETA(DisplayName = "Held")
};


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMakeNoise, FHitResult, HitResult);

UCLASS()
class INTERACTIVEDOORFRAMEWORK_API AIDFMovableActor : public AIDFInteractableActor
{
	GENERATED_BODY()

public:

	AIDFMovableActor();

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintAssignable)
	FOnMakeNoise OnMakeNoise;

	virtual void InteractStarted_Implementation(AActor* InteractingActor, FHitResult TraceHitResult) override;

	virtual void InteractHeld_Implementation() override;

	virtual void InteractCompleted_Implementation() override;


	virtual void SetIsTargeted_Implementation(bool bNewIsTargeted, UPrimitiveComponent* TargetedComponent) override;

	/**
	 * @brief Handles noise events.
	 * @details Triggered when a collision produces a noise. Designed to be used in blueprints to trigger SFXs and VFXs;
	 */
	UFUNCTION(BlueprintNativeEvent)
	void EventNoise(FHitResult Hit);
	void EventNoise_Implementation(FHitResult Hit);

	/**< Reference to sound cue played for hit collisions that don't trigger a noise*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Audio")
	TSoftObjectPtr<USoundCue> SoftCollisionSFX;

	/**< Reference to sound cue played on noise event*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Audio")
	TSoftObjectPtr<USoundCue> NoiseSFX;

	/**
	 * @brief Handles sound events.
	 * @details Triggered when a collision produces a sound but not a noise. Designed to be used in blueprints to trigger SFXs and VFXs;
	 */
	UFUNCTION(BlueprintNativeEvent)
	void EventSound(FVector Location);
	void EventSound_Implementation(FVector Location);

	/**< Minimum hit impulse to trigger noise events when a collision is detected*/
	UPROPERTY(EditDefaultsOnly, Category = "NoiseSettings")
	float MakeNoiseImpulseLengthThreshold;

	UFUNCTION(BlueprintCallable)
	void SetInteractionState(EIDFInteractionState NewInteractionState);

	/**< Represent the current state of the movable object, if it is Held or Unheld*/
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Interaction")
	EIDFInteractionState CurrentInteractionState;

	/**< Currently used in blueprint, enable this to draw a debug sphere at the location of the noise when a noise event is fired*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Debug")
	bool bDrawSphereOnMakeNoise;

	/**< Reference to the component the player interacted with */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<UPrimitiveComponent> InteractionTargetComponent;

protected:

	/**
	 * @brief Handles hit events and evaluates velocity data.
	 * @details Processes input datas to determine whether to trigger sound and/or noise events based on collision data.
	 */
	virtual void HandleComponentHit(float ImpulseLength, float DeltaMagnitude, FHitResult Hit);
};
