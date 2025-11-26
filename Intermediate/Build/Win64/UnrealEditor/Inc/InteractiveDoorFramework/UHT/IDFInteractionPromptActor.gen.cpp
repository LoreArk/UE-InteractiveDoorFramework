// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/IDFInteractionPromptActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIDFInteractionPromptActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFInteractionPromptActor();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFInteractionPromptActor_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveDoorFramework();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIDFInteractionPromptActor ***********************************************
void AIDFInteractionPromptActor::StaticRegisterNativesAIDFInteractionPromptActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AIDFInteractionPromptActor;
UClass* AIDFInteractionPromptActor::GetPrivateStaticClass()
{
	using TClass = AIDFInteractionPromptActor;
	if (!Z_Registration_Info_UClass_AIDFInteractionPromptActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IDFInteractionPromptActor"),
			Z_Registration_Info_UClass_AIDFInteractionPromptActor.InnerSingleton,
			StaticRegisterNativesAIDFInteractionPromptActor,
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
	return Z_Registration_Info_UClass_AIDFInteractionPromptActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AIDFInteractionPromptActor_NoRegister()
{
	return AIDFInteractionPromptActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIDFInteractionPromptActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/IDFInteractionPromptActor.h" },
		{ "ModuleRelativePath", "Public/UI/IDFInteractionPromptActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptWidget_MetaData[] = {
		{ "Category", "IDFInteractionPromptActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09* @brief The widget containing the prompt icon.\n\x09*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/IDFInteractionPromptActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* @brief The widget containing the prompt icon." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PromptWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIDFInteractionPromptActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIDFInteractionPromptActor_Statics::NewProp_PromptWidget = { "PromptWidget", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFInteractionPromptActor, PromptWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptWidget_MetaData), NewProp_PromptWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIDFInteractionPromptActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFInteractionPromptActor_Statics::NewProp_PromptWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIDFInteractionPromptActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AIDFInteractionPromptActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveDoorFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIDFInteractionPromptActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIDFInteractionPromptActor_Statics::ClassParams = {
	&AIDFInteractionPromptActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AIDFInteractionPromptActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AIDFInteractionPromptActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIDFInteractionPromptActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AIDFInteractionPromptActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIDFInteractionPromptActor()
{
	if (!Z_Registration_Info_UClass_AIDFInteractionPromptActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIDFInteractionPromptActor.OuterSingleton, Z_Construct_UClass_AIDFInteractionPromptActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIDFInteractionPromptActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIDFInteractionPromptActor);
AIDFInteractionPromptActor::~AIDFInteractionPromptActor() {}
// ********** End Class AIDFInteractionPromptActor *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_UI_IDFInteractionPromptActor_h__Script_InteractiveDoorFramework_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIDFInteractionPromptActor, AIDFInteractionPromptActor::StaticClass, TEXT("AIDFInteractionPromptActor"), &Z_Registration_Info_UClass_AIDFInteractionPromptActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIDFInteractionPromptActor), 3762154042U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_UI_IDFInteractionPromptActor_h__Script_InteractiveDoorFramework_2043033496(TEXT("/Script/InteractiveDoorFramework"),
	Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_UI_IDFInteractionPromptActor_h__Script_InteractiveDoorFramework_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_UI_IDFInteractionPromptActor_h__Script_InteractiveDoorFramework_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
