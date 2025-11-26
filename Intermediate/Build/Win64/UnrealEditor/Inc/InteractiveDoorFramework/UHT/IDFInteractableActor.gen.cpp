// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/IDFInteractableActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIDFInteractableActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFInteractableActor();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFInteractableActor_NoRegister();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_UIDFInteractable_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveDoorFramework();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIDFInteractableActor ****************************************************
void AIDFInteractableActor::StaticRegisterNativesAIDFInteractableActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AIDFInteractableActor;
UClass* AIDFInteractableActor::GetPrivateStaticClass()
{
	using TClass = AIDFInteractableActor;
	if (!Z_Registration_Info_UClass_AIDFInteractableActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IDFInteractableActor"),
			Z_Registration_Info_UClass_AIDFInteractableActor.InnerSingleton,
			StaticRegisterNativesAIDFInteractableActor,
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
	return Z_Registration_Info_UClass_AIDFInteractableActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AIDFInteractableActor_NoRegister()
{
	return AIDFInteractableActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIDFInteractableActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/IDFInteractableActor.h" },
		{ "ModuleRelativePath", "Public/Actors/IDFInteractableActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "IDFInteractableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/IDFInteractableActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptLocation_MetaData[] = {
		{ "Category", "IDFInteractableActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Holds the location where to place the interaction prompt when the actor is targeted by the player. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/IDFInteractableActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the location where to place the interaction prompt when the actor is targeted by the player." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTargeted_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Represent if the actor is being targeted by player or not*/" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFInteractableActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Represent if the actor is being targeted by player or not" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetedMaterial_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Material set as Overlay Material when the actor is looked at by the player*/" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFInteractableActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Material set as Overlay Material when the actor is looked at by the player" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PromptLocation;
	static void NewProp_bIsTargeted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTargeted;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TargetedMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIDFInteractableActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIDFInteractableActor_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFInteractableActor, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIDFInteractableActor_Statics::NewProp_PromptLocation = { "PromptLocation", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFInteractableActor, PromptLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptLocation_MetaData), NewProp_PromptLocation_MetaData) };
void Z_Construct_UClass_AIDFInteractableActor_Statics::NewProp_bIsTargeted_SetBit(void* Obj)
{
	((AIDFInteractableActor*)Obj)->bIsTargeted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIDFInteractableActor_Statics::NewProp_bIsTargeted = { "bIsTargeted", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIDFInteractableActor), &Z_Construct_UClass_AIDFInteractableActor_Statics::NewProp_bIsTargeted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTargeted_MetaData), NewProp_bIsTargeted_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AIDFInteractableActor_Statics::NewProp_TargetedMaterial = { "TargetedMaterial", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFInteractableActor, TargetedMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetedMaterial_MetaData), NewProp_TargetedMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIDFInteractableActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFInteractableActor_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFInteractableActor_Statics::NewProp_PromptLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFInteractableActor_Statics::NewProp_bIsTargeted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFInteractableActor_Statics::NewProp_TargetedMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIDFInteractableActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AIDFInteractableActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveDoorFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIDFInteractableActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AIDFInteractableActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIDFInteractable_NoRegister, (int32)VTABLE_OFFSET(AIDFInteractableActor, IIDFInteractable), false },  // 2300903989
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIDFInteractableActor_Statics::ClassParams = {
	&AIDFInteractableActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AIDFInteractableActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AIDFInteractableActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIDFInteractableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AIDFInteractableActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIDFInteractableActor()
{
	if (!Z_Registration_Info_UClass_AIDFInteractableActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIDFInteractableActor.OuterSingleton, Z_Construct_UClass_AIDFInteractableActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIDFInteractableActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIDFInteractableActor);
AIDFInteractableActor::~AIDFInteractableActor() {}
// ********** End Class AIDFInteractableActor ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFInteractableActor_h__Script_InteractiveDoorFramework_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIDFInteractableActor, AIDFInteractableActor::StaticClass, TEXT("AIDFInteractableActor"), &Z_Registration_Info_UClass_AIDFInteractableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIDFInteractableActor), 4162326294U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFInteractableActor_h__Script_InteractiveDoorFramework_1488483183(TEXT("/Script/InteractiveDoorFramework"),
	Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFInteractableActor_h__Script_InteractiveDoorFramework_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFInteractableActor_h__Script_InteractiveDoorFramework_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
