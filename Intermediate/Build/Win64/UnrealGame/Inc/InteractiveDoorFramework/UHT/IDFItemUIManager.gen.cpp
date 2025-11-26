// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subsystems/IDFItemUIManager.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIDFItemUIManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFInteractionPromptActor_NoRegister();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_UIDFHUDMessageWidget_NoRegister();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_UIDFItemDescriptionWidget_NoRegister();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_UIDFItemUIManager();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_UIDFItemUIManager_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveDoorFramework();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIDFItemUIManager Function HideItemDescription ***************************
struct Z_Construct_UFunction_UIDFItemUIManager_HideItemDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item Description" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Manually hide the item description panel\n     */" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/IDFItemUIManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Manually hide the item description panel" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIDFItemUIManager_HideItemDescription_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIDFItemUIManager, nullptr, "HideItemDescription", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFItemUIManager_HideItemDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIDFItemUIManager_HideItemDescription_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIDFItemUIManager_HideItemDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIDFItemUIManager_HideItemDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIDFItemUIManager::execHideItemDescription)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideItemDescription();
	P_NATIVE_END;
}
// ********** End Class UIDFItemUIManager Function HideItemDescription *****************************

// ********** Begin Class UIDFItemUIManager Function HidePromptWidget ******************************
struct Z_Construct_UFunction_UIDFItemUIManager_HidePromptWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Manually hide the prompt widget\n     */" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/IDFItemUIManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Manually hide the prompt widget" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIDFItemUIManager_HidePromptWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIDFItemUIManager, nullptr, "HidePromptWidget", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFItemUIManager_HidePromptWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIDFItemUIManager_HidePromptWidget_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIDFItemUIManager_HidePromptWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIDFItemUIManager_HidePromptWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIDFItemUIManager::execHidePromptWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HidePromptWidget();
	P_NATIVE_END;
}
// ********** End Class UIDFItemUIManager Function HidePromptWidget ********************************

