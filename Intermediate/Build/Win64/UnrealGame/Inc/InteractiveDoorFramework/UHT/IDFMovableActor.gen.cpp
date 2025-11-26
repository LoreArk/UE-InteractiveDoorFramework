// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/IDFMovableActor.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIDFMovableActor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFInteractableActor();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFMovableActor();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFMovableActor_NoRegister();
INTERACTIVEDOORFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveDoorFramework_EIDFInteractionState();
INTERACTIVEDOORFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnMakeNoise__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_InteractiveDoorFramework();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EIDFInteractionState ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIDFInteractionState;
static UEnum* EIDFInteractionState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIDFInteractionState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIDFInteractionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractiveDoorFramework_EIDFInteractionState, (UObject*)Z_Construct_UPackage__Script_InteractiveDoorFramework(), TEXT("EIDFInteractionState"));
	}
	return Z_Registration_Info_UEnum_EIDFInteractionState.OuterSingleton;
}
template<> INTERACTIVEDOORFRAMEWORK_API UEnum* StaticEnum<EIDFInteractionState>()
{
	return EIDFInteractionState_StaticEnum();
}
struct Z_Construct_UEnum_InteractiveDoorFramework_EIDFInteractionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Held.DisplayName", "Held" },
		{ "Held.Name", "EIDFInteractionState::Held" },
		{ "ModuleRelativePath", "Public/Actors/IDFMovableActor.h" },
		{ "NotHeld.DisplayName", "Not Held" },
		{ "NotHeld.Name", "EIDFInteractionState::NotHeld" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIDFInteractionState::NotHeld", (int64)EIDFInteractionState::NotHeld },
		{ "EIDFInteractionState::Held", (int64)EIDFInteractionState::Held },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractiveDoorFramework_EIDFInteractionState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InteractiveDoorFramework,
	nullptr,
	"EIDFInteractionState",
	"EIDFInteractionState",
	Z_Construct_UEnum_InteractiveDoorFramework_EIDFInteractionState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveDoorFramework_EIDFInteractionState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveDoorFramework_EIDFInteractionState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InteractiveDoorFramework_EIDFInteractionState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InteractiveDoorFramework_EIDFInteractionState()
{
	if (!Z_Registration_Info_UEnum_EIDFInteractionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIDFInteractionState.InnerSingleton, Z_Construct_UEnum_InteractiveDoorFramework_EIDFInteractionState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIDFInteractionState.InnerSingleton;
}
// ********** End Enum EIDFInteractionState ********************************************************

// ********** Begin Delegate FOnMakeNoise **********************************************************
struct Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnMakeNoise__DelegateSignature_Statics
{
	struct _Script_InteractiveDoorFramework_eventOnMakeNoise_Parms
	{
		FHitResult HitResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/IDFMovableActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnMakeNoise__DelegateSignature_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InteractiveDoorFramework_eventOnMakeNoise_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnMakeNoise__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnMakeNoise__DelegateSignature_Statics::NewProp_HitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnMakeNoise__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnMakeNoise__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InteractiveDoorFramework, nullptr, "OnMakeNoise__DelegateSignature", Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnMakeNoise__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnMakeNoise__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnMakeNoise__DelegateSignature_Statics::_Script_InteractiveDoorFramework_eventOnMakeNoise_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnMakeNoise__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnMakeNoise__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnMakeNoise__DelegateSignature_Statics::_Script_InteractiveDoorFramework_eventOnMakeNoise_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnMakeNoise__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnMakeNoise__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMakeNoise_DelegateWrapper(const FMulticastScriptDelegate& OnMakeNoise, FHitResult HitResult)
{
	struct _Script_InteractiveDoorFramework_eventOnMakeNoise_Parms
	{
		FHitResult HitResult;
	};
	_Script_InteractiveDoorFramework_eventOnMakeNoise_Parms Parms;
	Parms.HitResult=HitResult;
	OnMakeNoise.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnMakeNoise ************************************************************

// ********** Begin Class AIDFMovableActor Function EventNoise *************************************
struct IDFMovableActor_eventEventNoise_Parms
{
	FHitResult Hit;
};
static FName NAME_AIDFMovableActor_EventNoise = FName(TEXT("EventNoise"));
void AIDFMovableActor::EventNoise(FHitResult Hit)
{
	UFunction* Func = FindFunctionChecked(NAME_AIDFMovableActor_EventNoise);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		IDFMovableActor_eventEventNoise_Parms Parms;
		Parms.Hit=Hit;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		EventNoise_Implementation(Hit);
	}
}
struct Z_Construct_UFunction_AIDFMovableActor_EventNoise_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Handles noise events.\n\x09 * @details Triggered when a collision produces a noise. Designed to be used in blueprints to trigger SFXs and VFXs;\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFMovableActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Handles noise events.\n@details Triggered when a collision produces a noise. Designed to be used in blueprints to trigger SFXs and VFXs;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AIDFMovableActor_EventNoise_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFMovableActor_eventEventNoise_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIDFMovableActor_EventNoise_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFMovableActor_EventNoise_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFMovableActor_EventNoise_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIDFMovableActor_EventNoise_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIDFMovableActor, nullptr, "EventNoise", Z_Construct_UFunction_AIDFMovableActor_EventNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFMovableActor_EventNoise_Statics::PropPointers), sizeof(IDFMovableActor_eventEventNoise_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFMovableActor_EventNoise_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIDFMovableActor_EventNoise_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IDFMovableActor_eventEventNoise_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIDFMovableActor_EventNoise()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIDFMovableActor_EventNoise_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIDFMovableActor::execEventNoise)
{
	P_GET_STRUCT(FHitResult,Z_Param_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EventNoise_Implementation(Z_Param_Hit);
	P_NATIVE_END;
}
// ********** End Class AIDFMovableActor Function EventNoise ***************************************

// ********** Begin Class AIDFMovableActor Function EventSound *************************************
struct IDFMovableActor_eventEventSound_Parms
{
	FVector Location;
};
static FName NAME_AIDFMovableActor_EventSound = FName(TEXT("EventSound"));
void AIDFMovableActor::EventSound(FVector Location)
{
	UFunction* Func = FindFunctionChecked(NAME_AIDFMovableActor_EventSound);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		IDFMovableActor_eventEventSound_Parms Parms;
		Parms.Location=Location;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		EventSound_Implementation(Location);
	}
}
struct Z_Construct_UFunction_AIDFMovableActor_EventSound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Handles sound events.\n\x09 * @details Triggered when a collision produces a sound but not a noise. Designed to be used in blueprints to trigger SFXs and VFXs;\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFMovableActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Handles sound events.\n@details Triggered when a collision produces a sound but not a noise. Designed to be used in blueprints to trigger SFXs and VFXs;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AIDFMovableActor_EventSound_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFMovableActor_eventEventSound_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIDFMovableActor_EventSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFMovableActor_EventSound_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFMovableActor_EventSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIDFMovableActor_EventSound_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIDFMovableActor, nullptr, "EventSound", Z_Construct_UFunction_AIDFMovableActor_EventSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFMovableActor_EventSound_Statics::PropPointers), sizeof(IDFMovableActor_eventEventSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFMovableActor_EventSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIDFMovableActor_EventSound_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IDFMovableActor_eventEventSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIDFMovableActor_EventSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIDFMovableActor_EventSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIDFMovableActor::execEventSound)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EventSound_Implementation(Z_Param_Location);
	P_NATIVE_END;
}
// ********** End Class AIDFMovableActor Function EventSound ***************************************

// ********** Begin Class AIDFMovableActor Function SetInteractionState ****************************
struct Z_Construct_UFunction_AIDFMovableActor_SetInteractionState_Statics
{
	struct IDFMovableActor_eventSetInteractionState_Parms
	{
		EIDFInteractionState NewInteractionState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/IDFMovableActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewInteractionState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewInteractionState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AIDFMovableActor_SetInteractionState_Statics::NewProp_NewInteractionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AIDFMovableActor_SetInteractionState_Statics::NewProp_NewInteractionState = { "NewInteractionState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFMovableActor_eventSetInteractionState_Parms, NewInteractionState), Z_Construct_UEnum_InteractiveDoorFramework_EIDFInteractionState, METADATA_PARAMS(0, nullptr) }; // 44587602
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIDFMovableActor_SetInteractionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFMovableActor_SetInteractionState_Statics::NewProp_NewInteractionState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFMovableActor_SetInteractionState_Statics::NewProp_NewInteractionState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFMovableActor_SetInteractionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIDFMovableActor_SetInteractionState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIDFMovableActor, nullptr, "SetInteractionState", Z_Construct_UFunction_AIDFMovableActor_SetInteractionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFMovableActor_SetInteractionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIDFMovableActor_SetInteractionState_Statics::IDFMovableActor_eventSetInteractionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFMovableActor_SetInteractionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIDFMovableActor_SetInteractionState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIDFMovableActor_SetInteractionState_Statics::IDFMovableActor_eventSetInteractionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIDFMovableActor_SetInteractionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIDFMovableActor_SetInteractionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIDFMovableActor::execSetInteractionState)
{
	P_GET_ENUM(EIDFInteractionState,Z_Param_NewInteractionState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInteractionState(EIDFInteractionState(Z_Param_NewInteractionState));
	P_NATIVE_END;
}
// ********** End Class AIDFMovableActor Function SetInteractionState ******************************

// ********** Begin Class AIDFMovableActor *********************************************************
void AIDFMovableActor::StaticRegisterNativesAIDFMovableActor()
{
	UClass* Class = AIDFMovableActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EventNoise", &AIDFMovableActor::execEventNoise },
		{ "EventSound", &AIDFMovableActor::execEventSound },
		{ "SetInteractionState", &AIDFMovableActor::execSetInteractionState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AIDFMovableActor;
UClass* AIDFMovableActor::GetPrivateStaticClass()
{
	using TClass = AIDFMovableActor;
	if (!Z_Registration_Info_UClass_AIDFMovableActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IDFMovableActor"),
			Z_Registration_Info_UClass_AIDFMovableActor.InnerSingleton,
			StaticRegisterNativesAIDFMovableActor,
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
	return Z_Registration_Info_UClass_AIDFMovableActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AIDFMovableActor_NoRegister()
{
	return AIDFMovableActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIDFMovableActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/IDFMovableActor.h" },
		{ "ModuleRelativePath", "Public/Actors/IDFMovableActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMakeNoise_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/IDFMovableActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftCollisionSFX_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Reference to sound cue played for hit collisions that don't trigger a noise*/" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFMovableActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Reference to sound cue played for hit collisions that don't trigger a noise" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseSFX_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Reference to sound cue played on noise event*/" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFMovableActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Reference to sound cue played on noise event" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MakeNoiseImpulseLengthThreshold_MetaData[] = {
		{ "Category", "NoiseSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Minimum hit impulse to trigger noise events when a collision is detected*/" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFMovableActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Minimum hit impulse to trigger noise events when a collision is detected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInteractionState_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Represent the current state of the movable object, if it is Held or Unheld*/" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFMovableActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Represent the current state of the movable object, if it is Held or Unheld" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawSphereOnMakeNoise_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Currently used in blueprint, enable this to draw a debug sphere at the location of the noise when a noise event is fired*/" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFMovableActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Currently used in blueprint, enable this to draw a debug sphere at the location of the noise when a noise event is fired" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionTargetComponent_MetaData[] = {
		{ "Category", "IDFMovableActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Reference to the component the player interacted with */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFMovableActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Reference to the component the player interacted with" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMakeNoise;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftCollisionSFX;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_NoiseSFX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MakeNoiseImpulseLengthThreshold;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentInteractionState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentInteractionState;
	static void NewProp_bDrawSphereOnMakeNoise_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawSphereOnMakeNoise;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_InteractionTargetComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AIDFMovableActor_EventNoise, "EventNoise" }, // 3471452751
		{ &Z_Construct_UFunction_AIDFMovableActor_EventSound, "EventSound" }, // 4190986308
		{ &Z_Construct_UFunction_AIDFMovableActor_SetInteractionState, "SetInteractionState" }, // 808333655
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIDFMovableActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AIDFMovableActor_Statics::NewProp_OnMakeNoise = { "OnMakeNoise", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFMovableActor, OnMakeNoise), Z_Construct_UDelegateFunction_InteractiveDoorFramework_OnMakeNoise__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMakeNoise_MetaData), NewProp_OnMakeNoise_MetaData) }; // 2835557172
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AIDFMovableActor_Statics::NewProp_SoftCollisionSFX = { "SoftCollisionSFX", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFMovableActor, SoftCollisionSFX), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftCollisionSFX_MetaData), NewProp_SoftCollisionSFX_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AIDFMovableActor_Statics::NewProp_NoiseSFX = { "NoiseSFX", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFMovableActor, NoiseSFX), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseSFX_MetaData), NewProp_NoiseSFX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIDFMovableActor_Statics::NewProp_MakeNoiseImpulseLengthThreshold = { "MakeNoiseImpulseLengthThreshold", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFMovableActor, MakeNoiseImpulseLengthThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MakeNoiseImpulseLengthThreshold_MetaData), NewProp_MakeNoiseImpulseLengthThreshold_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AIDFMovableActor_Statics::NewProp_CurrentInteractionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AIDFMovableActor_Statics::NewProp_CurrentInteractionState = { "CurrentInteractionState", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFMovableActor, CurrentInteractionState), Z_Construct_UEnum_InteractiveDoorFramework_EIDFInteractionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentInteractionState_MetaData), NewProp_CurrentInteractionState_MetaData) }; // 44587602
void Z_Construct_UClass_AIDFMovableActor_Statics::NewProp_bDrawSphereOnMakeNoise_SetBit(void* Obj)
{
	((AIDFMovableActor*)Obj)->bDrawSphereOnMakeNoise = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIDFMovableActor_Statics::NewProp_bDrawSphereOnMakeNoise = { "bDrawSphereOnMakeNoise", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIDFMovableActor), &Z_Construct_UClass_AIDFMovableActor_Statics::NewProp_bDrawSphereOnMakeNoise_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawSphereOnMakeNoise_MetaData), NewProp_bDrawSphereOnMakeNoise_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AIDFMovableActor_Statics::NewProp_InteractionTargetComponent = { "InteractionTargetComponent", nullptr, (EPropertyFlags)0x00140000000a000d, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFMovableActor, InteractionTargetComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionTargetComponent_MetaData), NewProp_InteractionTargetComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIDFMovableActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFMovableActor_Statics::NewProp_OnMakeNoise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFMovableActor_Statics::NewProp_SoftCollisionSFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFMovableActor_Statics::NewProp_NoiseSFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFMovableActor_Statics::NewProp_MakeNoiseImpulseLengthThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFMovableActor_Statics::NewProp_CurrentInteractionState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFMovableActor_Statics::NewProp_CurrentInteractionState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFMovableActor_Statics::NewProp_bDrawSphereOnMakeNoise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFMovableActor_Statics::NewProp_InteractionTargetComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIDFMovableActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AIDFMovableActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AIDFInteractableActor,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveDoorFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIDFMovableActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIDFMovableActor_Statics::ClassParams = {
	&AIDFMovableActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AIDFMovableActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AIDFMovableActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIDFMovableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AIDFMovableActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIDFMovableActor()
{
	if (!Z_Registration_Info_UClass_AIDFMovableActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIDFMovableActor.OuterSingleton, Z_Construct_UClass_AIDFMovableActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIDFMovableActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIDFMovableActor);
AIDFMovableActor::~AIDFMovableActor() {}
// ********** End Class AIDFMovableActor ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFMovableActor_h__Script_InteractiveDoorFramework_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EIDFInteractionState_StaticEnum, TEXT("EIDFInteractionState"), &Z_Registration_Info_UEnum_EIDFInteractionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 44587602U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIDFMovableActor, AIDFMovableActor::StaticClass, TEXT("AIDFMovableActor"), &Z_Registration_Info_UClass_AIDFMovableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIDFMovableActor), 3233158309U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFMovableActor_h__Script_InteractiveDoorFramework_496651504(TEXT("/Script/InteractiveDoorFramework"),
	Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFMovableActor_h__Script_InteractiveDoorFramework_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFMovableActor_h__Script_InteractiveDoorFramework_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFMovableActor_h__Script_InteractiveDoorFramework_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFMovableActor_h__Script_InteractiveDoorFramework_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
