// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/IDFPlayerInteractionComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIDFPlayerInteractionComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_UIDFPlayerInteractionComponent();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_UIDFPlayerInteractionComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveDoorFramework();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIDFPlayerInteractionComponent Function EndInteraction *******************
struct Z_Construct_UFunction_UIDFPlayerInteractionComponent_EndInteraction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Ends the interaction with the actor that was previously interacted with.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/IDFPlayerInteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Ends the interaction with the actor that was previously interacted with." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIDFPlayerInteractionComponent_EndInteraction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIDFPlayerInteractionComponent, nullptr, "EndInteraction", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFPlayerInteractionComponent_EndInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIDFPlayerInteractionComponent_EndInteraction_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIDFPlayerInteractionComponent_EndInteraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIDFPlayerInteractionComponent_EndInteraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIDFPlayerInteractionComponent::execEndInteraction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndInteraction();
	P_NATIVE_END;
}
// ********** End Class UIDFPlayerInteractionComponent Function EndInteraction *********************

// ********** Begin Class UIDFPlayerInteractionComponent Function InteractionTriggered *************
struct Z_Construct_UFunction_UIDFPlayerInteractionComponent_InteractionTriggered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* @brief Calls InteractionHeld on the actor the interaction started with\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Components/IDFPlayerInteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Calls InteractionHeld on the actor the interaction started with" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIDFPlayerInteractionComponent_InteractionTriggered_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIDFPlayerInteractionComponent, nullptr, "InteractionTriggered", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFPlayerInteractionComponent_InteractionTriggered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIDFPlayerInteractionComponent_InteractionTriggered_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIDFPlayerInteractionComponent_InteractionTriggered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIDFPlayerInteractionComponent_InteractionTriggered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIDFPlayerInteractionComponent::execInteractionTriggered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InteractionTriggered();
	P_NATIVE_END;
}
// ********** End Class UIDFPlayerInteractionComponent Function InteractionTriggered ***************

// ********** Begin Class UIDFPlayerInteractionComponent Function StartInteraction *****************
struct Z_Construct_UFunction_UIDFPlayerInteractionComponent_StartInteraction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* @brief Starts the interaction with the actor currently targeted\n\x09* @details checks if the player has a valid interaction target and calls InteractStarted through the Interactable interface\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Components/IDFPlayerInteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Starts the interaction with the actor currently targeted\n      * @details checks if the player has a valid interaction target and calls InteractStarted through the Interactable interface" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIDFPlayerInteractionComponent_StartInteraction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIDFPlayerInteractionComponent, nullptr, "StartInteraction", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFPlayerInteractionComponent_StartInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIDFPlayerInteractionComponent_StartInteraction_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIDFPlayerInteractionComponent_StartInteraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIDFPlayerInteractionComponent_StartInteraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIDFPlayerInteractionComponent::execStartInteraction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartInteraction();
	P_NATIVE_END;
}
// ********** End Class UIDFPlayerInteractionComponent Function StartInteraction *******************

