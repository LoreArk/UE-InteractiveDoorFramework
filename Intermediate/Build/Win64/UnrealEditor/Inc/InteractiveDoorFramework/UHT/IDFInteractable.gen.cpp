// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/IDFInteractable.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIDFInteractable() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_UIDFInteractable();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_UIDFInteractable_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveDoorFramework();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UIDFInteractable Function InteractCompleted **************************
void IIDFInteractable::InteractCompleted()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InteractCompleted instead.");
}
static FName NAME_UIDFInteractable_InteractCompleted = FName(TEXT("InteractCompleted"));
void IIDFInteractable::Execute_InteractCompleted(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIDFInteractable::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UIDFInteractable_InteractCompleted);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IIDFInteractable*)(O->GetNativeInterfaceAddress(UIDFInteractable::StaticClass())))
	{
		I->InteractCompleted_Implementation();
	}
}
struct Z_Construct_UFunction_UIDFInteractable_InteractCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Completes the interaction.\n\x09 * @details This function is called when the interaction is finished, typically when the player releases the interact button or completes the action.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/IDFInteractable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Completes the interaction.\n@details This function is called when the interaction is finished, typically when the player releases the interact button or completes the action." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIDFInteractable_InteractCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIDFInteractable, nullptr, "InteractCompleted", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFInteractable_InteractCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIDFInteractable_InteractCompleted_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIDFInteractable_InteractCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIDFInteractable_InteractCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIDFInteractable::execInteractCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InteractCompleted_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UIDFInteractable Function InteractCompleted ****************************

// ********** Begin Interface UIDFInteractable Function InteractHeld *******************************
void IIDFInteractable::InteractHeld()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InteractHeld instead.");
}
static FName NAME_UIDFInteractable_InteractHeld = FName(TEXT("InteractHeld"));
void IIDFInteractable::Execute_InteractHeld(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIDFInteractable::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UIDFInteractable_InteractHeld);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IIDFInteractable*)(O->GetNativeInterfaceAddress(UIDFInteractable::StaticClass())))
	{
		I->InteractHeld_Implementation();
	}
}
struct Z_Construct_UFunction_UIDFInteractable_InteractHeld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Holds the interaction.\n\x09 * @details This function is called while the interaction button is held down, typically to keep moving or interacting with an object.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/IDFInteractable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Holds the interaction.\n@details This function is called while the interaction button is held down, typically to keep moving or interacting with an object." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIDFInteractable_InteractHeld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIDFInteractable, nullptr, "InteractHeld", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFInteractable_InteractHeld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIDFInteractable_InteractHeld_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIDFInteractable_InteractHeld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIDFInteractable_InteractHeld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIDFInteractable::execInteractHeld)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InteractHeld_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UIDFInteractable Function InteractHeld *********************************

