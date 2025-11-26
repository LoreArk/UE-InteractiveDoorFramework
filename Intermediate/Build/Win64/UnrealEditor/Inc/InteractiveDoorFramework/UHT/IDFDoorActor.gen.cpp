// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/IDFDoorActor.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Engine/HitResult.h"
#include "Engine/TimerHandle.h"
#include "Structs/IDFCollectibleStructs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIDFDoorActor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointNotifyPayload();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFDoorActor();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFDoorActor_NoRegister();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFMovableActor();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_UIDFLockComponent_NoRegister();
INTERACTIVEDOORFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FKeyItem();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavModifierComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveDoorFramework();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIDFDoorActor Function ApplyMaterials ************************************
struct Z_Construct_UFunction_AIDFDoorActor_ApplyMaterials_Statics
{
	struct IDFDoorActor_eventApplyMaterials_Parms
	{
		UStaticMeshComponent* MeshComp;
		TArray<UMaterialInterface*> Materials;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*@brief Used OnConstruction, to apply the user chosen material*/" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Used OnConstruction, to apply the user chosen material" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AIDFDoorActor_ApplyMaterials_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFDoorActor_eventApplyMaterials_Parms, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AIDFDoorActor_ApplyMaterials_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AIDFDoorActor_ApplyMaterials_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFDoorActor_eventApplyMaterials_Parms, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIDFDoorActor_ApplyMaterials_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFDoorActor_ApplyMaterials_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFDoorActor_ApplyMaterials_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFDoorActor_ApplyMaterials_Statics::NewProp_Materials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_ApplyMaterials_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIDFDoorActor_ApplyMaterials_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIDFDoorActor, nullptr, "ApplyMaterials", Z_Construct_UFunction_AIDFDoorActor_ApplyMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_ApplyMaterials_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIDFDoorActor_ApplyMaterials_Statics::IDFDoorActor_eventApplyMaterials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_ApplyMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIDFDoorActor_ApplyMaterials_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIDFDoorActor_ApplyMaterials_Statics::IDFDoorActor_eventApplyMaterials_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIDFDoorActor_ApplyMaterials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIDFDoorActor_ApplyMaterials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIDFDoorActor::execApplyMaterials)
{
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_MeshComp);
	P_GET_TARRAY_REF(UMaterialInterface*,Z_Param_Out_Materials);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyMaterials(Z_Param_MeshComp,Z_Param_Out_Materials);
	P_NATIVE_END;
}
// ********** End Class AIDFDoorActor Function ApplyMaterials **************************************

// ********** Begin Class AIDFDoorActor Function DisableDoorBlockers *******************************
struct Z_Construct_UFunction_AIDFDoorActor_DisableDoorBlockers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Door Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Disable collisions of both door blockers.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Disable collisions of both door blockers." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIDFDoorActor_DisableDoorBlockers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIDFDoorActor, nullptr, "DisableDoorBlockers", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_DisableDoorBlockers_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIDFDoorActor_DisableDoorBlockers_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AIDFDoorActor_DisableDoorBlockers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIDFDoorActor_DisableDoorBlockers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIDFDoorActor::execDisableDoorBlockers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableDoorBlockers();
	P_NATIVE_END;
}
// ********** End Class AIDFDoorActor Function DisableDoorBlockers *********************************

// ********** Begin Class AIDFDoorActor Function EndInteraction ************************************
struct Z_Construct_UFunction_AIDFDoorActor_EndInteraction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIDFDoorActor_EndInteraction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIDFDoorActor, nullptr, "EndInteraction", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_EndInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIDFDoorActor_EndInteraction_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AIDFDoorActor_EndInteraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIDFDoorActor_EndInteraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIDFDoorActor::execEndInteraction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndInteraction();
	P_NATIVE_END;
}
// ********** End Class AIDFDoorActor Function EndInteraction **************************************

// ********** Begin Class AIDFDoorActor Function HideSpawnedKeyMesh ********************************
struct Z_Construct_UFunction_AIDFDoorActor_HideSpawnedKeyMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Hides the spawned key item.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Hides the spawned key item." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIDFDoorActor_HideSpawnedKeyMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIDFDoorActor, nullptr, "HideSpawnedKeyMesh", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_HideSpawnedKeyMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIDFDoorActor_HideSpawnedKeyMesh_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AIDFDoorActor_HideSpawnedKeyMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIDFDoorActor_HideSpawnedKeyMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIDFDoorActor::execHideSpawnedKeyMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideSpawnedKeyMesh();
	P_NATIVE_END;
}
// ********** End Class AIDFDoorActor Function HideSpawnedKeyMesh **********************************

// ********** Begin Class AIDFDoorActor Function IsClosed ******************************************
struct Z_Construct_UFunction_AIDFDoorActor_IsClosed_Statics
{
	struct IDFDoorActor_eventIsClosed_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Door Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Get if the door is closed.\n\x09 * @details Return true if the door skeletal mesh yaw is close (considering DoorCloseYawTolerance) enough to the actor yaw.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Get if the door is closed.\n@details Return true if the door skeletal mesh yaw is close (considering DoorCloseYawTolerance) enough to the actor yaw." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AIDFDoorActor_IsClosed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IDFDoorActor_eventIsClosed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AIDFDoorActor_IsClosed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IDFDoorActor_eventIsClosed_Parms), &Z_Construct_UFunction_AIDFDoorActor_IsClosed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIDFDoorActor_IsClosed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFDoorActor_IsClosed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_IsClosed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIDFDoorActor_IsClosed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIDFDoorActor, nullptr, "IsClosed", Z_Construct_UFunction_AIDFDoorActor_IsClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_IsClosed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIDFDoorActor_IsClosed_Statics::IDFDoorActor_eventIsClosed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_IsClosed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIDFDoorActor_IsClosed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIDFDoorActor_IsClosed_Statics::IDFDoorActor_eventIsClosed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIDFDoorActor_IsClosed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIDFDoorActor_IsClosed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIDFDoorActor::execIsClosed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsClosed();
	P_NATIVE_END;
}
// ********** End Class AIDFDoorActor Function IsClosed ********************************************

// ********** Begin Class AIDFDoorActor Function IsPlayerInFrontOfDoor *****************************
struct Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfDoor_Statics
{
	struct IDFDoorActor_eventIsPlayerInFrontOfDoor_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Door Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Getter to know if the player is in front or on the back of the door MESH.\n\x09 * @details The player is considered in front of the door when he points in the same direction of the forward (x axis) of the door MESH.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
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
void Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfDoor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IDFDoorActor_eventIsPlayerInFrontOfDoor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfDoor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IDFDoorActor_eventIsPlayerInFrontOfDoor_Parms), &Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfDoor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfDoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfDoor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfDoor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfDoor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIDFDoorActor, nullptr, "IsPlayerInFrontOfDoor", Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfDoor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfDoor_Statics::IDFDoorActor_eventIsPlayerInFrontOfDoor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfDoor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfDoor_Statics::IDFDoorActor_eventIsPlayerInFrontOfDoor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIDFDoorActor::execIsPlayerInFrontOfDoor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlayerInFrontOfDoor();
	P_NATIVE_END;
}
// ********** End Class AIDFDoorActor Function IsPlayerInFrontOfDoor *******************************

// ********** Begin Class AIDFDoorActor Function IsPlayerInFrontOfFrame ****************************
struct Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfFrame_Statics
{
	struct IDFDoorActor_eventIsPlayerInFrontOfFrame_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Door Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Getter to know if the player is in front or on the back of the door FRAME.\n\x09 * @details The player is considered in front of the door when he points in the same direction of the forward (x axis) of the door FRAME. \n\x09\x09It is used to determine on which direction the door hinge should rotate.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Getter to know if the player is in front or on the back of the door FRAME.\n@details The player is considered in front of the door when he points in the same direction of the forward (x axis) of the door FRAME.\n               It is used to determine on which direction the door hinge should rotate." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IDFDoorActor_eventIsPlayerInFrontOfFrame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IDFDoorActor_eventIsPlayerInFrontOfFrame_Parms), &Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfFrame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIDFDoorActor, nullptr, "IsPlayerInFrontOfFrame", Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfFrame_Statics::IDFDoorActor_eventIsPlayerInFrontOfFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfFrame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfFrame_Statics::IDFDoorActor_eventIsPlayerInFrontOfFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIDFDoorActor::execIsPlayerInFrontOfFrame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlayerInFrontOfFrame();
	P_NATIVE_END;
}
// ********** End Class AIDFDoorActor Function IsPlayerInFrontOfFrame ******************************

