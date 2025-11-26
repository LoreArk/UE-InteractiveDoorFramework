// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/Collectables/IDFKeyActor.h"

#ifdef INTERACTIVEDOORFRAMEWORK_IDFKeyActor_generated_h
#error "IDFKeyActor.generated.h already included, missing '#pragma once' in IDFKeyActor.h"
#endif
#define INTERACTIVEDOORFRAMEWORK_IDFKeyActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AIDFKeyActor *************************************************************
#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_Collectables_IDFKeyActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDisableActor);


INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFKeyActor_NoRegister();

#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_Collectables_IDFKeyActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIDFKeyActor(); \
	friend struct Z_Construct_UClass_AIDFKeyActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFKeyActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AIDFKeyActor, AIDFCollectibleActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractiveDoorFramework"), Z_Construct_UClass_AIDFKeyActor_NoRegister) \
	DECLARE_SERIALIZER(AIDFKeyActor)


#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_Collectables_IDFKeyActor_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AIDFKeyActor(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AIDFKeyActor(AIDFKeyActor&&) = delete; \
	AIDFKeyActor(const AIDFKeyActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIDFKeyActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIDFKeyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIDFKeyActor) \
	NO_API virtual ~AIDFKeyActor();


#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_Collectables_IDFKeyActor_h_10_PROLOG
#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_Collectables_IDFKeyActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_Collectables_IDFKeyActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_Collectables_IDFKeyActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_Collectables_IDFKeyActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AIDFKeyActor;

// ********** End Class AIDFKeyActor ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_Collectables_IDFKeyActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
