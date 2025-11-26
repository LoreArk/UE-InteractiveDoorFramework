// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/Collectables/IDFDocumentActor.h"
#include "Structs/IDFCollectibleStructs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIDFDocumentActor() {}

// ********** Begin Cross Module References ********************************************************
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFCollectibleActor();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFDocumentActor();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFDocumentActor_NoRegister();
INTERACTIVEDOORFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FDocumentItem();
UPackage* Z_Construct_UPackage__Script_InteractiveDoorFramework();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIDFDocumentActor ********************************************************
void AIDFDocumentActor::StaticRegisterNativesAIDFDocumentActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AIDFDocumentActor;
UClass* AIDFDocumentActor::GetPrivateStaticClass()
{
	using TClass = AIDFDocumentActor;
	if (!Z_Registration_Info_UClass_AIDFDocumentActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IDFDocumentActor"),
			Z_Registration_Info_UClass_AIDFDocumentActor.InnerSingleton,
			StaticRegisterNativesAIDFDocumentActor,
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
	return Z_Registration_Info_UClass_AIDFDocumentActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AIDFDocumentActor_NoRegister()
{
	return AIDFDocumentActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIDFDocumentActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Actors/Collectables/IDFDocumentActor.h" },
		{ "ModuleRelativePath", "Public/Actors/Collectables/IDFDocumentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DocumentSettings_MetaData[] = {
		{ "Category", "Document Item Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The datas of this document, to display thorugh UI*/" },
#endif
		{ "ModuleRelativePath", "Public/Actors/Collectables/IDFDocumentActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The datas of this document, to display thorugh UI" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DocumentSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIDFDocumentActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AIDFDocumentActor_Statics::NewProp_DocumentSettings = { "DocumentSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDocumentActor, DocumentSettings), Z_Construct_UScriptStruct_FDocumentItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DocumentSettings_MetaData), NewProp_DocumentSettings_MetaData) }; // 1402808572
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIDFDocumentActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDocumentActor_Statics::NewProp_DocumentSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIDFDocumentActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AIDFDocumentActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AIDFCollectibleActor,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveDoorFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIDFDocumentActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIDFDocumentActor_Statics::ClassParams = {
	&AIDFDocumentActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AIDFDocumentActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AIDFDocumentActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIDFDocumentActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AIDFDocumentActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIDFDocumentActor()
{
	if (!Z_Registration_Info_UClass_AIDFDocumentActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIDFDocumentActor.OuterSingleton, Z_Construct_UClass_AIDFDocumentActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIDFDocumentActor.OuterSingleton;
}
AIDFDocumentActor::AIDFDocumentActor() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIDFDocumentActor);
AIDFDocumentActor::~AIDFDocumentActor() {}
// ********** End Class AIDFDocumentActor **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_Collectables_IDFDocumentActor_h__Script_InteractiveDoorFramework_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIDFDocumentActor, AIDFDocumentActor::StaticClass, TEXT("AIDFDocumentActor"), &Z_Registration_Info_UClass_AIDFDocumentActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIDFDocumentActor), 2198914052U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_Collectables_IDFDocumentActor_h__Script_InteractiveDoorFramework_867884561(TEXT("/Script/InteractiveDoorFramework"),
	Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_Collectables_IDFDocumentActor_h__Script_InteractiveDoorFramework_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_Collectables_IDFDocumentActor_h__Script_InteractiveDoorFramework_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