// ********** Begin Interface UIDFInteractable Function InteractStarted ****************************
struct IDFInteractable_eventInteractStarted_Parms
{
	AActor* InteractingActor;
	FHitResult TraceHitResult;
};
void IIDFInteractable::InteractStarted(AActor* InteractingActor, FHitResult TraceHitResult)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InteractStarted instead.");
}
static FName NAME_UIDFInteractable_InteractStarted = FName(TEXT("InteractStarted"));
void IIDFInteractable::Execute_InteractStarted(UObject* O, AActor* InteractingActor, FHitResult TraceHitResult)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIDFInteractable::StaticClass()));
	IDFInteractable_eventInteractStarted_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIDFInteractable_InteractStarted);
	if (Func)
	{
		Parms.InteractingActor=InteractingActor;
		Parms.TraceHitResult=TraceHitResult;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIDFInteractable*)(O->GetNativeInterfaceAddress(UIDFInteractable::StaticClass())))
	{
		I->InteractStarted_Implementation(InteractingActor,TraceHitResult);
	}
}
struct Z_Construct_UFunction_UIDFInteractable_InteractStarted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Starts the interaction.\n\x09 * @details This function is called when the interaction begins, typically when the player presses the interact button.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/IDFInteractable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Starts the interaction.\n@details This function is called when the interaction begins, typically when the player presses the interact button." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIDFInteractable_InteractStarted_Statics::NewProp_InteractingActor = { "InteractingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFInteractable_eventInteractStarted_Parms, InteractingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIDFInteractable_InteractStarted_Statics::NewProp_TraceHitResult = { "TraceHitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFInteractable_eventInteractStarted_Parms, TraceHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIDFInteractable_InteractStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIDFInteractable_InteractStarted_Statics::NewProp_InteractingActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIDFInteractable_InteractStarted_Statics::NewProp_TraceHitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFInteractable_InteractStarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIDFInteractable_InteractStarted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIDFInteractable, nullptr, "InteractStarted", Z_Construct_UFunction_UIDFInteractable_InteractStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFInteractable_InteractStarted_Statics::PropPointers), sizeof(IDFInteractable_eventInteractStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFInteractable_InteractStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIDFInteractable_InteractStarted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IDFInteractable_eventInteractStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIDFInteractable_InteractStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIDFInteractable_InteractStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIDFInteractable::execInteractStarted)
{
	P_GET_OBJECT(AActor,Z_Param_InteractingActor);
	P_GET_STRUCT(FHitResult,Z_Param_TraceHitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InteractStarted_Implementation(Z_Param_InteractingActor,Z_Param_TraceHitResult);
	P_NATIVE_END;
}
// ********** End Interface UIDFInteractable Function InteractStarted ******************************

// ********** Begin Interface UIDFInteractable Function SetIsTargeted ******************************
struct IDFInteractable_eventSetIsTargeted_Parms
{
	bool bNewIsTargeted;
	UPrimitiveComponent* TargetedComponent;
};
void IIDFInteractable::SetIsTargeted(bool bNewIsTargeted, UPrimitiveComponent* TargetedComponent)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetIsTargeted instead.");
}
static FName NAME_UIDFInteractable_SetIsTargeted = FName(TEXT("SetIsTargeted"));
void IIDFInteractable::Execute_SetIsTargeted(UObject* O, bool bNewIsTargeted, UPrimitiveComponent* TargetedComponent)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIDFInteractable::StaticClass()));
	IDFInteractable_eventSetIsTargeted_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIDFInteractable_SetIsTargeted);
	if (Func)
	{
		Parms.bNewIsTargeted=bNewIsTargeted;
		Parms.TargetedComponent=TargetedComponent;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIDFInteractable*)(O->GetNativeInterfaceAddress(UIDFInteractable::StaticClass())))
	{
		I->SetIsTargeted_Implementation(bNewIsTargeted,TargetedComponent);
	}
}
struct Z_Construct_UFunction_UIDFInteractable_SetIsTargeted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Handles when an object is targeted.\n\x09 * @details This function is called when the object is targeted by the player, typically to show visual feedback like highlighting the object or displaying an interaction prompt.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/IDFInteractable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Handles when an object is targeted.\n@details This function is called when the object is targeted by the player, typically to show visual feedback like highlighting the object or displaying an interaction prompt." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewIsTargeted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewIsTargeted;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetedComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIDFInteractable_SetIsTargeted_Statics::NewProp_bNewIsTargeted_SetBit(void* Obj)
{
	((IDFInteractable_eventSetIsTargeted_Parms*)Obj)->bNewIsTargeted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIDFInteractable_SetIsTargeted_Statics::NewProp_bNewIsTargeted = { "bNewIsTargeted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IDFInteractable_eventSetIsTargeted_Parms), &Z_Construct_UFunction_UIDFInteractable_SetIsTargeted_Statics::NewProp_bNewIsTargeted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIDFInteractable_SetIsTargeted_Statics::NewProp_TargetedComponent = { "TargetedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFInteractable_eventSetIsTargeted_Parms, TargetedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetedComponent_MetaData), NewProp_TargetedComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIDFInteractable_SetIsTargeted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIDFInteractable_SetIsTargeted_Statics::NewProp_bNewIsTargeted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIDFInteractable_SetIsTargeted_Statics::NewProp_TargetedComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFInteractable_SetIsTargeted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIDFInteractable_SetIsTargeted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIDFInteractable, nullptr, "SetIsTargeted", Z_Construct_UFunction_UIDFInteractable_SetIsTargeted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFInteractable_SetIsTargeted_Statics::PropPointers), sizeof(IDFInteractable_eventSetIsTargeted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFInteractable_SetIsTargeted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIDFInteractable_SetIsTargeted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IDFInteractable_eventSetIsTargeted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIDFInteractable_SetIsTargeted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIDFInteractable_SetIsTargeted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIDFInteractable::execSetIsTargeted)
{
	P_GET_UBOOL(Z_Param_bNewIsTargeted);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_TargetedComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsTargeted_Implementation(Z_Param_bNewIsTargeted,Z_Param_TargetedComponent);
	P_NATIVE_END;
}
// ********** End Interface UIDFInteractable Function SetIsTargeted ********************************

