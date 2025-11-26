// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subsystems/KeyItemsManager.h"
#include "Engine/GameInstance.h"
#include "Structs/IDFCollectibleStructs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKeyItemsManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_UKeyItemsManager();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_UKeyItemsManager_NoRegister();
INTERACTIVEDOORFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FKeyItem();
UPackage* Z_Construct_UPackage__Script_InteractiveDoorFramework();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKeyItemsManager Function AddFoundKey ************************************
struct Z_Construct_UFunction_UKeyItemsManager_AddFoundKey_Statics
{
	struct KeyItemsManager_eventAddFoundKey_Parms
	{
		FKeyItem KeyID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/KeyItemsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKeyItemsManager_AddFoundKey_Statics::NewProp_KeyID = { "KeyID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyItemsManager_eventAddFoundKey_Parms, KeyID), Z_Construct_UScriptStruct_FKeyItem, METADATA_PARAMS(0, nullptr) }; // 3983273373
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeyItemsManager_AddFoundKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyItemsManager_AddFoundKey_Statics::NewProp_KeyID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyItemsManager_AddFoundKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyItemsManager_AddFoundKey_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKeyItemsManager, nullptr, "AddFoundKey", Z_Construct_UFunction_UKeyItemsManager_AddFoundKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyItemsManager_AddFoundKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKeyItemsManager_AddFoundKey_Statics::KeyItemsManager_eventAddFoundKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyItemsManager_AddFoundKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKeyItemsManager_AddFoundKey_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKeyItemsManager_AddFoundKey_Statics::KeyItemsManager_eventAddFoundKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKeyItemsManager_AddFoundKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKeyItemsManager_AddFoundKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKeyItemsManager::execAddFoundKey)
{
	P_GET_STRUCT(FKeyItem,Z_Param_KeyID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFoundKey(Z_Param_KeyID);
	P_NATIVE_END;
}
// ********** End Class UKeyItemsManager Function AddFoundKey **************************************

// ********** Begin Class UKeyItemsManager Function GetFoundKeys ***********************************
struct Z_Construct_UFunction_UKeyItemsManager_GetFoundKeys_Statics
{
	struct KeyItemsManager_eventGetFoundKeys_Parms
	{
		TArray<FKeyItem> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/KeyItemsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKeyItemsManager_GetFoundKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKeyItem, METADATA_PARAMS(0, nullptr) }; // 3983273373
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKeyItemsManager_GetFoundKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyItemsManager_eventGetFoundKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3983273373
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeyItemsManager_GetFoundKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyItemsManager_GetFoundKeys_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyItemsManager_GetFoundKeys_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyItemsManager_GetFoundKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyItemsManager_GetFoundKeys_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKeyItemsManager, nullptr, "GetFoundKeys", Z_Construct_UFunction_UKeyItemsManager_GetFoundKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyItemsManager_GetFoundKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKeyItemsManager_GetFoundKeys_Statics::KeyItemsManager_eventGetFoundKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyItemsManager_GetFoundKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKeyItemsManager_GetFoundKeys_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKeyItemsManager_GetFoundKeys_Statics::KeyItemsManager_eventGetFoundKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKeyItemsManager_GetFoundKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKeyItemsManager_GetFoundKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKeyItemsManager::execGetFoundKeys)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FKeyItem>*)Z_Param__Result=P_THIS->GetFoundKeys();
	P_NATIVE_END;
}
// ********** End Class UKeyItemsManager Function GetFoundKeys *************************************

// ********** Begin Class UKeyItemsManager *********************************************************
void UKeyItemsManager::StaticRegisterNativesUKeyItemsManager()
{
	UClass* Class = UKeyItemsManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddFoundKey", &UKeyItemsManager::execAddFoundKey },
		{ "GetFoundKeys", &UKeyItemsManager::execGetFoundKeys },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKeyItemsManager;
UClass* UKeyItemsManager::GetPrivateStaticClass()
{
	using TClass = UKeyItemsManager;
	if (!Z_Registration_Info_UClass_UKeyItemsManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KeyItemsManager"),
			Z_Registration_Info_UClass_UKeyItemsManager.InnerSingleton,
			StaticRegisterNativesUKeyItemsManager,
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
	return Z_Registration_Info_UClass_UKeyItemsManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UKeyItemsManager_NoRegister()
{
	return UKeyItemsManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKeyItemsManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Subsystems/KeyItemsManager.h" },
		{ "ModuleRelativePath", "Public/Subsystems/KeyItemsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoundKeys_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/KeyItemsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FoundKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FoundKeys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UKeyItemsManager_AddFoundKey, "AddFoundKey" }, // 4154714163
		{ &Z_Construct_UFunction_UKeyItemsManager_GetFoundKeys, "GetFoundKeys" }, // 2424074513
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKeyItemsManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKeyItemsManager_Statics::NewProp_FoundKeys_Inner = { "FoundKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKeyItem, METADATA_PARAMS(0, nullptr) }; // 3983273373
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKeyItemsManager_Statics::NewProp_FoundKeys = { "FoundKeys", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKeyItemsManager, FoundKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoundKeys_MetaData), NewProp_FoundKeys_MetaData) }; // 3983273373
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKeyItemsManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeyItemsManager_Statics::NewProp_FoundKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeyItemsManager_Statics::NewProp_FoundKeys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyItemsManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKeyItemsManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveDoorFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyItemsManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKeyItemsManager_Statics::ClassParams = {
	&UKeyItemsManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UKeyItemsManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UKeyItemsManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyItemsManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UKeyItemsManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKeyItemsManager()
{
	if (!Z_Registration_Info_UClass_UKeyItemsManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKeyItemsManager.OuterSingleton, Z_Construct_UClass_UKeyItemsManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKeyItemsManager.OuterSingleton;
}
UKeyItemsManager::UKeyItemsManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKeyItemsManager);
UKeyItemsManager::~UKeyItemsManager() {}
// ********** End Class UKeyItemsManager ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Subsystems_KeyItemsManager_h__Script_InteractiveDoorFramework_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKeyItemsManager, UKeyItemsManager::StaticClass, TEXT("UKeyItemsManager"), &Z_Registration_Info_UClass_UKeyItemsManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKeyItemsManager), 2393936882U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Subsystems_KeyItemsManager_h__Script_InteractiveDoorFramework_867860512(TEXT("/Script/InteractiveDoorFramework"),
	Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Subsystems_KeyItemsManager_h__Script_InteractiveDoorFramework_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Subsystems_KeyItemsManager_h__Script_InteractiveDoorFramework_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
