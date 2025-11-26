// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/IDFDoorActor.h"

#ifdef INTERACTIVEDOORFRAMEWORK_IDFDoorActor_generated_h
#error "IDFDoorActor.generated.h already included, missing '#pragma once' in IDFDoorActor.h"
#endif
#define INTERACTIVEDOORFRAMEWORK_IDFDoorActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UMaterialInterface;
class UPrimitiveComponent;
class UStaticMesh;
class UStaticMeshComponent;
struct FBranchingPointNotifyPayload;
struct FHitResult;
struct FKeyItem;

// ********** Begin Class AIDFDoorActor ************************************************************
#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFDoorActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDoubleTapFlag); \
	DECLARE_FUNCTION(execApplyMaterials); \
	DECLARE_FUNCTION(execEndInteraction); \
	DECLARE_FUNCTION(execPlayInteractionMontageAndSound); \
	DECLARE_FUNCTION(execOnDoorMeshHit); \
	DECLARE_FUNCTION(execOnDoorBlockerHit); \
	DECLARE_FUNCTION(execSetInteractingActorBlocked); \
	DECLARE_FUNCTION(execSetDoorAsInputListener); \
	DECLARE_FUNCTION(execHideSpawnedKeyMesh); \
	DECLARE_FUNCTION(execSpawnKeyItemMesh); \
	DECLARE_FUNCTION(execOnMontageNotifyReceived); \
	DECLARE_FUNCTION(execTryUnlockDoor); \
	DECLARE_FUNCTION(execKeyUsed); \
	DECLARE_FUNCTION(execDisableDoorBlockers); \
	DECLARE_FUNCTION(execUpdateDoorBlockers); \
	DECLARE_FUNCTION(execMoveDoor); \
	DECLARE_FUNCTION(execTapInteraction); \
	DECLARE_FUNCTION(execPushDoor); \
	DECLARE_FUNCTION(execIsClosed); \
	DECLARE_FUNCTION(execIsPlayerInFrontOfDoor); \
	DECLARE_FUNCTION(execIsPlayerInFrontOfFrame);


#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFDoorActor_h_25_CALLBACK_WRAPPERS
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFDoorActor_NoRegister();

#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFDoorActor_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIDFDoorActor(); \
	friend struct Z_Construct_UClass_AIDFDoorActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFDoorActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AIDFDoorActor, AIDFMovableActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractiveDoorFramework"), Z_Construct_UClass_AIDFDoorActor_NoRegister) \
	DECLARE_SERIALIZER(AIDFDoorActor)


#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFDoorActor_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AIDFDoorActor(AIDFDoorActor&&) = delete; \
	AIDFDoorActor(const AIDFDoorActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIDFDoorActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIDFDoorActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIDFDoorActor) \
	NO_API virtual ~AIDFDoorActor();


#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFDoorActor_h_22_PROLOG
#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFDoorActor_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFDoorActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFDoorActor_h_25_CALLBACK_WRAPPERS \
	FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFDoorActor_h_25_INCLASS_NO_PURE_DECLS \
	FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFDoorActor_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AIDFDoorActor;

// ********** End Class AIDFDoorActor **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFDoorActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
