// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/IDFDoubleDoorActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIDFDoubleDoorActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFDoorActor();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFDoubleDoorActor();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFDoubleDoorActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveDoorFramework();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIDFDoubleDoorActor Function IsPlayerInFrontOfDoorB **********************
struct Z_Construct_UFunction_AIDFDoubleDoorActor_IsPlayerInFrontOfDoorB_Statics
{
	struct IDFDoubleDoorActor_eventIsPlayerInFrontOfDoorB_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Door Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Getter to know if the player is in front or on the back of the door MESH.\n\x09 * @details The player is considered in front of the door when he points in the same direction of the forward (x axis) of the door MESH.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoubleDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Getter to know if the player is in front or on the back of the door MESH.\n@details The player is considered in front of the door when he points in the same direction of the forward (x axis) of the door MESH." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AIDFDoubleDoorActor_IsPlayerInFrontOfDoorB_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IDFDoubleDoorActor_eventIsPlayerInFrontOfDoorB_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AIDFDoubleDoorActor_IsPlayerInFrontOfDoorB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IDFDoubleDoorActor_eventIsPlayerInFrontOfDoorB_Parms), &Z_Construct_UFunction_AIDFDoubleDoorActor_IsPlayerInFrontOfDoorB_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIDFDoubleDoorActor_IsPlayerInFrontOfDoorB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFDoubleDoorActor_IsPlayerInFrontOfDoorB_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoubleDoorActor_IsPlayerInFrontOfDoorB_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIDFDoubleDoorActor_IsPlayerInFrontOfDoorB_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIDFDoubleDoorActor, nullptr, "IsPlayerInFrontOfDoorB", Z_Construct_UFunction_AIDFDoubleDoorActor_IsPlayerInFrontOfDoorB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoubleDoorActor_IsPlayerInFrontOfDoorB_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIDFDoubleDoorActor_IsPlayerInFrontOfDoorB_Statics::IDFDoubleDoorActor_eventIsPlayerInFrontOfDoorB_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoubleDoorActor_IsPlayerInFrontOfDoorB_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIDFDoubleDoorActor_IsPlayerInFrontOfDoorB_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIDFDoubleDoorActor_IsPlayerInFrontOfDoorB_Statics::IDFDoubleDoorActor_eventIsPlayerInFrontOfDoorB_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIDFDoubleDoorActor_IsPlayerInFrontOfDoorB()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIDFDoubleDoorActor_IsPlayerInFrontOfDoorB_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIDFDoubleDoorActor::execIsPlayerInFrontOfDoorB)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlayerInFrontOfDoorB();
	P_NATIVE_END;
}
// ********** End Class AIDFDoubleDoorActor Function IsPlayerInFrontOfDoorB ************************

