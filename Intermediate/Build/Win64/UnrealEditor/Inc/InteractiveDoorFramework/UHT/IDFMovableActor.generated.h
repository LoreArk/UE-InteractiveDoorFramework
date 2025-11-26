// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/IDFMovableActor.h"

#ifdef INTERACTIVEDOORFRAMEWORK_IDFMovableActor_generated_h
#error "IDFMovableActor.generated.h already included, missing '#pragma once' in IDFMovableActor.h"
#endif
#define INTERACTIVEDOORFRAMEWORK_IDFMovableActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EIDFInteractionState : uint8;
struct FHitResult;

// ********** Begin Delegate FOnMakeNoise **********************************************************
#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFMovableActor_h_18_DELEGATE \
INTERACTIVEDOORFRAMEWORK_API void FOnMakeNoise_DelegateWrapper(const FMulticastScriptDelegate& OnMakeNoise, FHitResult HitResult);


// ********** End Delegate FOnMakeNoise ************************************************************

// ********** Begin Class AIDFMovableActor *********************************************************
#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFMovableActor_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetInteractionState); \
	DECLARE_FUNCTION(execEventSound); \
	DECLARE_FUNCTION(execEventNoise);


#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFMovableActor_h_23_CALLBACK_WRAPPERS
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFMovableActor_NoRegister();

#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFMovableActor_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIDFMovableActor(); \
	friend struct Z_Construct_UClass_AIDFMovableActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFMovableActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AIDFMovableActor, AIDFInteractableActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractiveDoorFramework"), Z_Construct_UClass_AIDFMovableActor_NoRegister) \
	DECLARE_SERIALIZER(AIDFMovableActor)


#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFMovableActor_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AIDFMovableActor(AIDFMovableActor&&) = delete; \
	AIDFMovableActor(const AIDFMovableActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIDFMovableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIDFMovableActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIDFMovableActor) \
	NO_API virtual ~AIDFMovableActor();


#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFMovableActor_h_20_PROLOG
#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFMovableActor_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFMovableActor_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFMovableActor_h_23_CALLBACK_WRAPPERS \
	FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFMovableActor_h_23_INCLASS_NO_PURE_DECLS \
	FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFMovableActor_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AIDFMovableActor;

// ********** End Class AIDFMovableActor ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFMovableActor_h

// ********** Begin Enum EIDFInteractionState ******************************************************
#define FOREACH_ENUM_EIDFINTERACTIONSTATE(op) \
	op(EIDFInteractionState::NotHeld) \
	op(EIDFInteractionState::Held) 

enum class EIDFInteractionState : uint8;
template<> struct TIsUEnumClass<EIDFInteractionState> { enum { Value = true }; };
template<> INTERACTIVEDOORFRAMEWORK_API UEnum* StaticEnum<EIDFInteractionState>();
// ********** End Enum EIDFInteractionState ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
