#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IDFPlayerInteractionComponent.generated.h"


class IFEInteractable;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class INTERACTIVEDOORFRAMEWORK_API UIDFPlayerInteractionComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UIDFPlayerInteractionComponent();

	/* @brief Starts the interaction with the actor currently targeted
	* @details checks if the player has a valid interaction target and calls InteractStarted through the Interactable interface
	*/
	UFUNCTION(BlueprintCallable)
	void StartInteraction();

	/**
	 * @brief Ends the interaction with the actor that was previously interacted with.
	 */
	UFUNCTION(BlueprintCallable)
	void EndInteraction();

	/**< Show the sweep trace debug.*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Debug")
	bool bDebugTrace;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	/**< The distance covered by the interaction tracce.*/
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category ="Trace")
	float TraceLength =200.f;

	/**< The radius of the sphere used by the sweep trace.*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Trace")
	float TraceRadius = 25.f;

	/**< The Component being hit by the interaction trace.*/
	TWeakObjectPtr<UPrimitiveComponent> TargetInteractable;

	/**< the Component on which StartInteraction is called, set on StartInteraction, reset to null on EndInteraction.*/
	TWeakObjectPtr<UPrimitiveComponent> InteractedActor;

	/**
	 * @brief Performs the interact sweep trace, called during tick.
	 * @return Sweep trace a sphere (TraceRadius) to check for interactable actors.
	 */
	void InteractTrace(FHitResult& OutHitResult);

	/**
	 * @brief Updates the current interactable calling InteractTrace.
	 * @return called during Tick, calls InteractTrace and SetIsTargeted (true or false) on the interactable actor.
	 */
	void UpdateTargetInteractable();

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
};