// ********** Begin Class UIDFItemUIManager Function SetDescriptionWidgetClass *********************
struct Z_Construct_UFunction_UIDFItemUIManager_SetDescriptionWidgetClass_Statics
{
	struct IDFItemUIManager_eventSetDescriptionWidgetClass_Parms
	{
		TSubclassOf<UUserWidget> WidgetClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* @brief Setter for the DescriptionWidgetClass to spawn when needed */" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/IDFItemUIManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Setter for the DescriptionWidgetClass to spawn when needed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UIDFItemUIManager_SetDescriptionWidgetClass_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFItemUIManager_eventSetDescriptionWidgetClass_Parms, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIDFItemUIManager_SetDescriptionWidgetClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIDFItemUIManager_SetDescriptionWidgetClass_Statics::NewProp_WidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFItemUIManager_SetDescriptionWidgetClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIDFItemUIManager_SetDescriptionWidgetClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIDFItemUIManager, nullptr, "SetDescriptionWidgetClass", Z_Construct_UFunction_UIDFItemUIManager_SetDescriptionWidgetClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFItemUIManager_SetDescriptionWidgetClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIDFItemUIManager_SetDescriptionWidgetClass_Statics::IDFItemUIManager_eventSetDescriptionWidgetClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFItemUIManager_SetDescriptionWidgetClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIDFItemUIManager_SetDescriptionWidgetClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIDFItemUIManager_SetDescriptionWidgetClass_Statics::IDFItemUIManager_eventSetDescriptionWidgetClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIDFItemUIManager_SetDescriptionWidgetClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIDFItemUIManager_SetDescriptionWidgetClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIDFItemUIManager::execSetDescriptionWidgetClass)
{
	P_GET_OBJECT(UClass,Z_Param_WidgetClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDescriptionWidgetClass(Z_Param_WidgetClass);
	P_NATIVE_END;
}
// ********** End Class UIDFItemUIManager Function SetDescriptionWidgetClass ***********************

// ********** Begin Class UIDFItemUIManager Function SetHUDMessageWidgetClass **********************
struct Z_Construct_UFunction_UIDFItemUIManager_SetHUDMessageWidgetClass_Statics
{
	struct IDFItemUIManager_eventSetHUDMessageWidgetClass_Parms
	{
		TSubclassOf<UIDFHUDMessageWidget> WidgetClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* @brief Setter for the HUDMessageWidgetClass to spawn when needed */" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/IDFItemUIManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Setter for the HUDMessageWidgetClass to spawn when needed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UIDFItemUIManager_SetHUDMessageWidgetClass_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFItemUIManager_eventSetHUDMessageWidgetClass_Parms, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UIDFHUDMessageWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIDFItemUIManager_SetHUDMessageWidgetClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIDFItemUIManager_SetHUDMessageWidgetClass_Statics::NewProp_WidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFItemUIManager_SetHUDMessageWidgetClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIDFItemUIManager_SetHUDMessageWidgetClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIDFItemUIManager, nullptr, "SetHUDMessageWidgetClass", Z_Construct_UFunction_UIDFItemUIManager_SetHUDMessageWidgetClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFItemUIManager_SetHUDMessageWidgetClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIDFItemUIManager_SetHUDMessageWidgetClass_Statics::IDFItemUIManager_eventSetHUDMessageWidgetClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFItemUIManager_SetHUDMessageWidgetClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIDFItemUIManager_SetHUDMessageWidgetClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIDFItemUIManager_SetHUDMessageWidgetClass_Statics::IDFItemUIManager_eventSetHUDMessageWidgetClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIDFItemUIManager_SetHUDMessageWidgetClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIDFItemUIManager_SetHUDMessageWidgetClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIDFItemUIManager::execSetHUDMessageWidgetClass)
{
	P_GET_OBJECT(UClass,Z_Param_WidgetClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHUDMessageWidgetClass(Z_Param_WidgetClass);
	P_NATIVE_END;
}
// ********** End Class UIDFItemUIManager Function SetHUDMessageWidgetClass ************************

// ********** Begin Class UIDFItemUIManager Function SetPromptWidgetClass **************************
struct Z_Construct_UFunction_UIDFItemUIManager_SetPromptWidgetClass_Statics
{
	struct IDFItemUIManager_eventSetPromptWidgetClass_Parms
	{
		TSubclassOf<AIDFInteractionPromptActor> WidgetClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* @brief Setter for the PromptActorClass to spawn when needed */" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/IDFItemUIManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Setter for the PromptActorClass to spawn when needed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UIDFItemUIManager_SetPromptWidgetClass_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFItemUIManager_eventSetPromptWidgetClass_Parms, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AIDFInteractionPromptActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIDFItemUIManager_SetPromptWidgetClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIDFItemUIManager_SetPromptWidgetClass_Statics::NewProp_WidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFItemUIManager_SetPromptWidgetClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIDFItemUIManager_SetPromptWidgetClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIDFItemUIManager, nullptr, "SetPromptWidgetClass", Z_Construct_UFunction_UIDFItemUIManager_SetPromptWidgetClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFItemUIManager_SetPromptWidgetClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIDFItemUIManager_SetPromptWidgetClass_Statics::IDFItemUIManager_eventSetPromptWidgetClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFItemUIManager_SetPromptWidgetClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIDFItemUIManager_SetPromptWidgetClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIDFItemUIManager_SetPromptWidgetClass_Statics::IDFItemUIManager_eventSetPromptWidgetClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIDFItemUIManager_SetPromptWidgetClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIDFItemUIManager_SetPromptWidgetClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIDFItemUIManager::execSetPromptWidgetClass)
{
	P_GET_OBJECT(UClass,Z_Param_WidgetClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPromptWidgetClass(Z_Param_WidgetClass);
	P_NATIVE_END;
}
// ********** End Class UIDFItemUIManager Function SetPromptWidgetClass ****************************

// ********** Begin Class UIDFItemUIManager Function ShowHUDMessage ********************************
struct Z_Construct_UFunction_UIDFItemUIManager_ShowHUDMessage_Statics
{
	struct IDFItemUIManager_eventShowHUDMessage_Parms
	{
		FText MessageText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HUD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Shows the HUD message, the widget blueprint will handle how long the message will be visible\n     */" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/IDFItemUIManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Shows the HUD message, the widget blueprint will handle how long the message will be visible" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_MessageText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UIDFItemUIManager_ShowHUDMessage_Statics::NewProp_MessageText = { "MessageText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFItemUIManager_eventShowHUDMessage_Parms, MessageText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageText_MetaData), NewProp_MessageText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIDFItemUIManager_ShowHUDMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIDFItemUIManager_ShowHUDMessage_Statics::NewProp_MessageText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFItemUIManager_ShowHUDMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIDFItemUIManager_ShowHUDMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIDFItemUIManager, nullptr, "ShowHUDMessage", Z_Construct_UFunction_UIDFItemUIManager_ShowHUDMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFItemUIManager_ShowHUDMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIDFItemUIManager_ShowHUDMessage_Statics::IDFItemUIManager_eventShowHUDMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFItemUIManager_ShowHUDMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIDFItemUIManager_ShowHUDMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIDFItemUIManager_ShowHUDMessage_Statics::IDFItemUIManager_eventShowHUDMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIDFItemUIManager_ShowHUDMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIDFItemUIManager_ShowHUDMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIDFItemUIManager::execShowHUDMessage)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_MessageText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowHUDMessage(Z_Param_Out_MessageText);
	P_NATIVE_END;
}
// ********** End Class UIDFItemUIManager Function ShowHUDMessage **********************************

// ********** Begin Class UIDFItemUIManager Function ShowItemDescription ***************************
struct Z_Construct_UFunction_UIDFItemUIManager_ShowItemDescription_Statics
{
	struct IDFItemUIManager_eventShowItemDescription_Parms
	{
		FText ItemName;
		FText ItemDescription;
		float DisplayDuration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item Description" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Shows the item description panel with the specified details\n     * @param ItemName The name of the collected item\n     * @param ItemDescription The description text for the item\n     * @param DisplayDuration How long to show the panel (0 = until manually hidden)\n     */" },
#endif
		{ "CPP_Default_DisplayDuration", "5.000000" },
		{ "ModuleRelativePath", "Public/Subsystems/IDFItemUIManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Shows the item description panel with the specified details\n@param ItemName The name of the collected item\n@param ItemDescription The description text for the item\n@param DisplayDuration How long to show the panel (0 = until manually hidden)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ItemDescription;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplayDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UIDFItemUIManager_ShowItemDescription_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFItemUIManager_eventShowItemDescription_Parms, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UIDFItemUIManager_ShowItemDescription_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFItemUIManager_eventShowItemDescription_Parms, ItemDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDescription_MetaData), NewProp_ItemDescription_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIDFItemUIManager_ShowItemDescription_Statics::NewProp_DisplayDuration = { "DisplayDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFItemUIManager_eventShowItemDescription_Parms, DisplayDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIDFItemUIManager_ShowItemDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIDFItemUIManager_ShowItemDescription_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIDFItemUIManager_ShowItemDescription_Statics::NewProp_ItemDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIDFItemUIManager_ShowItemDescription_Statics::NewProp_DisplayDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFItemUIManager_ShowItemDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIDFItemUIManager_ShowItemDescription_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIDFItemUIManager, nullptr, "ShowItemDescription", Z_Construct_UFunction_UIDFItemUIManager_ShowItemDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFItemUIManager_ShowItemDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIDFItemUIManager_ShowItemDescription_Statics::IDFItemUIManager_eventShowItemDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFItemUIManager_ShowItemDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIDFItemUIManager_ShowItemDescription_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIDFItemUIManager_ShowItemDescription_Statics::IDFItemUIManager_eventShowItemDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIDFItemUIManager_ShowItemDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIDFItemUIManager_ShowItemDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIDFItemUIManager::execShowItemDescription)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_ItemName);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_ItemDescription);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DisplayDuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowItemDescription(Z_Param_Out_ItemName,Z_Param_Out_ItemDescription,Z_Param_DisplayDuration);
	P_NATIVE_END;
}
// ********** End Class UIDFItemUIManager Function ShowItemDescription *****************************

// ********** Begin Class UIDFItemUIManager Function ShowPromptWidget ******************************
struct Z_Construct_UFunction_UIDFItemUIManager_ShowPromptWidget_Statics
{
	struct IDFItemUIManager_eventShowPromptWidget_Parms
	{
		FVector Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Shows the prompt widget at the specified location.\n     * @param Location - The location in world space where the widget should be placed.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/IDFItemUIManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Shows the prompt widget at the specified location.\n@param Location - The location in world space where the widget should be placed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIDFItemUIManager_ShowPromptWidget_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFItemUIManager_eventShowPromptWidget_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIDFItemUIManager_ShowPromptWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIDFItemUIManager_ShowPromptWidget_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFItemUIManager_ShowPromptWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIDFItemUIManager_ShowPromptWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIDFItemUIManager, nullptr, "ShowPromptWidget", Z_Construct_UFunction_UIDFItemUIManager_ShowPromptWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFItemUIManager_ShowPromptWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIDFItemUIManager_ShowPromptWidget_Statics::IDFItemUIManager_eventShowPromptWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFItemUIManager_ShowPromptWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIDFItemUIManager_ShowPromptWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIDFItemUIManager_ShowPromptWidget_Statics::IDFItemUIManager_eventShowPromptWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIDFItemUIManager_ShowPromptWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIDFItemUIManager_ShowPromptWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIDFItemUIManager::execShowPromptWidget)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowPromptWidget(Z_Param_Location);
	P_NATIVE_END;
}
// ********** End Class UIDFItemUIManager Function ShowPromptWidget ********************************

// ********** Begin Class UIDFItemUIManager ********************************************************
void UIDFItemUIManager::StaticRegisterNativesUIDFItemUIManager()
{
	UClass* Class = UIDFItemUIManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HideItemDescription", &UIDFItemUIManager::execHideItemDescription },
		{ "HidePromptWidget", &UIDFItemUIManager::execHidePromptWidget },
		{ "SetDescriptionWidgetClass", &UIDFItemUIManager::execSetDescriptionWidgetClass },
		{ "SetHUDMessageWidgetClass", &UIDFItemUIManager::execSetHUDMessageWidgetClass },
		{ "SetPromptWidgetClass", &UIDFItemUIManager::execSetPromptWidgetClass },
		{ "ShowHUDMessage", &UIDFItemUIManager::execShowHUDMessage },
		{ "ShowItemDescription", &UIDFItemUIManager::execShowItemDescription },
		{ "ShowPromptWidget", &UIDFItemUIManager::execShowPromptWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIDFItemUIManager;
UClass* UIDFItemUIManager::GetPrivateStaticClass()
{
	using TClass = UIDFItemUIManager;
	if (!Z_Registration_Info_UClass_UIDFItemUIManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IDFItemUIManager"),
			Z_Registration_Info_UClass_UIDFItemUIManager.InnerSingleton,
			StaticRegisterNativesUIDFItemUIManager,
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
	return Z_Registration_Info_UClass_UIDFItemUIManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UIDFItemUIManager_NoRegister()
{
	return UIDFItemUIManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIDFItemUIManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Subsystems/IDFItemUIManager.h" },
		{ "ModuleRelativePath", "Public/Subsystems/IDFItemUIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DescriptionWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The description widget instance\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Subsystems/IDFItemUIManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The description widget instance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDMessageWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The HUD Message widget instance\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Subsystems/IDFItemUIManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The HUD Message widget instance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptActor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The prompt widget instance\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/IDFItemUIManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The prompt widget instance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDMessageWidgetClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/IDFItemUIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DescriptionWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Class to use for the description widget\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/IDFItemUIManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class to use for the description widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptActorClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Class to use for the prompt widget\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/IDFItemUIManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class to use for the prompt widget" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DescriptionWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDMessageWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PromptActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HUDMessageWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DescriptionWidgetClass;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_PromptActorClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIDFItemUIManager_HideItemDescription, "HideItemDescription" }, // 3049736651
		{ &Z_Construct_UFunction_UIDFItemUIManager_HidePromptWidget, "HidePromptWidget" }, // 2811702161
		{ &Z_Construct_UFunction_UIDFItemUIManager_SetDescriptionWidgetClass, "SetDescriptionWidgetClass" }, // 4222767374
		{ &Z_Construct_UFunction_UIDFItemUIManager_SetHUDMessageWidgetClass, "SetHUDMessageWidgetClass" }, // 1047458763
		{ &Z_Construct_UFunction_UIDFItemUIManager_SetPromptWidgetClass, "SetPromptWidgetClass" }, // 2428235915
		{ &Z_Construct_UFunction_UIDFItemUIManager_ShowHUDMessage, "ShowHUDMessage" }, // 171639883
		{ &Z_Construct_UFunction_UIDFItemUIManager_ShowItemDescription, "ShowItemDescription" }, // 1931705977
		{ &Z_Construct_UFunction_UIDFItemUIManager_ShowPromptWidget, "ShowPromptWidget" }, // 1454476696
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIDFItemUIManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIDFItemUIManager_Statics::NewProp_DescriptionWidget = { "DescriptionWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIDFItemUIManager, DescriptionWidget), Z_Construct_UClass_UIDFItemDescriptionWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DescriptionWidget_MetaData), NewProp_DescriptionWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIDFItemUIManager_Statics::NewProp_HUDMessageWidget = { "HUDMessageWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIDFItemUIManager, HUDMessageWidget), Z_Construct_UClass_UIDFHUDMessageWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDMessageWidget_MetaData), NewProp_HUDMessageWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIDFItemUIManager_Statics::NewProp_PromptActor = { "PromptActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIDFItemUIManager, PromptActor), Z_Construct_UClass_AIDFInteractionPromptActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptActor_MetaData), NewProp_PromptActor_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UIDFItemUIManager_Statics::NewProp_HUDMessageWidgetClass = { "HUDMessageWidgetClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIDFItemUIManager, HUDMessageWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDMessageWidgetClass_MetaData), NewProp_HUDMessageWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UIDFItemUIManager_Statics::NewProp_DescriptionWidgetClass = { "DescriptionWidgetClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIDFItemUIManager, DescriptionWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DescriptionWidgetClass_MetaData), NewProp_DescriptionWidgetClass_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UIDFItemUIManager_Statics::NewProp_PromptActorClass = { "PromptActorClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIDFItemUIManager, PromptActorClass), Z_Construct_UClass_AIDFInteractionPromptActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptActorClass_MetaData), NewProp_PromptActorClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIDFItemUIManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIDFItemUIManager_Statics::NewProp_DescriptionWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIDFItemUIManager_Statics::NewProp_HUDMessageWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIDFItemUIManager_Statics::NewProp_PromptActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIDFItemUIManager_Statics::NewProp_HUDMessageWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIDFItemUIManager_Statics::NewProp_DescriptionWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIDFItemUIManager_Statics::NewProp_PromptActorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIDFItemUIManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIDFItemUIManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveDoorFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIDFItemUIManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIDFItemUIManager_Statics::ClassParams = {
	&UIDFItemUIManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIDFItemUIManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIDFItemUIManager_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIDFItemUIManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UIDFItemUIManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIDFItemUIManager()
{
	if (!Z_Registration_Info_UClass_UIDFItemUIManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIDFItemUIManager.OuterSingleton, Z_Construct_UClass_UIDFItemUIManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIDFItemUIManager.OuterSingleton;
}
UIDFItemUIManager::UIDFItemUIManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIDFItemUIManager);
UIDFItemUIManager::~UIDFItemUIManager() {}
// ********** End Class UIDFItemUIManager **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Subsystems_IDFItemUIManager_h__Script_InteractiveDoorFramework_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIDFItemUIManager, UIDFItemUIManager::StaticClass, TEXT("UIDFItemUIManager"), &Z_Registration_Info_UClass_UIDFItemUIManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIDFItemUIManager), 253659626U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Subsystems_IDFItemUIManager_h__Script_InteractiveDoorFramework_1851216148(TEXT("/Script/InteractiveDoorFramework"),
	Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Subsystems_IDFItemUIManager_h__Script_InteractiveDoorFramework_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Subsystems_IDFItemUIManager_h__Script_InteractiveDoorFramework_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