// ********** Begin Interface UIDFInteractable *****************************************************
void UIDFInteractable::StaticRegisterNativesUIDFInteractable()
{
	UClass* Class = UIDFInteractable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InteractCompleted", &IIDFInteractable::execInteractCompleted },
		{ "InteractHeld", &IIDFInteractable::execInteractHeld },
		{ "InteractStarted", &IIDFInteractable::execInteractStarted },
		{ "SetIsTargeted", &IIDFInteractable::execSetIsTargeted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIDFInteractable;
UClass* UIDFInteractable::GetPrivateStaticClass()
{
	using TClass = UIDFInteractable;
	if (!Z_Registration_Info_UClass_UIDFInteractable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IDFInteractable"),
			Z_Registration_Info_UClass_UIDFInteractable.InnerSingleton,
			StaticRegisterNativesUIDFInteractable,
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
	return Z_Registration_Info_UClass_UIDFInteractable.InnerSingleton;
}
UClass* Z_Construct_UClass_UIDFInteractable_NoRegister()
{
	return UIDFInteractable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIDFInteractable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/IDFInteractable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIDFInteractable_InteractCompleted, "InteractCompleted" }, // 2883382105
		{ &Z_Construct_UFunction_UIDFInteractable_InteractHeld, "InteractHeld" }, // 686611051
		{ &Z_Construct_UFunction_UIDFInteractable_InteractStarted, "InteractStarted" }, // 524605079
		{ &Z_Construct_UFunction_UIDFInteractable_SetIsTargeted, "SetIsTargeted" }, // 1648963304
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIDFInteractable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIDFInteractable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveDoorFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIDFInteractable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIDFInteractable_Statics::ClassParams = {
	&UIDFInteractable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIDFInteractable_Statics::Class_MetaDataParams), Z_Construct_UClass_UIDFInteractable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIDFInteractable()
{
	if (!Z_Registration_Info_UClass_UIDFInteractable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIDFInteractable.OuterSingleton, Z_Construct_UClass_UIDFInteractable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIDFInteractable.OuterSingleton;
}
UIDFInteractable::UIDFInteractable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIDFInteractable);
// ********** End Interface UIDFInteractable *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Interfaces_IDFInteractable_h__Script_InteractiveDoorFramework_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIDFInteractable, UIDFInteractable::StaticClass, TEXT("UIDFInteractable"), &Z_Registration_Info_UClass_UIDFInteractable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIDFInteractable), 2300903989U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Interfaces_IDFInteractable_h__Script_InteractiveDoorFramework_3021080406(TEXT("/Script/InteractiveDoorFramework"),
	Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Interfaces_IDFInteractable_h__Script_InteractiveDoorFramework_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Interfaces_IDFInteractable_h__Script_InteractiveDoorFramework_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
