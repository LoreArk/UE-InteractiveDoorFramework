// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/Collectables/IDFKeyActor.h"
#include "Structs/IDFCollectibleStructs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIDFKeyActor() {}

// ********** Begin Cross Module References ********************************************************
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFCollectibleActor();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFKeyActor();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFKeyActor_NoRegister();
INTERACTIVEDOORFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FKeyItem();
UPackage* Z_Construct_UPackage__Script_InteractiveDoorFramework();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIDFKeyActor Function DisableActor ***************************************
struct Z_Construct_UFunction_AIDFKeyActor_DisableActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Disables the actor when picked up.\n\x09 * @details Hides the mesh and disables all collisions.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/Collectables/IDFKeyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Disables the actor when picked up.\n@details Hides the mesh and disables all collisions." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIDFKeyActor_DisableActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIDFKeyActor, nullptr, "DisableActor", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFKeyActor_DisableActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIDFKeyActor_DisableActor_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AIDFKeyActor_DisableActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIDFKeyActor_DisableActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIDFKeyActor::execDisableActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableActor();
	P_NATIVE_END;
}
// ********** End Class AIDFKeyActor Function DisableActor *****************************************

// ********** Begin Class AIDFKeyActor *************************************************************
void AIDFKeyActor::StaticRegisterNativesAIDFKeyActor()
{
	UClass* Class = AIDFKeyActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DisableActor", &AIDFKeyActor::execDisableActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AIDFKeyActor;
UClass* AIDFKeyActor::GetPrivateStaticClass()
{
	using TClass = AIDFKeyActor;
	if (!Z_Registration_Info_UClass_AIDFKeyActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IDFKeyActor"),
			Z_Registration_Info_UClass_AIDFKeyActor.InnerSingleton,
			StaticRegisterNativesAIDFKeyActor,
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
	return Z_Registration_Info_UClass_AIDFKeyActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AIDFKeyActor_NoRegister()
{
	return AIDFKeyActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIDFKeyActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/Collectables/IDFKeyActor.h" },
		{ "ModuleRelativePath", "Public/Actors/Collectables/IDFKeyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyItemSettings_MetaData[] = {
		{ "Category", "Key Item Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Struct holding relevant info for Unlock system and UI.*/" },
#endif
		{ "ModuleRelativePath", "Public/Actors/Collectables/IDFKeyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Struct holding relevant info for Unlock system and UI." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyItemSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AIDFKeyActor_DisableActor, "DisableActor" }, // 3965513011
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIDFKeyActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AIDFKeyActor_Statics::NewProp_KeyItemSettings = { "KeyItemSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFKeyActor, KeyItemSettings), Z_Construct_UScriptStruct_FKeyItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyItemSettings_MetaData), NewProp_KeyItemSettings_MetaData) }; // 3983273373
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIDFKeyActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFKeyActor_Statics::NewProp_KeyItemSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIDFKeyActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AIDFKeyActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AIDFCollectibleActor,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveDoorFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIDFKeyActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIDFKeyActor_Statics::ClassParams = {
	&AIDFKeyActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AIDFKeyActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AIDFKeyActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIDFKeyActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AIDFKeyActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIDFKeyActor()
{
	if (!Z_Registration_Info_UClass_AIDFKeyActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIDFKeyActor.OuterSingleton, Z_Construct_UClass_AIDFKeyActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIDFKeyActor.OuterSingleton;
}
AIDFKeyActor::AIDFKeyActor() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIDFKeyActor);
AIDFKeyActor::~AIDFKeyActor() {}
// ********** End Class AIDFKeyActor ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_Collectables_IDFKeyActor_h__Script_InteractiveDoorFramework_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIDFKeyActor, AIDFKeyActor::StaticClass, TEXT("AIDFKeyActor"), &Z_Registration_Info_UClass_AIDFKeyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIDFKeyActor), 1711646973U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_Collectables_IDFKeyActor_h__Script_InteractiveDoorFramework_2834483365(TEXT("/Script/InteractiveDoorFramework"),
	Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_Collectables_IDFKeyActor_h__Script_InteractiveDoorFramework_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_Collectables_IDFKeyActor_h__Script_InteractiveDoorFramework_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