// ********** Begin Class UIDFPlayerInteractionComponent *******************************************
void UIDFPlayerInteractionComponent::StaticRegisterNativesUIDFPlayerInteractionComponent()
{
	UClass* Class = UIDFPlayerInteractionComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndInteraction", &UIDFPlayerInteractionComponent::execEndInteraction },
		{ "InteractionTriggered", &UIDFPlayerInteractionComponent::execInteractionTriggered },
		{ "StartInteraction", &UIDFPlayerInteractionComponent::execStartInteraction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIDFPlayerInteractionComponent;
UClass* UIDFPlayerInteractionComponent::GetPrivateStaticClass()
{
	using TClass = UIDFPlayerInteractionComponent;
	if (!Z_Registration_Info_UClass_UIDFPlayerInteractionComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IDFPlayerInteractionComponent"),
			Z_Registration_Info_UClass_UIDFPlayerInteractionComponent.InnerSingleton,
			StaticRegisterNativesUIDFPlayerInteractionComponent,
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
	return Z_Registration_Info_UClass_UIDFPlayerInteractionComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIDFPlayerInteractionComponent_NoRegister()
{
	return UIDFPlayerInteractionComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIDFPlayerInteractionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/IDFPlayerInteractionComponent.h" },
		{ "ModuleRelativePath", "Public/Components/IDFPlayerInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugTrace_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Show the sweep trace debug.*/" },
#endif
		{ "ModuleRelativePath", "Public/Components/IDFPlayerInteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Show the sweep trace debug." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceLength_MetaData[] = {
		{ "Category", "Trace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< The distance covered by the interaction tracce.*/" },
#endif
		{ "ModuleRelativePath", "Public/Components/IDFPlayerInteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< The distance covered by the interaction tracce." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceRadius_MetaData[] = {
		{ "Category", "Trace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< The radius of the sphere used by the sweep trace.*/" },
#endif
		{ "ModuleRelativePath", "Public/Components/IDFPlayerInteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< The radius of the sphere used by the sweep trace." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bDebugTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugTrace;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIDFPlayerInteractionComponent_EndInteraction, "EndInteraction" }, // 2611494211
		{ &Z_Construct_UFunction_UIDFPlayerInteractionComponent_InteractionTriggered, "InteractionTriggered" }, // 3114350553
		{ &Z_Construct_UFunction_UIDFPlayerInteractionComponent_StartInteraction, "StartInteraction" }, // 1455588823
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIDFPlayerInteractionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UIDFPlayerInteractionComponent_Statics::NewProp_bDebugTrace_SetBit(void* Obj)
{
	((UIDFPlayerInteractionComponent*)Obj)->bDebugTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIDFPlayerInteractionComponent_Statics::NewProp_bDebugTrace = { "bDebugTrace", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIDFPlayerInteractionComponent), &Z_Construct_UClass_UIDFPlayerInteractionComponent_Statics::NewProp_bDebugTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugTrace_MetaData), NewProp_bDebugTrace_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIDFPlayerInteractionComponent_Statics::NewProp_TraceLength = { "TraceLength", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIDFPlayerInteractionComponent, TraceLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceLength_MetaData), NewProp_TraceLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIDFPlayerInteractionComponent_Statics::NewProp_TraceRadius = { "TraceRadius", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIDFPlayerInteractionComponent, TraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceRadius_MetaData), NewProp_TraceRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIDFPlayerInteractionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIDFPlayerInteractionComponent_Statics::NewProp_bDebugTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIDFPlayerInteractionComponent_Statics::NewProp_TraceLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIDFPlayerInteractionComponent_Statics::NewProp_TraceRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIDFPlayerInteractionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIDFPlayerInteractionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveDoorFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIDFPlayerInteractionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIDFPlayerInteractionComponent_Statics::ClassParams = {
	&UIDFPlayerInteractionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIDFPlayerInteractionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIDFPlayerInteractionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIDFPlayerInteractionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIDFPlayerInteractionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIDFPlayerInteractionComponent()
{
	if (!Z_Registration_Info_UClass_UIDFPlayerInteractionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIDFPlayerInteractionComponent.OuterSingleton, Z_Construct_UClass_UIDFPlayerInteractionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIDFPlayerInteractionComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIDFPlayerInteractionComponent);
UIDFPlayerInteractionComponent::~UIDFPlayerInteractionComponent() {}
// ********** End Class UIDFPlayerInteractionComponent *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Components_IDFPlayerInteractionComponent_h__Script_InteractiveDoorFramework_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIDFPlayerInteractionComponent, UIDFPlayerInteractionComponent::StaticClass, TEXT("UIDFPlayerInteractionComponent"), &Z_Registration_Info_UClass_UIDFPlayerInteractionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIDFPlayerInteractionComponent), 2654470869U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Components_IDFPlayerInteractionComponent_h__Script_InteractiveDoorFramework_217066260(TEXT("/Script/InteractiveDoorFramework"),
	Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Components_IDFPlayerInteractionComponent_h__Script_InteractiveDoorFramework_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Components_IDFPlayerInteractionComponent_h__Script_InteractiveDoorFramework_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
