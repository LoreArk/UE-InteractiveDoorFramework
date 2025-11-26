// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/Collectables/IDFCollectibleActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIDFCollectibleActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFCollectibleActor();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFCollectibleActor_NoRegister();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFInteractableActor();
UPackage* Z_Construct_UPackage__Script_InteractiveDoorFramework();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIDFCollectibleActor *****************************************************
void AIDFCollectibleActor::StaticRegisterNativesAIDFCollectibleActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AIDFCollectibleActor;
UClass* AIDFCollectibleActor::GetPrivateStaticClass()
{
	using TClass = AIDFCollectibleActor;
	if (!Z_Registration_Info_UClass_AIDFCollectibleActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IDFCollectibleActor"),
			Z_Registration_Info_UClass_AIDFCollectibleActor.InnerSingleton,
			StaticRegisterNativesAIDFCollectibleActor,
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
	return Z_Registration_Info_UClass_AIDFCollectibleActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AIDFCollectibleActor_NoRegister()
{
	return AIDFCollectibleActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIDFCollectibleActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Actors/Collectables/IDFCollectibleActor.h" },
		{ "ModuleRelativePath", "Public/Actors/Collectables/IDFCollectibleActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< The static mesh of the collectable actor. Created in the constructor*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/Collectables/IDFCollectibleActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< The static mesh of the collectable actor. Created in the constructor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Examination Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Speed with which the object is moved to the target position for the examination */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/Collectables/IDFCollectibleActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Speed with which the object is moved to the target position for the examination" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateSpeed_MetaData[] = {
		{ "Category", "Examination Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Speed with which the object is rotated to the target rotation for the examination */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/Collectables/IDFCollectibleActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Speed with which the object is rotated to the target rotation for the examination" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExaminationRotationSpeed_MetaData[] = {
		{ "Category", "Examination Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Controls the speed with which the object is rotated during the examination */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/Collectables/IDFCollectibleActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Controls the speed with which the object is rotated during the examination" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Input action used to rotate the actor during the examination*/" },
#endif
		{ "ModuleRelativePath", "Public/Actors/Collectables/IDFCollectibleActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Input action used to rotate the actor during the examination" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExaminationRotationSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIDFCollectibleActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIDFCollectibleActor_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFCollectibleActor, ItemMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemMesh_MetaData), NewProp_ItemMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIDFCollectibleActor_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFCollectibleActor, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIDFCollectibleActor_Statics::NewProp_RotateSpeed = { "RotateSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFCollectibleActor, RotateSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateSpeed_MetaData), NewProp_RotateSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIDFCollectibleActor_Statics::NewProp_ExaminationRotationSpeed = { "ExaminationRotationSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFCollectibleActor, ExaminationRotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExaminationRotationSpeed_MetaData), NewProp_ExaminationRotationSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIDFCollectibleActor_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFCollectibleActor, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIDFCollectibleActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFCollectibleActor_Statics::NewProp_ItemMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFCollectibleActor_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFCollectibleActor_Statics::NewProp_RotateSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFCollectibleActor_Statics::NewProp_ExaminationRotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFCollectibleActor_Statics::NewProp_LookAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIDFCollectibleActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AIDFCollectibleActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AIDFInteractableActor,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveDoorFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIDFCollectibleActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIDFCollectibleActor_Statics::ClassParams = {
	&AIDFCollectibleActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AIDFCollectibleActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AIDFCollectibleActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIDFCollectibleActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AIDFCollectibleActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIDFCollectibleActor()
{
	if (!Z_Registration_Info_UClass_AIDFCollectibleActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIDFCollectibleActor.OuterSingleton, Z_Construct_UClass_AIDFCollectibleActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIDFCollectibleActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIDFCollectibleActor);
AIDFCollectibleActor::~AIDFCollectibleActor() {}
// ********** End Class AIDFCollectibleActor *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_Collectables_IDFCollectibleActor_h__Script_InteractiveDoorFramework_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIDFCollectibleActor, AIDFCollectibleActor::StaticClass, TEXT("AIDFCollectibleActor"), &Z_Registration_Info_UClass_AIDFCollectibleActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIDFCollectibleActor), 1634533701U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_Collectables_IDFCollectibleActor_h__Script_InteractiveDoorFramework_3991405759(TEXT("/Script/InteractiveDoorFramework"),
	Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_Collectables_IDFCollectibleActor_h__Script_InteractiveDoorFramework_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_Collectables_IDFCollectibleActor_h__Script_InteractiveDoorFramework_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
