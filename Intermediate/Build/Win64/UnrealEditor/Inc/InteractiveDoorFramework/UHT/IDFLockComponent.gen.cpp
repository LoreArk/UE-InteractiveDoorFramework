// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/IDFLockComponent.h"
#include "Structs/IDFCollectibleStructs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIDFLockComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_UIDFLockComponent();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_UIDFLockComponent_NoRegister();
INTERACTIVEDOORFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveDoorFramework_EDefaultLockState();
INTERACTIVEDOORFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveDoorFramework_EDoorLockState();
INTERACTIVEDOORFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnKeyItemUsed__DelegateSignature();
INTERACTIVEDOORFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnOneSideUnlock__DelegateSignature();
INTERACTIVEDOORFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FKeyItem();
UPackage* Z_Construct_UPackage__Script_InteractiveDoorFramework();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EDefaultLockState *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDefaultLockState;
static UEnum* EDefaultLockState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDefaultLockState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDefaultLockState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractiveDoorFramework_EDefaultLockState, (UObject*)Z_Construct_UPackage__Script_InteractiveDoorFramework(), TEXT("EDefaultLockState"));
	}
	return Z_Registration_Info_UEnum_EDefaultLockState.OuterSingleton;
}
template<> INTERACTIVEDOORFRAMEWORK_API UEnum* StaticEnum<EDefaultLockState>()
{
	return EDefaultLockState_StaticEnum();
}
struct Z_Construct_UEnum_InteractiveDoorFramework_EDefaultLockState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Broken.DisplayName", "Broken" },
		{ "Broken.Name", "EDefaultLockState::Broken" },
		{ "Default.DisplayName", "Unlocked" },
		{ "Default.Name", "EDefaultLockState::Default" },
		{ "Key.DisplayName", "Locked with Key" },
		{ "Key.Name", "EDefaultLockState::Key" },
		{ "ModuleRelativePath", "Public/Components/IDFLockComponent.h" },
		{ "OneSide.DisplayName", "One-Side Lock" },
		{ "OneSide.Name", "EDefaultLockState::OneSide" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDefaultLockState::Default", (int64)EDefaultLockState::Default },
		{ "EDefaultLockState::OneSide", (int64)EDefaultLockState::OneSide },
		{ "EDefaultLockState::Key", (int64)EDefaultLockState::Key },
		{ "EDefaultLockState::Broken", (int64)EDefaultLockState::Broken },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractiveDoorFramework_EDefaultLockState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InteractiveDoorFramework,
	nullptr,
	"EDefaultLockState",
	"EDefaultLockState",
	Z_Construct_UEnum_InteractiveDoorFramework_EDefaultLockState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveDoorFramework_EDefaultLockState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveDoorFramework_EDefaultLockState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InteractiveDoorFramework_EDefaultLockState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InteractiveDoorFramework_EDefaultLockState()
{
	if (!Z_Registration_Info_UEnum_EDefaultLockState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDefaultLockState.InnerSingleton, Z_Construct_UEnum_InteractiveDoorFramework_EDefaultLockState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDefaultLockState.InnerSingleton;
}
// ********** End Enum EDefaultLockState ***********************************************************

// ********** Begin Enum EDoorLockState ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDoorLockState;
static UEnum* EDoorLockState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDoorLockState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDoorLockState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractiveDoorFramework_EDoorLockState, (UObject*)Z_Construct_UPackage__Script_InteractiveDoorFramework(), TEXT("EDoorLockState"));
	}
	return Z_Registration_Info_UEnum_EDoorLockState.OuterSingleton;
}
template<> INTERACTIVEDOORFRAMEWORK_API UEnum* StaticEnum<EDoorLockState>()
{
	return EDoorLockState_StaticEnum();
}
struct Z_Construct_UEnum_InteractiveDoorFramework_EDoorLockState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Broken.DisplayName", "Broken" },
		{ "Broken.Name", "EDoorLockState::Broken" },
		{ "Locked_NoKey.DisplayName", "Locked - Missing Key" },
		{ "Locked_NoKey.Name", "EDoorLockState::Locked_NoKey" },
		{ "Locked_WrongSide.DisplayName", "Locked - Wrong Side" },
		{ "Locked_WrongSide.Name", "EDoorLockState::Locked_WrongSide" },
		{ "ModuleRelativePath", "Public/Components/IDFLockComponent.h" },
		{ "Unlocked.DisplayName", "Unlocked" },
		{ "Unlocked.Name", "EDoorLockState::Unlocked" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDoorLockState::Unlocked", (int64)EDoorLockState::Unlocked },
		{ "EDoorLockState::Locked_NoKey", (int64)EDoorLockState::Locked_NoKey },
		{ "EDoorLockState::Locked_WrongSide", (int64)EDoorLockState::Locked_WrongSide },
		{ "EDoorLockState::Broken", (int64)EDoorLockState::Broken },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractiveDoorFramework_EDoorLockState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InteractiveDoorFramework,
	nullptr,
	"EDoorLockState",
	"EDoorLockState",
	Z_Construct_UEnum_InteractiveDoorFramework_EDoorLockState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveDoorFramework_EDoorLockState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveDoorFramework_EDoorLockState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InteractiveDoorFramework_EDoorLockState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InteractiveDoorFramework_EDoorLockState()
{
	if (!Z_Registration_Info_UEnum_EDoorLockState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDoorLockState.InnerSingleton, Z_Construct_UEnum_InteractiveDoorFramework_EDoorLockState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDoorLockState.InnerSingleton;
}
// ********** End Enum EDoorLockState **************************************************************

// ********** Begin Delegate FOnKeyItemUsed ********************************************************
struct Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnKeyItemUsed__DelegateSignature_Statics
{
	struct _Script_InteractiveDoorFramework_eventOnKeyItemUsed_Parms
	{
		FKeyItem KeyItem;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/IDFLockComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnKeyItemUsed__DelegateSignature_Statics::NewProp_KeyItem = { "KeyItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InteractiveDoorFramework_eventOnKeyItemUsed_Parms, KeyItem), Z_Construct_UScriptStruct_FKeyItem, METADATA_PARAMS(0, nullptr) }; // 3983273373
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnKeyItemUsed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnKeyItemUsed__DelegateSignature_Statics::NewProp_KeyItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnKeyItemUsed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnKeyItemUsed__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InteractiveDoorFramework, nullptr, "OnKeyItemUsed__DelegateSignature", Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnKeyItemUsed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnKeyItemUsed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnKeyItemUsed__DelegateSignature_Statics::_Script_InteractiveDoorFramework_eventOnKeyItemUsed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnKeyItemUsed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnKeyItemUsed__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnKeyItemUsed__DelegateSignature_Statics::_Script_InteractiveDoorFramework_eventOnKeyItemUsed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnKeyItemUsed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnKeyItemUsed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnKeyItemUsed_DelegateWrapper(const FMulticastScriptDelegate& OnKeyItemUsed, FKeyItem KeyItem)
{
	struct _Script_InteractiveDoorFramework_eventOnKeyItemUsed_Parms
	{
		FKeyItem KeyItem;
	};
	_Script_InteractiveDoorFramework_eventOnKeyItemUsed_Parms Parms;
	Parms.KeyItem=KeyItem;
	OnKeyItemUsed.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnKeyItemUsed **********************************************************

// ********** Begin Delegate FOnOneSideUnlock ******************************************************
struct Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnOneSideUnlock__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/IDFLockComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnOneSideUnlock__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InteractiveDoorFramework, nullptr, "OnOneSideUnlock__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnOneSideUnlock__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnOneSideUnlock__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnOneSideUnlock__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnOneSideUnlock__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnOneSideUnlock_DelegateWrapper(const FMulticastScriptDelegate& OnOneSideUnlock)
{
	OnOneSideUnlock.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnOneSideUnlock ********************************************************

// ********** Begin Class UIDFLockComponent Function GetIsLocked ***********************************
struct Z_Construct_UFunction_UIDFLockComponent_GetIsLocked_Statics
{
	struct IDFLockComponent_eventGetIsLocked_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Checks if the door is currently locked.\n\x09 * @return True if locked (i.e. if RequiredKeyIDs is not empty), false otherwise.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/IDFLockComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Checks if the door is currently locked.\n@return True if locked (i.e. if RequiredKeyIDs is not empty), false otherwise." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIDFLockComponent_GetIsLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IDFLockComponent_eventGetIsLocked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIDFLockComponent_GetIsLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IDFLockComponent_eventGetIsLocked_Parms), &Z_Construct_UFunction_UIDFLockComponent_GetIsLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIDFLockComponent_GetIsLocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIDFLockComponent_GetIsLocked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFLockComponent_GetIsLocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIDFLockComponent_GetIsLocked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIDFLockComponent, nullptr, "GetIsLocked", Z_Construct_UFunction_UIDFLockComponent_GetIsLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFLockComponent_GetIsLocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIDFLockComponent_GetIsLocked_Statics::IDFLockComponent_eventGetIsLocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFLockComponent_GetIsLocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIDFLockComponent_GetIsLocked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIDFLockComponent_GetIsLocked_Statics::IDFLockComponent_eventGetIsLocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIDFLockComponent_GetIsLocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIDFLockComponent_GetIsLocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIDFLockComponent::execGetIsLocked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsLocked();
	P_NATIVE_END;
}
// ********** End Class UIDFLockComponent Function GetIsLocked *************************************

// ********** Begin Class UIDFLockComponent Function TryUnlock *************************************
struct Z_Construct_UFunction_UIDFLockComponent_TryUnlock_Statics
{
	struct IDFLockComponent_eventTryUnlock_Parms
	{
		TArray<FKeyItem> PlayerKeys;
		bool bPlayerOnFrontSide;
		EDoorLockState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Attempts to unlock the door using the given keys.\n\x09 * @param PlayerKeys The array of key items that the player possesses.\n\x09 * @return True if the player possess a required key.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/IDFLockComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Attempts to unlock the door using the given keys.\n@param PlayerKeys The array of key items that the player possesses.\n@return True if the player possess a required key." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerKeys;
	static void NewProp_bPlayerOnFrontSide_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayerOnFrontSide;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIDFLockComponent_TryUnlock_Statics::NewProp_PlayerKeys_Inner = { "PlayerKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKeyItem, METADATA_PARAMS(0, nullptr) }; // 3983273373
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIDFLockComponent_TryUnlock_Statics::NewProp_PlayerKeys = { "PlayerKeys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFLockComponent_eventTryUnlock_Parms, PlayerKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerKeys_MetaData), NewProp_PlayerKeys_MetaData) }; // 3983273373
void Z_Construct_UFunction_UIDFLockComponent_TryUnlock_Statics::NewProp_bPlayerOnFrontSide_SetBit(void* Obj)
{
	((IDFLockComponent_eventTryUnlock_Parms*)Obj)->bPlayerOnFrontSide = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIDFLockComponent_TryUnlock_Statics::NewProp_bPlayerOnFrontSide = { "bPlayerOnFrontSide", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IDFLockComponent_eventTryUnlock_Parms), &Z_Construct_UFunction_UIDFLockComponent_TryUnlock_Statics::NewProp_bPlayerOnFrontSide_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIDFLockComponent_TryUnlock_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIDFLockComponent_TryUnlock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFLockComponent_eventTryUnlock_Parms, ReturnValue), Z_Construct_UEnum_InteractiveDoorFramework_EDoorLockState, METADATA_PARAMS(0, nullptr) }; // 1953841562
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIDFLockComponent_TryUnlock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIDFLockComponent_TryUnlock_Statics::NewProp_PlayerKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIDFLockComponent_TryUnlock_Statics::NewProp_PlayerKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIDFLockComponent_TryUnlock_Statics::NewProp_bPlayerOnFrontSide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIDFLockComponent_TryUnlock_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIDFLockComponent_TryUnlock_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFLockComponent_TryUnlock_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIDFLockComponent_TryUnlock_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIDFLockComponent, nullptr, "TryUnlock", Z_Construct_UFunction_UIDFLockComponent_TryUnlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFLockComponent_TryUnlock_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIDFLockComponent_TryUnlock_Statics::IDFLockComponent_eventTryUnlock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFLockComponent_TryUnlock_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIDFLockComponent_TryUnlock_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIDFLockComponent_TryUnlock_Statics::IDFLockComponent_eventTryUnlock_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIDFLockComponent_TryUnlock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIDFLockComponent_TryUnlock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIDFLockComponent::execTryUnlock)
{
	P_GET_TARRAY_REF(FKeyItem,Z_Param_Out_PlayerKeys);
	P_GET_UBOOL(Z_Param_bPlayerOnFrontSide);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDoorLockState*)Z_Param__Result=P_THIS->TryUnlock(Z_Param_Out_PlayerKeys,Z_Param_bPlayerOnFrontSide);
	P_NATIVE_END;
}
// ********** End Class UIDFLockComponent Function TryUnlock ***************************************

// ********** Begin Class UIDFLockComponent ********************************************************
void UIDFLockComponent::StaticRegisterNativesUIDFLockComponent()
{
	UClass* Class = UIDFLockComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetIsLocked", &UIDFLockComponent::execGetIsLocked },
		{ "TryUnlock", &UIDFLockComponent::execTryUnlock },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIDFLockComponent;
UClass* UIDFLockComponent::GetPrivateStaticClass()
{
	using TClass = UIDFLockComponent;
	if (!Z_Registration_Info_UClass_UIDFLockComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IDFLockComponent"),
			Z_Registration_Info_UClass_UIDFLockComponent.InnerSingleton,
			StaticRegisterNativesUIDFLockComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UIDFLockComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIDFLockComponent_NoRegister()
{
	return UIDFLockComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIDFLockComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/IDFLockComponent.h" },
		{ "ModuleRelativePath", "Public/Components/IDFLockComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnKeyItemUsed_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Event listened by the DoorActor. */" },
#endif
		{ "ModuleRelativePath", "Public/Components/IDFLockComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Event listened by the DoorActor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOneSideUnlock_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/IDFLockComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLockState_MetaData[] = {
		{ "Category", "Lock Setup" },
		{ "ModuleRelativePath", "Public/Components/IDFLockComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockState_MetaData[] = {
		{ "Category", "Lock Runtime" },
		{ "ModuleRelativePath", "Public/Components/IDFLockComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredKeyIDs_MetaData[] = {
		{ "Category", "Lock Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< List of key IDs required to unlock the door. If this array is not empty, the door will be locked. */" },
#endif
		{ "EditCondition", "DefaultLockState==EDoorLockState::Locked_NoKey" },
		{ "ModuleRelativePath", "Public/Components/IDFLockComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< List of key IDs required to unlock the door. If this array is not empty, the door will be locked." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUnlockFromFrontSide_MetaData[] = {
		{ "Category", "Lock Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional: indicates which side is allowed to unlock the door. Could be an enum or bool depending on your side system. */" },
#endif
		{ "EditCondition", "LockState==EDoorLockState::OneSide" },
		{ "ModuleRelativePath", "Public/Components/IDFLockComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional: indicates which side is allowed to unlock the door. Could be an enum or bool depending on your side system." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKeyItemUsed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOneSideUnlock;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultLockState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultLockState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LockState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LockState;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RequiredKeyIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RequiredKeyIDs;
	static void NewProp_bUnlockFromFrontSide_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUnlockFromFrontSide;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIDFLockComponent_GetIsLocked, "GetIsLocked" }, // 1063672033
		{ &Z_Construct_UFunction_UIDFLockComponent_TryUnlock, "TryUnlock" }, // 1942796374
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIDFLockComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIDFLockComponent_Statics::NewProp_OnKeyItemUsed = { "OnKeyItemUsed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIDFLockComponent, OnKeyItemUsed), Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnKeyItemUsed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnKeyItemUsed_MetaData), NewProp_OnKeyItemUsed_MetaData) }; // 2669984583
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIDFLockComponent_Statics::NewProp_OnOneSideUnlock = { "OnOneSideUnlock", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIDFLockComponent, OnOneSideUnlock), Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnOneSideUnlock__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOneSideUnlock_MetaData), NewProp_OnOneSideUnlock_MetaData) }; // 832618625
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIDFLockComponent_Statics::NewProp_DefaultLockState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIDFLockComponent_Statics::NewProp_DefaultLockState = { "DefaultLockState", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIDFLockComponent, DefaultLockState), Z_Construct_UEnum_InteractiveDoorFramework_EDefaultLockState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLockState_MetaData), NewProp_DefaultLockState_MetaData) }; // 856470728
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIDFLockComponent_Statics::NewProp_LockState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIDFLockComponent_Statics::NewProp_LockState = { "LockState", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIDFLockComponent, LockState), Z_Construct_UEnum_InteractiveDoorFramework_EDoorLockState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockState_MetaData), NewProp_LockState_MetaData) }; // 1953841562
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIDFLockComponent_Statics::NewProp_RequiredKeyIDs_Inner = { "RequiredKeyIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIDFLockComponent_Statics::NewProp_RequiredKeyIDs = { "RequiredKeyIDs", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIDFLockComponent, RequiredKeyIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredKeyIDs_MetaData), NewProp_RequiredKeyIDs_MetaData) };
void Z_Construct_UClass_UIDFLockComponent_Statics::NewProp_bUnlockFromFrontSide_SetBit(void* Obj)
{
	((UIDFLockComponent*)Obj)->bUnlockFromFrontSide = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIDFLockComponent_Statics::NewProp_bUnlockFromFrontSide = { "bUnlockFromFrontSide", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIDFLockComponent), &Z_Construct_UClass_UIDFLockComponent_Statics::NewProp_bUnlockFromFrontSide_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUnlockFromFrontSide_MetaData), NewProp_bUnlockFromFrontSide_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIDFLockComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIDFLockComponent_Statics::NewProp_OnKeyItemUsed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIDFLockComponent_Statics::NewProp_OnOneSideUnlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIDFLockComponent_Statics::NewProp_DefaultLockState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIDFLockComponent_Statics::NewProp_DefaultLockState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIDFLockComponent_Statics::NewProp_LockState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIDFLockComponent_Statics::NewProp_LockState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIDFLockComponent_Statics::NewProp_RequiredKeyIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIDFLockComponent_Statics::NewProp_RequiredKeyIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIDFLockComponent_Statics::NewProp_bUnlockFromFrontSide,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIDFLockComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIDFLockComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveDoorFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIDFLockComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIDFLockComponent_Statics::ClassParams = {
	&UIDFLockComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIDFLockComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIDFLockComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIDFLockComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIDFLockComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIDFLockComponent()
{
	if (!Z_Registration_Info_UClass_UIDFLockComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIDFLockComponent.OuterSingleton, Z_Construct_UClass_UIDFLockComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIDFLockComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIDFLockComponent);
UIDFLockComponent::~UIDFLockComponent() {}
// ********** End Class UIDFLockComponent **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Components_IDFLockComponent_h__Script_InteractiveDoorFramework_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDefaultLockState_StaticEnum, TEXT("EDefaultLockState"), &Z_Registration_Info_UEnum_EDefaultLockState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 856470728U) },
		{ EDoorLockState_StaticEnum, TEXT("EDoorLockState"), &Z_Registration_Info_UEnum_EDoorLockState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1953841562U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIDFLockComponent, UIDFLockComponent::StaticClass, TEXT("UIDFLockComponent"), &Z_Registration_Info_UClass_UIDFLockComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIDFLockComponent), 2609346090U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Components_IDFLockComponent_h__Script_InteractiveDoorFramework_1843930951(TEXT("/Script/InteractiveDoorFramework"),
	Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Components_IDFLockComponent_h__Script_InteractiveDoorFramework_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Components_IDFLockComponent_h__Script_InteractiveDoorFramework_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Components_IDFLockComponent_h__Script_InteractiveDoorFramework_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Components_IDFLockComponent_h__Script_InteractiveDoorFramework_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