// ********** Begin Class AIDFDoorActor Function KeyUsed *******************************************
struct IDFDoorActor_eventKeyUsed_Parms
{
	FKeyItem UsedKey;
};
static FName NAME_AIDFDoorActor_KeyUsed = FName(TEXT("KeyUsed"));
void AIDFDoorActor::KeyUsed(FKeyItem UsedKey)
{
	UFunction* Func = FindFunctionChecked(NAME_AIDFDoorActor_KeyUsed);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		IDFDoorActor_eventKeyUsed_Parms Parms;
		Parms.UsedKey=UsedKey;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		KeyUsed_Implementation(UsedKey);
	}
}
struct Z_Construct_UFunction_AIDFDoorActor_KeyUsed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Door Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Event triggered when the player interacts with the door having a required key.\n\x09 * @details Use this function to play animations and/or attach a key item mesh to the a door skeletal mesh socket.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Event triggered when the player interacts with the door having a required key.\n@details Use this function to play animations and/or attach a key item mesh to the a door skeletal mesh socket." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UsedKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AIDFDoorActor_KeyUsed_Statics::NewProp_UsedKey = { "UsedKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFDoorActor_eventKeyUsed_Parms, UsedKey), Z_Construct_UScriptStruct_FKeyItem, METADATA_PARAMS(0, nullptr) }; // 3983273373
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIDFDoorActor_KeyUsed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFDoorActor_KeyUsed_Statics::NewProp_UsedKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_KeyUsed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIDFDoorActor_KeyUsed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIDFDoorActor, nullptr, "KeyUsed", Z_Construct_UFunction_AIDFDoorActor_KeyUsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_KeyUsed_Statics::PropPointers), sizeof(IDFDoorActor_eventKeyUsed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_KeyUsed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIDFDoorActor_KeyUsed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IDFDoorActor_eventKeyUsed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIDFDoorActor_KeyUsed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIDFDoorActor_KeyUsed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIDFDoorActor::execKeyUsed)
{
	P_GET_STRUCT(FKeyItem,Z_Param_UsedKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->KeyUsed_Implementation(Z_Param_UsedKey);
	P_NATIVE_END;
}
// ********** End Class AIDFDoorActor Function KeyUsed *********************************************

// ********** Begin Class AIDFDoorActor Function MoveDoor ******************************************
struct Z_Construct_UFunction_AIDFDoorActor_MoveDoor_Statics
{
	struct IDFDoorActor_eventMoveDoor_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Door Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Move door function when held by the player.\n\x09 * @details The input represet how much the door is moved, higher number means faster.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Move door function when held by the player.\n@details The input represet how much the door is moved, higher number means faster." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AIDFDoorActor_MoveDoor_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFDoorActor_eventMoveDoor_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIDFDoorActor_MoveDoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFDoorActor_MoveDoor_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_MoveDoor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIDFDoorActor_MoveDoor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIDFDoorActor, nullptr, "MoveDoor", Z_Construct_UFunction_AIDFDoorActor_MoveDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_MoveDoor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIDFDoorActor_MoveDoor_Statics::IDFDoorActor_eventMoveDoor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_MoveDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIDFDoorActor_MoveDoor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIDFDoorActor_MoveDoor_Statics::IDFDoorActor_eventMoveDoor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIDFDoorActor_MoveDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIDFDoorActor_MoveDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIDFDoorActor::execMoveDoor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveDoor(Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class AIDFDoorActor Function MoveDoor ********************************************

// ********** Begin Class AIDFDoorActor Function OnDoorBlockerHit **********************************
struct Z_Construct_UFunction_AIDFDoorActor_OnDoorBlockerHit_Statics
{
	struct IDFDoorActor_eventOnDoorBlockerHit_Parms
	{
		UPrimitiveComponent* HitComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AIDFDoorActor_OnDoorBlockerHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFDoorActor_eventOnDoorBlockerHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComponent_MetaData), NewProp_HitComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AIDFDoorActor_OnDoorBlockerHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFDoorActor_eventOnDoorBlockerHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AIDFDoorActor_OnDoorBlockerHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFDoorActor_eventOnDoorBlockerHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AIDFDoorActor_OnDoorBlockerHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFDoorActor_eventOnDoorBlockerHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AIDFDoorActor_OnDoorBlockerHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFDoorActor_eventOnDoorBlockerHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIDFDoorActor_OnDoorBlockerHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFDoorActor_OnDoorBlockerHit_Statics::NewProp_HitComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFDoorActor_OnDoorBlockerHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFDoorActor_OnDoorBlockerHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFDoorActor_OnDoorBlockerHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFDoorActor_OnDoorBlockerHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_OnDoorBlockerHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIDFDoorActor_OnDoorBlockerHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIDFDoorActor, nullptr, "OnDoorBlockerHit", Z_Construct_UFunction_AIDFDoorActor_OnDoorBlockerHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_OnDoorBlockerHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIDFDoorActor_OnDoorBlockerHit_Statics::IDFDoorActor_eventOnDoorBlockerHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_OnDoorBlockerHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIDFDoorActor_OnDoorBlockerHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIDFDoorActor_OnDoorBlockerHit_Statics::IDFDoorActor_eventOnDoorBlockerHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIDFDoorActor_OnDoorBlockerHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIDFDoorActor_OnDoorBlockerHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIDFDoorActor::execOnDoorBlockerHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDoorBlockerHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// ********** End Class AIDFDoorActor Function OnDoorBlockerHit ************************************

// ********** Begin Class AIDFDoorActor Function OnDoorMeshHit *************************************
struct Z_Construct_UFunction_AIDFDoorActor_OnDoorMeshHit_Statics
{
	struct IDFDoorActor_eventOnDoorMeshHit_Parms
	{
		UPrimitiveComponent* HitComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Handles collision with the door skeletal mesh.\n\x09 * @details Updates the collider state of the door blockers when something hits the door skeletal mesh.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Handles collision with the door skeletal mesh.\n@details Updates the collider state of the door blockers when something hits the door skeletal mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AIDFDoorActor_OnDoorMeshHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFDoorActor_eventOnDoorMeshHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComponent_MetaData), NewProp_HitComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AIDFDoorActor_OnDoorMeshHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFDoorActor_eventOnDoorMeshHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AIDFDoorActor_OnDoorMeshHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFDoorActor_eventOnDoorMeshHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AIDFDoorActor_OnDoorMeshHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFDoorActor_eventOnDoorMeshHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AIDFDoorActor_OnDoorMeshHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFDoorActor_eventOnDoorMeshHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIDFDoorActor_OnDoorMeshHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFDoorActor_OnDoorMeshHit_Statics::NewProp_HitComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFDoorActor_OnDoorMeshHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFDoorActor_OnDoorMeshHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFDoorActor_OnDoorMeshHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFDoorActor_OnDoorMeshHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_OnDoorMeshHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIDFDoorActor_OnDoorMeshHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIDFDoorActor, nullptr, "OnDoorMeshHit", Z_Construct_UFunction_AIDFDoorActor_OnDoorMeshHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_OnDoorMeshHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIDFDoorActor_OnDoorMeshHit_Statics::IDFDoorActor_eventOnDoorMeshHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_OnDoorMeshHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIDFDoorActor_OnDoorMeshHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIDFDoorActor_OnDoorMeshHit_Statics::IDFDoorActor_eventOnDoorMeshHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIDFDoorActor_OnDoorMeshHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIDFDoorActor_OnDoorMeshHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIDFDoorActor::execOnDoorMeshHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDoorMeshHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// ********** End Class AIDFDoorActor Function OnDoorMeshHit ***************************************

// ********** Begin Class AIDFDoorActor Function OnMontageNotifyReceived ***************************
struct Z_Construct_UFunction_AIDFDoorActor_OnMontageNotifyReceived_Statics
{
	struct IDFDoorActor_eventOnMontageNotifyReceived_Parms
	{
		FName NotifyName;
		FBranchingPointNotifyPayload Payload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Event to receive  montage notifies.\n\x09 * @details Use to handle unlock event driven by a anim montage, if UnlockAnimMontage is set from the editor.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Event to receive  montage notifies.\n@details Use to handle unlock event driven by a anim montage, if UnlockAnimMontage is set from the editor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AIDFDoorActor_OnMontageNotifyReceived_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFDoorActor_eventOnMontageNotifyReceived_Parms, NotifyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AIDFDoorActor_OnMontageNotifyReceived_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFDoorActor_eventOnMontageNotifyReceived_Parms, Payload), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Payload_MetaData), NewProp_Payload_MetaData) }; // 1265424770
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIDFDoorActor_OnMontageNotifyReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFDoorActor_OnMontageNotifyReceived_Statics::NewProp_NotifyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFDoorActor_OnMontageNotifyReceived_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_OnMontageNotifyReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIDFDoorActor_OnMontageNotifyReceived_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIDFDoorActor, nullptr, "OnMontageNotifyReceived", Z_Construct_UFunction_AIDFDoorActor_OnMontageNotifyReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_OnMontageNotifyReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIDFDoorActor_OnMontageNotifyReceived_Statics::IDFDoorActor_eventOnMontageNotifyReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_OnMontageNotifyReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIDFDoorActor_OnMontageNotifyReceived_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIDFDoorActor_OnMontageNotifyReceived_Statics::IDFDoorActor_eventOnMontageNotifyReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIDFDoorActor_OnMontageNotifyReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIDFDoorActor_OnMontageNotifyReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIDFDoorActor::execOnMontageNotifyReceived)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
	P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageNotifyReceived(Z_Param_NotifyName,Z_Param_Out_Payload);
	P_NATIVE_END;
}
// ********** End Class AIDFDoorActor Function OnMontageNotifyReceived *****************************

