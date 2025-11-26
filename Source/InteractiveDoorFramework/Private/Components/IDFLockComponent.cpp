

#include "Components/IDFLockComponent.h"
#include "Structs/IDFCollectibleStructs.h"

UIDFLockComponent::UIDFLockComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UIDFLockComponent::BeginPlay()
{
	Super::BeginPlay();
	
	switch (DefaultLockState)
	{
	case EDefaultLockState::Broken:
		LockState = EDoorLockState::Broken;
		break;
	case EDefaultLockState::Default:
		RequiredKeyIDs.Empty();
		LockState = EDoorLockState::Unlocked;
		break;

	case EDefaultLockState::OneSide:
		RequiredKeyIDs.Empty();
		LockState = EDoorLockState::Locked_WrongSide; 
		break;

	case EDefaultLockState::Key:
		if (RequiredKeyIDs.Num() == 0)
		{
			UE_LOG(LogTemp, Warning, TEXT("LockComponent: No keys assigned, door will be unlocked by default"));
			DefaultLockState = EDefaultLockState::Default;
			LockState = EDoorLockState::Unlocked;
		}
		else
		{
			LockState = EDoorLockState::Locked_NoKey;
		}
		break;
	}
}

bool UIDFLockComponent::GetIsLocked() const
{
	return LockState != EDoorLockState::Unlocked;
}

EDoorLockState UIDFLockComponent::GetCurrentLockState()
{
	return LockState;
}



EDoorLockState UIDFLockComponent::TryUnlock(const TArray<FKeyItem>& PlayerKeys, bool bPlayerOnFrontSide)
{
	switch (DefaultLockState)
	{
	case EDefaultLockState::Broken:
		LockState = EDoorLockState::Broken;
		break;
	case EDefaultLockState::Default:
		LockState = EDoorLockState::Unlocked;
		break;

	case EDefaultLockState::OneSide:
		if (bPlayerOnFrontSide == bUnlockFromFrontSide)
		{
			LockState = EDoorLockState::Unlocked;
			OnOneSideUnlock.Broadcast();
		}
		else
		{
			LockState = EDoorLockState::Locked_WrongSide;
		}
		break;

	case EDefaultLockState::Key:
	{
		for (int32 i = RequiredKeyIDs.Num() - 1; i >= 0; --i)
		{
			const FName& RequiredKey = RequiredKeyIDs[i];

			for (const FKeyItem& PlayerKey : PlayerKeys)
			{
				if (PlayerKey.KeyID == RequiredKey)
				{
					RequiredKeyIDs.RemoveAt(i);

					LockState = RequiredKeyIDs.Num() == 0 ? EDoorLockState::Unlocked : EDoorLockState::Locked_NoKey;
					OnKeyItemUsed.Broadcast(PlayerKey);

					break;
				}
			}
		}

		break;
	}
	}

	return LockState;
}