// ********** Begin Class AIDFDoubleDoorActor ******************************************************
void AIDFDoubleDoorActor::StaticRegisterNativesAIDFDoubleDoorActor()
{
	UClass* Class = AIDFDoubleDoorActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsPlayerInFrontOfDoorB", &AIDFDoubleDoorActor::execIsPlayerInFrontOfDoorB },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AIDFDoubleDoorActor;
UClass* AIDFDoubleDoorActor::GetPrivateStaticClass()
{
	using TClass = AIDFDoubleDoorActor;
	if (!Z_Registration_Info_UClass_AIDFDoubleDoorActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IDFDoubleDoorActor"),
			Z_Registration_Info_UClass_AIDFDoubleDoorActor.InnerSingleton,
			StaticRegisterNativesAIDFDoubleDoorActor,
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
	return Z_Registration_Info_UClass_AIDFDoubleDoorActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AIDFDoubleDoorActor_NoRegister()
{
	return AIDFDoubleDoorActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIDFDoubleDoorActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Actors/IDFDoubleDoorActor.h" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoubleDoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondDoorSkeletalMesh_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< the skeletal mesh for the second door */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoubleDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< the skeletal mesh for the second door" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleTransformRefB_MetaData[] = {
		{ "Category", "Handles" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoubleDoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondDoorBlockerF_MetaData[] = {
		{ "Category", "Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< additional door blocker for the second door */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoubleDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< additional door blocker for the second door" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondDoorBlockerB_MetaData[] = {
		{ "Category", "Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< additional door blocker for the second door */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoubleDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< additional door blocker for the second door" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWasPlayerInFrontAtGrabB_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/IDFDoubleDoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatedComponentsB_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoubleDoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatedHandleAComponentB_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoubleDoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatedHandleBComponentB_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoubleDoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatedDoorComponentB_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoubleDoorActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondDoorSkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandleTransformRefB;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondDoorBlockerF;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondDoorBlockerB;
	static void NewProp_bWasPlayerInFrontAtGrabB_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasPlayerInFrontAtGrabB;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedComponentsB_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CreatedComponentsB;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedHandleAComponentB;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedHandleBComponentB;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedDoorComponentB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AIDFDoubleDoorActor_IsPlayerInFrontOfDoorB, "IsPlayerInFrontOfDoorB" }, // 969172619
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIDFDoubleDoorActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIDFDoubleDoorActor_Statics::NewProp_SecondDoorSkeletalMesh = { "SecondDoorSkeletalMesh", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoubleDoorActor, SecondDoorSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondDoorSkeletalMesh_MetaData), NewProp_SecondDoorSkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIDFDoubleDoorActor_Statics::NewProp_HandleTransformRefB = { "HandleTransformRefB", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoubleDoorActor, HandleTransformRefB), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleTransformRefB_MetaData), NewProp_HandleTransformRefB_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIDFDoubleDoorActor_Statics::NewProp_SecondDoorBlockerF = { "SecondDoorBlockerF", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoubleDoorActor, SecondDoorBlockerF), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondDoorBlockerF_MetaData), NewProp_SecondDoorBlockerF_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIDFDoubleDoorActor_Statics::NewProp_SecondDoorBlockerB = { "SecondDoorBlockerB", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoubleDoorActor, SecondDoorBlockerB), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondDoorBlockerB_MetaData), NewProp_SecondDoorBlockerB_MetaData) };
void Z_Construct_UClass_AIDFDoubleDoorActor_Statics::NewProp_bWasPlayerInFrontAtGrabB_SetBit(void* Obj)
{
	((AIDFDoubleDoorActor*)Obj)->bWasPlayerInFrontAtGrabB = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIDFDoubleDoorActor_Statics::NewProp_bWasPlayerInFrontAtGrabB = { "bWasPlayerInFrontAtGrabB", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIDFDoubleDoorActor), &Z_Construct_UClass_AIDFDoubleDoorActor_Statics::NewProp_bWasPlayerInFrontAtGrabB_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWasPlayerInFrontAtGrabB_MetaData), NewProp_bWasPlayerInFrontAtGrabB_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIDFDoubleDoorActor_Statics::NewProp_CreatedComponentsB_Inner = { "CreatedComponentsB", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AIDFDoubleDoorActor_Statics::NewProp_CreatedComponentsB = { "CreatedComponentsB", nullptr, (EPropertyFlags)0x0040008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoubleDoorActor, CreatedComponentsB), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatedComponentsB_MetaData), NewProp_CreatedComponentsB_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIDFDoubleDoorActor_Statics::NewProp_CreatedHandleAComponentB = { "CreatedHandleAComponentB", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoubleDoorActor, CreatedHandleAComponentB), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatedHandleAComponentB_MetaData), NewProp_CreatedHandleAComponentB_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIDFDoubleDoorActor_Statics::NewProp_CreatedHandleBComponentB = { "CreatedHandleBComponentB", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoubleDoorActor, CreatedHandleBComponentB), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatedHandleBComponentB_MetaData), NewProp_CreatedHandleBComponentB_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIDFDoubleDoorActor_Statics::NewProp_CreatedDoorComponentB = { "CreatedDoorComponentB", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoubleDoorActor, CreatedDoorComponentB), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatedDoorComponentB_MetaData), NewProp_CreatedDoorComponentB_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIDFDoubleDoorActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoubleDoorActor_Statics::NewProp_SecondDoorSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoubleDoorActor_Statics::NewProp_HandleTransformRefB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoubleDoorActor_Statics::NewProp_SecondDoorBlockerF,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoubleDoorActor_Statics::NewProp_SecondDoorBlockerB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoubleDoorActor_Statics::NewProp_bWasPlayerInFrontAtGrabB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoubleDoorActor_Statics::NewProp_CreatedComponentsB_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoubleDoorActor_Statics::NewProp_CreatedComponentsB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoubleDoorActor_Statics::NewProp_CreatedHandleAComponentB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoubleDoorActor_Statics::NewProp_CreatedHandleBComponentB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoubleDoorActor_Statics::NewProp_CreatedDoorComponentB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIDFDoubleDoorActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AIDFDoubleDoorActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AIDFDoorActor,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveDoorFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIDFDoubleDoorActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIDFDoubleDoorActor_Statics::ClassParams = {
	&AIDFDoubleDoorActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AIDFDoubleDoorActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AIDFDoubleDoorActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIDFDoubleDoorActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AIDFDoubleDoorActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIDFDoubleDoorActor()
{
	if (!Z_Registration_Info_UClass_AIDFDoubleDoorActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIDFDoubleDoorActor.OuterSingleton, Z_Construct_UClass_AIDFDoubleDoorActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIDFDoubleDoorActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIDFDoubleDoorActor);
AIDFDoubleDoorActor::~AIDFDoubleDoorActor() {}
// ********** End Class AIDFDoubleDoorActor ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFDoubleDoorActor_h__Script_InteractiveDoorFramework_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIDFDoubleDoorActor, AIDFDoubleDoorActor::StaticClass, TEXT("AIDFDoubleDoorActor"), &Z_Registration_Info_UClass_AIDFDoubleDoorActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIDFDoubleDoorActor), 273224044U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFDoubleDoorActor_h__Script_InteractiveDoorFramework_3666952315(TEXT("/Script/InteractiveDoorFramework"),
	Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFDoubleDoorActor_h__Script_InteractiveDoorFramework_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFDoubleDoorActor_h__Script_InteractiveDoorFramework_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