// ********** Begin Class AIDFDoorActor Function PlayInteractionMontageAndSound ********************
struct Z_Construct_UFunction_AIDFDoorActor_PlayInteractionMontageAndSound_Statics
{
	struct IDFDoorActor_eventPlayInteractionMontageAndSound_Parms
	{
		bool bShouldStopAllMontages;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShouldStopAllMontages_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldStopAllMontages;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AIDFDoorActor_PlayInteractionMontageAndSound_Statics::NewProp_bShouldStopAllMontages_SetBit(void* Obj)
{
	((IDFDoorActor_eventPlayInteractionMontageAndSound_Parms*)Obj)->bShouldStopAllMontages = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AIDFDoorActor_PlayInteractionMontageAndSound_Statics::NewProp_bShouldStopAllMontages = { "bShouldStopAllMontages", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IDFDoorActor_eventPlayInteractionMontageAndSound_Parms), &Z_Construct_UFunction_AIDFDoorActor_PlayInteractionMontageAndSound_Statics::NewProp_bShouldStopAllMontages_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIDFDoorActor_PlayInteractionMontageAndSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFDoorActor_PlayInteractionMontageAndSound_Statics::NewProp_bShouldStopAllMontages,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_PlayInteractionMontageAndSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIDFDoorActor_PlayInteractionMontageAndSound_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIDFDoorActor, nullptr, "PlayInteractionMontageAndSound", Z_Construct_UFunction_AIDFDoorActor_PlayInteractionMontageAndSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_PlayInteractionMontageAndSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIDFDoorActor_PlayInteractionMontageAndSound_Statics::IDFDoorActor_eventPlayInteractionMontageAndSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_PlayInteractionMontageAndSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIDFDoorActor_PlayInteractionMontageAndSound_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIDFDoorActor_PlayInteractionMontageAndSound_Statics::IDFDoorActor_eventPlayInteractionMontageAndSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIDFDoorActor_PlayInteractionMontageAndSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIDFDoorActor_PlayInteractionMontageAndSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIDFDoorActor::execPlayInteractionMontageAndSound)
{
	P_GET_UBOOL(Z_Param_bShouldStopAllMontages);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayInteractionMontageAndSound(Z_Param_bShouldStopAllMontages);
	P_NATIVE_END;
}
// ********** End Class AIDFDoorActor Function PlayInteractionMontageAndSound **********************

// ********** Begin Class AIDFDoorActor Function PushDoor ******************************************
struct Z_Construct_UFunction_AIDFDoorActor_PushDoor_Statics
{
	struct IDFDoorActor_eventPushDoor_Parms
	{
		float PushImpulseStrength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Door Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Push the door.\n\x09 * @details Push the door on player tap input, input float of the function is the force applyed.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Push the door.\n@details Push the door on player tap input, input float of the function is the force applyed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PushImpulseStrength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AIDFDoorActor_PushDoor_Statics::NewProp_PushImpulseStrength = { "PushImpulseStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFDoorActor_eventPushDoor_Parms, PushImpulseStrength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIDFDoorActor_PushDoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFDoorActor_PushDoor_Statics::NewProp_PushImpulseStrength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_PushDoor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIDFDoorActor_PushDoor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIDFDoorActor, nullptr, "PushDoor", Z_Construct_UFunction_AIDFDoorActor_PushDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_PushDoor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIDFDoorActor_PushDoor_Statics::IDFDoorActor_eventPushDoor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_PushDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIDFDoorActor_PushDoor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIDFDoorActor_PushDoor_Statics::IDFDoorActor_eventPushDoor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIDFDoorActor_PushDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIDFDoorActor_PushDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIDFDoorActor::execPushDoor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_PushImpulseStrength);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PushDoor(Z_Param_PushImpulseStrength);
	P_NATIVE_END;
}
// ********** End Class AIDFDoorActor Function PushDoor ********************************************

// ********** Begin Class AIDFDoorActor Function SetDoorAsInputListener ****************************
struct Z_Construct_UFunction_AIDFDoorActor_SetDoorAsInputListener_Statics
{
	struct IDFDoorActor_eventSetDoorAsInputListener_Parms
	{
		bool newShouldListen;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Enable/disable door inputs.\n\x09 * @details Used to enable/disable the door from receiving input\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Enable/disable door inputs.\n@details Used to enable/disable the door from receiving input" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_newShouldListen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_newShouldListen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AIDFDoorActor_SetDoorAsInputListener_Statics::NewProp_newShouldListen_SetBit(void* Obj)
{
	((IDFDoorActor_eventSetDoorAsInputListener_Parms*)Obj)->newShouldListen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AIDFDoorActor_SetDoorAsInputListener_Statics::NewProp_newShouldListen = { "newShouldListen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IDFDoorActor_eventSetDoorAsInputListener_Parms), &Z_Construct_UFunction_AIDFDoorActor_SetDoorAsInputListener_Statics::NewProp_newShouldListen_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIDFDoorActor_SetDoorAsInputListener_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFDoorActor_SetDoorAsInputListener_Statics::NewProp_newShouldListen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_SetDoorAsInputListener_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIDFDoorActor_SetDoorAsInputListener_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIDFDoorActor, nullptr, "SetDoorAsInputListener", Z_Construct_UFunction_AIDFDoorActor_SetDoorAsInputListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_SetDoorAsInputListener_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIDFDoorActor_SetDoorAsInputListener_Statics::IDFDoorActor_eventSetDoorAsInputListener_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_SetDoorAsInputListener_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIDFDoorActor_SetDoorAsInputListener_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIDFDoorActor_SetDoorAsInputListener_Statics::IDFDoorActor_eventSetDoorAsInputListener_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIDFDoorActor_SetDoorAsInputListener()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIDFDoorActor_SetDoorAsInputListener_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIDFDoorActor::execSetDoorAsInputListener)
{
	P_GET_UBOOL(Z_Param_newShouldListen);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDoorAsInputListener(Z_Param_newShouldListen);
	P_NATIVE_END;
}
// ********** End Class AIDFDoorActor Function SetDoorAsInputListener ******************************

// ********** Begin Class AIDFDoorActor Function SetDoubleTapFlag **********************************
struct Z_Construct_UFunction_AIDFDoorActor_SetDoubleTapFlag_Statics
{
	struct IDFDoorActor_eventSetDoubleTapFlag_Parms
	{
		bool bNewDoubleTapFlag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Set bDubleTapFlag.\n\x09 * @details While bDoubleTap is true, another tap will trigger the double tap behavior\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Set bDubleTapFlag.\n@details While bDoubleTap is true, another tap will trigger the double tap behavior" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bNewDoubleTapFlag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewDoubleTapFlag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AIDFDoorActor_SetDoubleTapFlag_Statics::NewProp_bNewDoubleTapFlag_SetBit(void* Obj)
{
	((IDFDoorActor_eventSetDoubleTapFlag_Parms*)Obj)->bNewDoubleTapFlag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AIDFDoorActor_SetDoubleTapFlag_Statics::NewProp_bNewDoubleTapFlag = { "bNewDoubleTapFlag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IDFDoorActor_eventSetDoubleTapFlag_Parms), &Z_Construct_UFunction_AIDFDoorActor_SetDoubleTapFlag_Statics::NewProp_bNewDoubleTapFlag_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIDFDoorActor_SetDoubleTapFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFDoorActor_SetDoubleTapFlag_Statics::NewProp_bNewDoubleTapFlag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_SetDoubleTapFlag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIDFDoorActor_SetDoubleTapFlag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIDFDoorActor, nullptr, "SetDoubleTapFlag", Z_Construct_UFunction_AIDFDoorActor_SetDoubleTapFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_SetDoubleTapFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIDFDoorActor_SetDoubleTapFlag_Statics::IDFDoorActor_eventSetDoubleTapFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_SetDoubleTapFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIDFDoorActor_SetDoubleTapFlag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIDFDoorActor_SetDoubleTapFlag_Statics::IDFDoorActor_eventSetDoubleTapFlag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIDFDoorActor_SetDoubleTapFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIDFDoorActor_SetDoubleTapFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIDFDoorActor::execSetDoubleTapFlag)
{
	P_GET_UBOOL(Z_Param_bNewDoubleTapFlag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDoubleTapFlag(Z_Param_bNewDoubleTapFlag);
	P_NATIVE_END;
}
// ********** End Class AIDFDoorActor Function SetDoubleTapFlag ************************************

// ********** Begin Class AIDFDoorActor Function SetInteractingActorBlocked ************************
struct Z_Construct_UFunction_AIDFDoorActor_SetInteractingActorBlocked_Statics
{
	struct IDFDoorActor_eventSetInteractingActorBlocked_Parms
	{
		bool newIssBlocked;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Enable/disable the player movement and look.\n\x09 * @details (Ideally made on the character script through an interface) Used to enable and disable player movement and player look\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Enable/disable the player movement and look.\n@details (Ideally made on the character script through an interface) Used to enable and disable player movement and player look" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_newIssBlocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_newIssBlocked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AIDFDoorActor_SetInteractingActorBlocked_Statics::NewProp_newIssBlocked_SetBit(void* Obj)
{
	((IDFDoorActor_eventSetInteractingActorBlocked_Parms*)Obj)->newIssBlocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AIDFDoorActor_SetInteractingActorBlocked_Statics::NewProp_newIssBlocked = { "newIssBlocked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IDFDoorActor_eventSetInteractingActorBlocked_Parms), &Z_Construct_UFunction_AIDFDoorActor_SetInteractingActorBlocked_Statics::NewProp_newIssBlocked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIDFDoorActor_SetInteractingActorBlocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFDoorActor_SetInteractingActorBlocked_Statics::NewProp_newIssBlocked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_SetInteractingActorBlocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIDFDoorActor_SetInteractingActorBlocked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIDFDoorActor, nullptr, "SetInteractingActorBlocked", Z_Construct_UFunction_AIDFDoorActor_SetInteractingActorBlocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_SetInteractingActorBlocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIDFDoorActor_SetInteractingActorBlocked_Statics::IDFDoorActor_eventSetInteractingActorBlocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_SetInteractingActorBlocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIDFDoorActor_SetInteractingActorBlocked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIDFDoorActor_SetInteractingActorBlocked_Statics::IDFDoorActor_eventSetInteractingActorBlocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIDFDoorActor_SetInteractingActorBlocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIDFDoorActor_SetInteractingActorBlocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIDFDoorActor::execSetInteractingActorBlocked)
{
	P_GET_UBOOL(Z_Param_newIssBlocked);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInteractingActorBlocked(Z_Param_newIssBlocked);
	P_NATIVE_END;
}
// ********** End Class AIDFDoorActor Function SetInteractingActorBlocked **************************

// ********** Begin Class AIDFDoorActor Function SpawnKeyItemMesh **********************************
struct Z_Construct_UFunction_AIDFDoorActor_SpawnKeyItemMesh_Statics
{
	struct IDFDoorActor_eventSpawnKeyItemMesh_Parms
	{
		TSoftObjectPtr<UStaticMesh> KeyItemMesh;
		FName SocketName;
		UStaticMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Door Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Used to spawn the key mesh when the player uses a required key.\n\x09 * @details Spawns a mesh of the key (KeyItemStaticMesh) and place it under a target DoorSkeletalMesh socket (SocketName).\n\x09 * @return KeyItemStaticMesh (soft pointer).\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Used to spawn the key mesh when the player uses a required key.\n@details Spawns a mesh of the key (KeyItemStaticMesh) and place it under a target DoorSkeletalMesh socket (SocketName).\n@return KeyItemStaticMesh (soft pointer)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_KeyItemMesh;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_AIDFDoorActor_SpawnKeyItemMesh_Statics::NewProp_KeyItemMesh = { "KeyItemMesh", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFDoorActor_eventSpawnKeyItemMesh_Parms, KeyItemMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AIDFDoorActor_SpawnKeyItemMesh_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFDoorActor_eventSpawnKeyItemMesh_Parms, SocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AIDFDoorActor_SpawnKeyItemMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFDoorActor_eventSpawnKeyItemMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIDFDoorActor_SpawnKeyItemMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFDoorActor_SpawnKeyItemMesh_Statics::NewProp_KeyItemMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFDoorActor_SpawnKeyItemMesh_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFDoorActor_SpawnKeyItemMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_SpawnKeyItemMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIDFDoorActor_SpawnKeyItemMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIDFDoorActor, nullptr, "SpawnKeyItemMesh", Z_Construct_UFunction_AIDFDoorActor_SpawnKeyItemMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_SpawnKeyItemMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIDFDoorActor_SpawnKeyItemMesh_Statics::IDFDoorActor_eventSpawnKeyItemMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_SpawnKeyItemMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIDFDoorActor_SpawnKeyItemMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIDFDoorActor_SpawnKeyItemMesh_Statics::IDFDoorActor_eventSpawnKeyItemMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIDFDoorActor_SpawnKeyItemMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIDFDoorActor_SpawnKeyItemMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIDFDoorActor::execSpawnKeyItemMesh)
{
	P_GET_SOFTOBJECT(TSoftObjectPtr<UStaticMesh>,Z_Param_KeyItemMesh);
	P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStaticMeshComponent**)Z_Param__Result=P_THIS->SpawnKeyItemMesh(Z_Param_KeyItemMesh,Z_Param_SocketName);
	P_NATIVE_END;
}
// ********** End Class AIDFDoorActor Function SpawnKeyItemMesh ************************************

// ********** Begin Class AIDFDoorActor Function TapInteraction ************************************
struct Z_Construct_UFunction_AIDFDoorActor_TapInteraction_Statics
{
	struct IDFDoorActor_eventTapInteraction_Parms
	{
		bool bIsDoubleTap;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Door Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Handle tap interaction.\n\x09 * @details Handle the tap and decide wheather to apply push (soft or strong) or not.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Handle tap interaction.\n@details Handle the tap and decide wheather to apply push (soft or strong) or not." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsDoubleTap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDoubleTap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AIDFDoorActor_TapInteraction_Statics::NewProp_bIsDoubleTap_SetBit(void* Obj)
{
	((IDFDoorActor_eventTapInteraction_Parms*)Obj)->bIsDoubleTap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AIDFDoorActor_TapInteraction_Statics::NewProp_bIsDoubleTap = { "bIsDoubleTap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IDFDoorActor_eventTapInteraction_Parms), &Z_Construct_UFunction_AIDFDoorActor_TapInteraction_Statics::NewProp_bIsDoubleTap_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIDFDoorActor_TapInteraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIDFDoorActor_TapInteraction_Statics::NewProp_bIsDoubleTap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_TapInteraction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIDFDoorActor_TapInteraction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIDFDoorActor, nullptr, "TapInteraction", Z_Construct_UFunction_AIDFDoorActor_TapInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_TapInteraction_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIDFDoorActor_TapInteraction_Statics::IDFDoorActor_eventTapInteraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_TapInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIDFDoorActor_TapInteraction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIDFDoorActor_TapInteraction_Statics::IDFDoorActor_eventTapInteraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIDFDoorActor_TapInteraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIDFDoorActor_TapInteraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIDFDoorActor::execTapInteraction)
{
	P_GET_UBOOL(Z_Param_bIsDoubleTap);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TapInteraction(Z_Param_bIsDoubleTap);
	P_NATIVE_END;
}
// ********** End Class AIDFDoorActor Function TapInteraction **************************************

// ********** Begin Class AIDFDoorActor Function TryUnlockDoor *************************************
struct Z_Construct_UFunction_AIDFDoorActor_TryUnlockDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Door Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Unlocks the door if all the required keys are used.\n\x09 * @details Checks if RequiredKeyIDs of the lock component is empty, if so, activates the door hinge physics.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Unlocks the door if all the required keys are used.\n@details Checks if RequiredKeyIDs of the lock component is empty, if so, activates the door hinge physics." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIDFDoorActor_TryUnlockDoor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIDFDoorActor, nullptr, "TryUnlockDoor", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_TryUnlockDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIDFDoorActor_TryUnlockDoor_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AIDFDoorActor_TryUnlockDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIDFDoorActor_TryUnlockDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIDFDoorActor::execTryUnlockDoor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryUnlockDoor();
	P_NATIVE_END;
}
// ********** End Class AIDFDoorActor Function TryUnlockDoor ***************************************

// ********** Begin Class AIDFDoorActor Function UpdateDoorBlockers ********************************
struct Z_Construct_UFunction_AIDFDoorActor_UpdateDoorBlockers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Door Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Update Box Collision Blockers.\n\x09 * @details Enable or disable collision of the door blockers based on current door rotation.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Update Box Collision Blockers.\n@details Enable or disable collision of the door blockers based on current door rotation." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIDFDoorActor_UpdateDoorBlockers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIDFDoorActor, nullptr, "UpdateDoorBlockers", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIDFDoorActor_UpdateDoorBlockers_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIDFDoorActor_UpdateDoorBlockers_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AIDFDoorActor_UpdateDoorBlockers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIDFDoorActor_UpdateDoorBlockers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIDFDoorActor::execUpdateDoorBlockers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateDoorBlockers();
	P_NATIVE_END;
}
// ********** End Class AIDFDoorActor Function UpdateDoorBlockers **********************************

// ********** Begin Class AIDFDoorActor ************************************************************
void AIDFDoorActor::StaticRegisterNativesAIDFDoorActor()
{
	UClass* Class = AIDFDoorActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyMaterials", &AIDFDoorActor::execApplyMaterials },
		{ "DisableDoorBlockers", &AIDFDoorActor::execDisableDoorBlockers },
		{ "EndInteraction", &AIDFDoorActor::execEndInteraction },
		{ "HideSpawnedKeyMesh", &AIDFDoorActor::execHideSpawnedKeyMesh },
		{ "IsClosed", &AIDFDoorActor::execIsClosed },
		{ "IsPlayerInFrontOfDoor", &AIDFDoorActor::execIsPlayerInFrontOfDoor },
		{ "IsPlayerInFrontOfFrame", &AIDFDoorActor::execIsPlayerInFrontOfFrame },
		{ "KeyUsed", &AIDFDoorActor::execKeyUsed },
		{ "MoveDoor", &AIDFDoorActor::execMoveDoor },
		{ "OnDoorBlockerHit", &AIDFDoorActor::execOnDoorBlockerHit },
		{ "OnDoorMeshHit", &AIDFDoorActor::execOnDoorMeshHit },
		{ "OnMontageNotifyReceived", &AIDFDoorActor::execOnMontageNotifyReceived },
		{ "PlayInteractionMontageAndSound", &AIDFDoorActor::execPlayInteractionMontageAndSound },
		{ "PushDoor", &AIDFDoorActor::execPushDoor },
		{ "SetDoorAsInputListener", &AIDFDoorActor::execSetDoorAsInputListener },
		{ "SetDoubleTapFlag", &AIDFDoorActor::execSetDoubleTapFlag },
		{ "SetInteractingActorBlocked", &AIDFDoorActor::execSetInteractingActorBlocked },
		{ "SpawnKeyItemMesh", &AIDFDoorActor::execSpawnKeyItemMesh },
		{ "TapInteraction", &AIDFDoorActor::execTapInteraction },
		{ "TryUnlockDoor", &AIDFDoorActor::execTryUnlockDoor },
		{ "UpdateDoorBlockers", &AIDFDoorActor::execUpdateDoorBlockers },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AIDFDoorActor;
UClass* AIDFDoorActor::GetPrivateStaticClass()
{
	using TClass = AIDFDoorActor;
	if (!Z_Registration_Info_UClass_AIDFDoorActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IDFDoorActor"),
			Z_Registration_Info_UClass_AIDFDoorActor.InnerSingleton,
			StaticRegisterNativesAIDFDoorActor,
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
	return Z_Registration_Info_UClass_AIDFDoorActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AIDFDoorActor_NoRegister()
{
	return AIDFDoorActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIDFDoorActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Actors/IDFDoorActor.h" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorSkeletalMesh_MetaData[] = {
		{ "Category", "Door" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< This component represents the visual and animated skeletal mesh of the door.*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< This component represents the visual and animated skeletal mesh of the door." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorBlockerF_MetaData[] = {
		{ "Category", "Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Collider used to mimic  a lock behavior, stops the door to align with the door frame - this works for the front side of the door, relative to the actor X axis.*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Collider used to mimic  a lock behavior, stops the door to align with the door frame - this works for the front side of the door, relative to the actor X axis." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorBlockerB_MetaData[] = {
		{ "Category", "Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Collider used to mimic  a lock behavior, stops the door to align with the door frame - this works for the back side of the door, relative to the actor X axis.*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Collider used to mimic  a lock behavior, stops the door to align with the door frame - this works for the back side of the door, relative to the actor X axis." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavObstacle_MetaData[] = {
		{ "Category", "Door|Navigation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorBoneName_MetaData[] = {
		{ "Category", "Door Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Name of the bone controlling the physical door shutter.*/" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Name of the bone controlling the physical door shutter." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleTransformRef_MetaData[] = {
		{ "Category", "Handles" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockTransformRef_MetaData[] = {
		{ "Category", "Lock" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlockMontage_MetaData[] = {
		{ "Category", "Door Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Reference to the montage to play when a key is used, to set in editor. \n\x09\x09If set, the door will be unlocked with a montage notify. \n\x09\x09\x09If left empty, the montage will be ignored, and the door will open immediately after the interaction.*/" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Reference to the montage to play when a key is used, to set in editor.\n               If set, the door will be unlocked with a montage notify.\n                       If left empty, the montage will be ignored, and the door will open immediately after the interaction." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractMontage_MetaData[] = {
		{ "Category", "Door Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Reference to the montage to play when the player interacts.*/" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Reference to the montage to play when the player interacts." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockedMontage_MetaData[] = {
		{ "Category", "Door Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Reference to the montage to play when the player interacts and the door is locked.*/" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Reference to the montage to play when the player interacts and the door is locked." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleInteractionSFX_MetaData[] = {
		{ "Category", "05 - Audio" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockedSFX_MetaData[] = {
		{ "Category", "05 - Audio" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlockedSFX_MetaData[] = {
		{ "Category", "05 - Audio" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSFX_MetaData[] = {
		{ "Category", "05 - Audio" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockComponent_MetaData[] = {
		{ "Category", "Door" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Component that handles the lock system, a door is locked when the LockComponent RequiredKeyIDs array is not empty.*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Component that handles the lock system, a door is locked when the LockComponent RequiredKeyIDs array is not empty." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorCloseYawTolerance_MetaData[] = {
		{ "Category", "Door Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< The door is considered closed when the difference between the actor yaw and the door shutter yaw is less than this value.*/" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< The door is considered closed when the difference between the actor yaw and the door shutter yaw is less than this value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionTapTimeThreshold_MetaData[] = {
		{ "Category", "Door Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Max time the interaction input is pressed to be considered a \"tap\" interaction.*/" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Max time the interaction input is pressed to be considered a \"tap\" interaction." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionHoldTimeThreshold_MetaData[] = {
		{ "Category", "Door Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*< Minimum time to wait before activating the hold behavior (stop player input, door manual movement activation)*/" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Minimum time to wait before activating the hold behavior (stop player input, door manual movement activation)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockDoorWhenCloseTime_MetaData[] = {
		{ "Category", "Door Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< How long the door should be stopped when the door aligns with the lock, to avoid saloon style door behavior.*/" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< How long the door should be stopped when the door aligns with the lock, to avoid saloon style door behavior." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftPushStregth_MetaData[] = {
		{ "Category", "03 - Door Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Represent the force to apply when the door is pushed with a single tap of the interaction input*/" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Represent the force to apply when the door is pushed with a single tap of the interaction input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrongPushStregth_MetaData[] = {
		{ "Category", "03 - Door Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Represent the force to apply when the door is pushed with a double tap of the interaction input*/" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Represent the force to apply when the door is pushed with a double tap of the interaction input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveDoorAmount_MetaData[] = {
		{ "Category", "03 - Door Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< A multiplier applied to the input value when holding and moving a door */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< A multiplier applied to the input value when holding and moving a door" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngularVelocity_MetaData[] = {
		{ "Category", "03 - Door Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Max velocity applied to the door when held and moved, lower values make the door feel heavier, higher values make the door feel lighter */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Max velocity applied to the door when held and moved, lower values make the door feel heavier, higher values make the door feel lighter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoubleTapFlag_MetaData[] = {
		{ "Category", "Door Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Flag used to get the double tap, true when one tap is performed, false when a InteractionTapTimeThreshold has passed since the first tap.*/" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Flag used to get the double tap, true when one tap is performed, false when a InteractionTapTimeThreshold has passed since the first tap." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugs_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Set it to true to debug the following: door push vector.*/" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Set it to true to debug the following: door push vector." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyItemStaticMesh_MetaData[] = {
		{ "Category", "IDFDoorActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Reference of the key item static mesh spawned by SpawnKeyItemMesh*/" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Reference of the key item static mesh spawned by SpawnKeyItemMesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorInteractionAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< The input action used to move the door while holding it*/" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< The input action used to move the door while holding it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorBlockerTimerHandle_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Handle the timer to block the door when is closed - mimics lock behavior avoiding \"saloon\" style door behavior */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Handle the timer to block the door when is closed - mimics lock behavior avoiding \"saloon\" style door behavior" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bListeningToInputs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*True if we have passed the inputs to the door for the manual movement, false otherwise*/" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if we have passed the inputs to the door for the manual movement, false otherwise" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorMesh_MetaData[] = {
		{ "Category", "01 - Door Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Editable Meshes\n" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Editable Meshes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorFrameMesh_MetaData[] = {
		{ "Category", "01 - Door Setup" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleMesh_MetaData[] = {
		{ "Category", "01 - Door Setup" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAnimateHandle_MetaData[] = {
		{ "Category", "01 - Door Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should the door handle animate when the door opens? Usually false if the handle is fixed. */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should the door handle animate when the door opens? Usually false if the handle is fixed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleBoneLocation_MetaData[] = {
		{ "Category", "01 - Door Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference location of the handle bone inside the skeletal mesh. Used to correctly position the handle mesh. */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference location of the handle bone inside the skeletal mesh. Used to correctly position the handle mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockBoneLocation_MetaData[] = {
		{ "Category", "01 - Door Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference location of the lock bone inside the skeletal mesh. Used to correctly position the lock mesh. */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference location of the lock bone inside the skeletal mesh. Used to correctly position the lock mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOneSided_MetaData[] = {
		{ "Category", "01 - Door Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is the door one-sided? If true, the door can only be opened in the defined direction (check the red arrow in the editor). \n\x09The direction can be changed using FlipOpeningSide. */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the door one-sided? If true, the door can only be opened in the defined direction (check the red arrow in the editor).\n      The direction can be changed using FlipOpeningSide." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlipOpeningSide_MetaData[] = {
		{ "Category", "01 - Door Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Flip which side is considered the opening side (only used if one-sided). */" },
#endif
		{ "EditCondition", "bIsOneSided" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flip which side is considered the opening side (only used if one-sided)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideBlockedSideHandle_MetaData[] = {
		{ "Category", "01 - Door Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hide the handle on the blocked side (only used if one-sided). */" },
#endif
		{ "EditCondition", "bIsOneSided" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hide the handle on the blocked side (only used if one-sided)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorMaterials_MetaData[] = {
		{ "Category", "02 - Door Materials" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Materials applied to the door mesh. Applied in order of the mesh's material slots." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameMaterials_MetaData[] = {
		{ "Category", "02 - Door Materials" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Materials applied to the door frame mesh. Applied in order of the mesh's material slots." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleMaterials_MetaData[] = {
		{ "Category", "02 - Door Materials" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Materials applied to the door handle mesh. Applied in order of the mesh's material slots." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpeningDirectionArrow_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockPreviewMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatedDoorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionStartedWorldSeconds_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< World seconds to get when the interaction starts. Used to get the time enlapsed between interaction input pressed and interaction input released*/" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< World seconds to get when the interaction starts. Used to get the time enlapsed between interaction input pressed and interaction input released" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionHeldDuration_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*< Seconds since the interaction started */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Seconds since the interaction started" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWasPlayerInFrontAtGrab_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlockedHUDMessage_MetaData[] = {
		{ "Category", "04 - HUD Messages" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoKeyTextMessage_MetaData[] = {
		{ "Category", "04 - HUD Messages" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WrongSideTextMessage_MetaData[] = {
		{ "Category", "04 - HUD Messages" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrokenTextMessage_MetaData[] = {
		{ "Category", "04 - HUD Messages" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TapResetTimerHandle_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Handles the timer that disable the double tap flag*/" },
#endif
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Handles the timer that disable the double tap flag" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatedComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatedHandleAComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatedHandleBComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatedDoorFrameComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/IDFDoorActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorSkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorBlockerF;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorBlockerB;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NavObstacle;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DoorBoneName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandleTransformRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LockTransformRef;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_UnlockMontage;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InteractMontage;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LockedMontage;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_HandleInteractionSFX;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LockedSFX;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_UnlockedSFX;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MovementSFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LockComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DoorCloseYawTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionTapTimeThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionHoldTimeThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockDoorWhenCloseTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SoftPushStregth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrongPushStregth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveDoorAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngularVelocity;
	static void NewProp_bDoubleTapFlag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoubleTapFlag;
	static void NewProp_bDrawDebugs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugs;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_KeyItemStaticMesh;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DoorInteractionAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoorBlockerTimerHandle;
	static void NewProp_bListeningToInputs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bListeningToInputs;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DoorMesh;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DoorFrameMesh;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_HandleMesh;
	static void NewProp_bAnimateHandle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnimateHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HandleBoneLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LockBoneLocation;
	static void NewProp_bIsOneSided_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOneSided;
	static void NewProp_bFlipOpeningSide_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipOpeningSide;
	static void NewProp_bHideBlockedSideHandle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideBlockedSideHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DoorMaterials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrameMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FrameMaterials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandleMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HandleMaterials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpeningDirectionArrow;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LockPreviewMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedDoorComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionStartedWorldSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionHeldDuration;
	static void NewProp_bWasPlayerInFrontAtGrab_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasPlayerInFrontAtGrab;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UnlockedHUDMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NoKeyTextMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WrongSideTextMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BrokenTextMessage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TapResetTimerHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CreatedComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedHandleAComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedHandleBComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedDoorFrameComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AIDFDoorActor_ApplyMaterials, "ApplyMaterials" }, // 3744382238
		{ &Z_Construct_UFunction_AIDFDoorActor_DisableDoorBlockers, "DisableDoorBlockers" }, // 3552276563
		{ &Z_Construct_UFunction_AIDFDoorActor_EndInteraction, "EndInteraction" }, // 2298615940
		{ &Z_Construct_UFunction_AIDFDoorActor_HideSpawnedKeyMesh, "HideSpawnedKeyMesh" }, // 1349103018
		{ &Z_Construct_UFunction_AIDFDoorActor_IsClosed, "IsClosed" }, // 2070385277
		{ &Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfDoor, "IsPlayerInFrontOfDoor" }, // 2631270259
		{ &Z_Construct_UFunction_AIDFDoorActor_IsPlayerInFrontOfFrame, "IsPlayerInFrontOfFrame" }, // 770868254
		{ &Z_Construct_UFunction_AIDFDoorActor_KeyUsed, "KeyUsed" }, // 1198996314
		{ &Z_Construct_UFunction_AIDFDoorActor_MoveDoor, "MoveDoor" }, // 447691848
		{ &Z_Construct_UFunction_AIDFDoorActor_OnDoorBlockerHit, "OnDoorBlockerHit" }, // 3890875376
		{ &Z_Construct_UFunction_AIDFDoorActor_OnDoorMeshHit, "OnDoorMeshHit" }, // 467786226
		{ &Z_Construct_UFunction_AIDFDoorActor_OnMontageNotifyReceived, "OnMontageNotifyReceived" }, // 712965863
		{ &Z_Construct_UFunction_AIDFDoorActor_PlayInteractionMontageAndSound, "PlayInteractionMontageAndSound" }, // 3142400946
		{ &Z_Construct_UFunction_AIDFDoorActor_PushDoor, "PushDoor" }, // 4271859017
		{ &Z_Construct_UFunction_AIDFDoorActor_SetDoorAsInputListener, "SetDoorAsInputListener" }, // 1038581726
		{ &Z_Construct_UFunction_AIDFDoorActor_SetDoubleTapFlag, "SetDoubleTapFlag" }, // 2605509661
		{ &Z_Construct_UFunction_AIDFDoorActor_SetInteractingActorBlocked, "SetInteractingActorBlocked" }, // 1392743606
		{ &Z_Construct_UFunction_AIDFDoorActor_SpawnKeyItemMesh, "SpawnKeyItemMesh" }, // 3435780903
		{ &Z_Construct_UFunction_AIDFDoorActor_TapInteraction, "TapInteraction" }, // 2087911813
		{ &Z_Construct_UFunction_AIDFDoorActor_TryUnlockDoor, "TryUnlockDoor" }, // 4077155901
		{ &Z_Construct_UFunction_AIDFDoorActor_UpdateDoorBlockers, "UpdateDoorBlockers" }, // 2311492080
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIDFDoorActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_DoorSkeletalMesh = { "DoorSkeletalMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, DoorSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorSkeletalMesh_MetaData), NewProp_DoorSkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_DoorBlockerF = { "DoorBlockerF", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, DoorBlockerF), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorBlockerF_MetaData), NewProp_DoorBlockerF_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_DoorBlockerB = { "DoorBlockerB", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, DoorBlockerB), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorBlockerB_MetaData), NewProp_DoorBlockerB_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_NavObstacle = { "NavObstacle", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, NavObstacle), Z_Construct_UClass_UNavModifierComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavObstacle_MetaData), NewProp_NavObstacle_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_DoorBoneName = { "DoorBoneName", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, DoorBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorBoneName_MetaData), NewProp_DoorBoneName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_HandleTransformRef = { "HandleTransformRef", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, HandleTransformRef), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleTransformRef_MetaData), NewProp_HandleTransformRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_LockTransformRef = { "LockTransformRef", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, LockTransformRef), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockTransformRef_MetaData), NewProp_LockTransformRef_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_UnlockMontage = { "UnlockMontage", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, UnlockMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlockMontage_MetaData), NewProp_UnlockMontage_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_InteractMontage = { "InteractMontage", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, InteractMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractMontage_MetaData), NewProp_InteractMontage_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_LockedMontage = { "LockedMontage", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, LockedMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockedMontage_MetaData), NewProp_LockedMontage_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_HandleInteractionSFX = { "HandleInteractionSFX", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, HandleInteractionSFX), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleInteractionSFX_MetaData), NewProp_HandleInteractionSFX_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_LockedSFX = { "LockedSFX", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, LockedSFX), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockedSFX_MetaData), NewProp_LockedSFX_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_UnlockedSFX = { "UnlockedSFX", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, UnlockedSFX), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlockedSFX_MetaData), NewProp_UnlockedSFX_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_MovementSFX = { "MovementSFX", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, MovementSFX), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSFX_MetaData), NewProp_MovementSFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_LockComponent = { "LockComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, LockComponent), Z_Construct_UClass_UIDFLockComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockComponent_MetaData), NewProp_LockComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_DoorCloseYawTolerance = { "DoorCloseYawTolerance", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, DoorCloseYawTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorCloseYawTolerance_MetaData), NewProp_DoorCloseYawTolerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_InteractionTapTimeThreshold = { "InteractionTapTimeThreshold", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, InteractionTapTimeThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionTapTimeThreshold_MetaData), NewProp_InteractionTapTimeThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_InteractionHoldTimeThreshold = { "InteractionHoldTimeThreshold", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, InteractionHoldTimeThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionHoldTimeThreshold_MetaData), NewProp_InteractionHoldTimeThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_BlockDoorWhenCloseTime = { "BlockDoorWhenCloseTime", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, BlockDoorWhenCloseTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockDoorWhenCloseTime_MetaData), NewProp_BlockDoorWhenCloseTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_SoftPushStregth = { "SoftPushStregth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, SoftPushStregth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftPushStregth_MetaData), NewProp_SoftPushStregth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_StrongPushStregth = { "StrongPushStregth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, StrongPushStregth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrongPushStregth_MetaData), NewProp_StrongPushStregth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_MoveDoorAmount = { "MoveDoorAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, MoveDoorAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveDoorAmount_MetaData), NewProp_MoveDoorAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_MaxAngularVelocity = { "MaxAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, MaxAngularVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAngularVelocity_MetaData), NewProp_MaxAngularVelocity_MetaData) };
void Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bDoubleTapFlag_SetBit(void* Obj)
{
	((AIDFDoorActor*)Obj)->bDoubleTapFlag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bDoubleTapFlag = { "bDoubleTapFlag", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIDFDoorActor), &Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bDoubleTapFlag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoubleTapFlag_MetaData), NewProp_bDoubleTapFlag_MetaData) };
void Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bDrawDebugs_SetBit(void* Obj)
{
	((AIDFDoorActor*)Obj)->bDrawDebugs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bDrawDebugs = { "bDrawDebugs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIDFDoorActor), &Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bDrawDebugs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugs_MetaData), NewProp_bDrawDebugs_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_KeyItemStaticMesh = { "KeyItemStaticMesh", nullptr, (EPropertyFlags)0x001400000008000c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, KeyItemStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyItemStaticMesh_MetaData), NewProp_KeyItemStaticMesh_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_DoorInteractionAction = { "DoorInteractionAction", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, DoorInteractionAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorInteractionAction_MetaData), NewProp_DoorInteractionAction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_DoorBlockerTimerHandle = { "DoorBlockerTimerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, DoorBlockerTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorBlockerTimerHandle_MetaData), NewProp_DoorBlockerTimerHandle_MetaData) }; // 3834150579
void Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bListeningToInputs_SetBit(void* Obj)
{
	((AIDFDoorActor*)Obj)->bListeningToInputs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bListeningToInputs = { "bListeningToInputs", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIDFDoorActor), &Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bListeningToInputs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bListeningToInputs_MetaData), NewProp_bListeningToInputs_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_DoorMesh = { "DoorMesh", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, DoorMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorMesh_MetaData), NewProp_DoorMesh_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_DoorFrameMesh = { "DoorFrameMesh", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, DoorFrameMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorFrameMesh_MetaData), NewProp_DoorFrameMesh_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_HandleMesh = { "HandleMesh", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, HandleMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleMesh_MetaData), NewProp_HandleMesh_MetaData) };
void Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bAnimateHandle_SetBit(void* Obj)
{
	((AIDFDoorActor*)Obj)->bAnimateHandle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bAnimateHandle = { "bAnimateHandle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIDFDoorActor), &Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bAnimateHandle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAnimateHandle_MetaData), NewProp_bAnimateHandle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_HandleBoneLocation = { "HandleBoneLocation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, HandleBoneLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleBoneLocation_MetaData), NewProp_HandleBoneLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_LockBoneLocation = { "LockBoneLocation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, LockBoneLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockBoneLocation_MetaData), NewProp_LockBoneLocation_MetaData) };
void Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bIsOneSided_SetBit(void* Obj)
{
	((AIDFDoorActor*)Obj)->bIsOneSided = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bIsOneSided = { "bIsOneSided", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIDFDoorActor), &Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bIsOneSided_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOneSided_MetaData), NewProp_bIsOneSided_MetaData) };
void Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bFlipOpeningSide_SetBit(void* Obj)
{
	((AIDFDoorActor*)Obj)->bFlipOpeningSide = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bFlipOpeningSide = { "bFlipOpeningSide", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIDFDoorActor), &Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bFlipOpeningSide_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlipOpeningSide_MetaData), NewProp_bFlipOpeningSide_MetaData) };
void Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bHideBlockedSideHandle_SetBit(void* Obj)
{
	((AIDFDoorActor*)Obj)->bHideBlockedSideHandle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bHideBlockedSideHandle = { "bHideBlockedSideHandle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIDFDoorActor), &Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bHideBlockedSideHandle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideBlockedSideHandle_MetaData), NewProp_bHideBlockedSideHandle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_DoorMaterials_Inner = { "DoorMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_DoorMaterials = { "DoorMaterials", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, DoorMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorMaterials_MetaData), NewProp_DoorMaterials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_FrameMaterials_Inner = { "FrameMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_FrameMaterials = { "FrameMaterials", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, FrameMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameMaterials_MetaData), NewProp_FrameMaterials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_HandleMaterials_Inner = { "HandleMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_HandleMaterials = { "HandleMaterials", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, HandleMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleMaterials_MetaData), NewProp_HandleMaterials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_OpeningDirectionArrow = { "OpeningDirectionArrow", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, OpeningDirectionArrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpeningDirectionArrow_MetaData), NewProp_OpeningDirectionArrow_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_LockPreviewMesh = { "LockPreviewMesh", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, LockPreviewMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockPreviewMesh_MetaData), NewProp_LockPreviewMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_CreatedDoorComponent = { "CreatedDoorComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, CreatedDoorComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatedDoorComponent_MetaData), NewProp_CreatedDoorComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_InteractionStartedWorldSeconds = { "InteractionStartedWorldSeconds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, InteractionStartedWorldSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionStartedWorldSeconds_MetaData), NewProp_InteractionStartedWorldSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_InteractionHeldDuration = { "InteractionHeldDuration", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, InteractionHeldDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionHeldDuration_MetaData), NewProp_InteractionHeldDuration_MetaData) };
void Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bWasPlayerInFrontAtGrab_SetBit(void* Obj)
{
	((AIDFDoorActor*)Obj)->bWasPlayerInFrontAtGrab = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bWasPlayerInFrontAtGrab = { "bWasPlayerInFrontAtGrab", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIDFDoorActor), &Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bWasPlayerInFrontAtGrab_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWasPlayerInFrontAtGrab_MetaData), NewProp_bWasPlayerInFrontAtGrab_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_UnlockedHUDMessage = { "UnlockedHUDMessage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, UnlockedHUDMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlockedHUDMessage_MetaData), NewProp_UnlockedHUDMessage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_NoKeyTextMessage = { "NoKeyTextMessage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, NoKeyTextMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoKeyTextMessage_MetaData), NewProp_NoKeyTextMessage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_WrongSideTextMessage = { "WrongSideTextMessage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, WrongSideTextMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WrongSideTextMessage_MetaData), NewProp_WrongSideTextMessage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_BrokenTextMessage = { "BrokenTextMessage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, BrokenTextMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrokenTextMessage_MetaData), NewProp_BrokenTextMessage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_TapResetTimerHandle = { "TapResetTimerHandle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, TapResetTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TapResetTimerHandle_MetaData), NewProp_TapResetTimerHandle_MetaData) }; // 3834150579
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_CreatedComponents_Inner = { "CreatedComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_CreatedComponents = { "CreatedComponents", nullptr, (EPropertyFlags)0x0040008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, CreatedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatedComponents_MetaData), NewProp_CreatedComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_CreatedHandleAComponent = { "CreatedHandleAComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, CreatedHandleAComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatedHandleAComponent_MetaData), NewProp_CreatedHandleAComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_CreatedHandleBComponent = { "CreatedHandleBComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, CreatedHandleBComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatedHandleBComponent_MetaData), NewProp_CreatedHandleBComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_CreatedDoorFrameComponent = { "CreatedDoorFrameComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIDFDoorActor, CreatedDoorFrameComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatedDoorFrameComponent_MetaData), NewProp_CreatedDoorFrameComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIDFDoorActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_DoorSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_DoorBlockerF,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_DoorBlockerB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_NavObstacle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_DoorBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_HandleTransformRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_LockTransformRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_UnlockMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_InteractMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_LockedMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_HandleInteractionSFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_LockedSFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_UnlockedSFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_MovementSFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_LockComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_DoorCloseYawTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_InteractionTapTimeThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_InteractionHoldTimeThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_BlockDoorWhenCloseTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_SoftPushStregth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_StrongPushStregth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_MoveDoorAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_MaxAngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bDoubleTapFlag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bDrawDebugs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_KeyItemStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_DoorInteractionAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_DoorBlockerTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bListeningToInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_DoorMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_DoorFrameMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_HandleMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bAnimateHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_HandleBoneLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_LockBoneLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bIsOneSided,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bFlipOpeningSide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bHideBlockedSideHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_DoorMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_DoorMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_FrameMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_FrameMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_HandleMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_HandleMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_OpeningDirectionArrow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_LockPreviewMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_CreatedDoorComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_InteractionStartedWorldSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_InteractionHeldDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_bWasPlayerInFrontAtGrab,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_UnlockedHUDMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_NoKeyTextMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_WrongSideTextMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_BrokenTextMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_TapResetTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_CreatedComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_CreatedComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_CreatedHandleAComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_CreatedHandleBComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIDFDoorActor_Statics::NewProp_CreatedDoorFrameComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIDFDoorActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AIDFDoorActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AIDFMovableActor,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveDoorFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIDFDoorActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIDFDoorActor_Statics::ClassParams = {
	&AIDFDoorActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AIDFDoorActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AIDFDoorActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIDFDoorActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AIDFDoorActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIDFDoorActor()
{
	if (!Z_Registration_Info_UClass_AIDFDoorActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIDFDoorActor.OuterSingleton, Z_Construct_UClass_AIDFDoorActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIDFDoorActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIDFDoorActor);
AIDFDoorActor::~AIDFDoorActor() {}
// ********** End Class AIDFDoorActor **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFDoorActor_h__Script_InteractiveDoorFramework_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIDFDoorActor, AIDFDoorActor::StaticClass, TEXT("AIDFDoorActor"), &Z_Registration_Info_UClass_AIDFDoorActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIDFDoorActor), 1541496835U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFDoorActor_h__Script_InteractiveDoorFramework_3059598767(TEXT("/Script/InteractiveDoorFramework"),
	Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFDoorActor_h__Script_InteractiveDoorFramework_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFDoorActor_h__Script_InteractiveDoorFramework_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
