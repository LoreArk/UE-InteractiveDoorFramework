// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IDFCollectibleStructs.generated.h"


/**
 * @brief Represents a collectible document item.
 * @details These items contain text or lore elements that can be read by the player.
 */
USTRUCT(BlueprintType)
struct INTERACTIVEDOORFRAMEWORK_API FDocumentItem
{
	GENERATED_BODY()

public:
	/**< The name of the document item. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Document")
	FName DocumentID;

	/**< The title of the document. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Document")
	FText DocumentTitle;

	/**< The content or description of the document. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Document")
	FText DocumentContent;

};

/**
 * @brief Represents a collectible key item.
 * @details These items can be used to unlock doors or trigger events.
 */
USTRUCT(BlueprintType)
struct INTERACTIVEDOORFRAMEWORK_API FKeyItem
{
	GENERATED_BODY()

public:
	/**< The unique identifier of the key item. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Key")
	FName KeyID;

	/**< The name of the key item. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Key")
	FText KeyName;

	/**< The description of what this key is used for. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Key")
	FText KeyDescription;

	/**< The name of a socket of the skeletal mesh door. During unlock door animation, the KeyMesh will be instantiated and childed to the defined socket. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Key")
	FName DoorTargetSocket;

	/**< Reference to the key mesh. A copy is instantiated and childed to DoorTargetSocket during the unlock door animation. can be used to visualize the key in the UI. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Key")
	TSoftObjectPtr<UStaticMesh> KeyMesh;
};