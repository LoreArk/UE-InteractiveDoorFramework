// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/IDFInteractableActor.h"

#ifdef INTERACTIVEDOORFRAMEWORK_IDFInteractableActor_generated_h
#error "IDFInteractableActor.generated.h already included, missing '#pragma once' in IDFInteractableActor.h"
#endif
#define INTERACTIVEDOORFRAMEWORK_IDFInteractableActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AIDFInteractableActor ****************************************************
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFInteractableActor_NoRegister();

#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFInteractableActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIDFInteractableActor(); \
	friend struct Z_Construct_UClass_AIDFInteractableActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_AIDFInteractableActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AIDFInteractableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractiveDoorFramework"), Z_Construct_UClass_AIDFInteractableActor_NoRegister) \
	DECLARE_SERIALIZER(AIDFInteractableActor) \
	virtual UObject* _getUObject() const override { return const_cast<AIDFInteractableActor*>(this); }


#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFInteractableActor_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AIDFInteractableActor(AIDFInteractableActor&&) = delete; \
	AIDFInteractableActor(const AIDFInteractableActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIDFInteractableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIDFInteractableActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIDFInteractableActor) \
	NO_API virtual ~AIDFInteractableActor();


#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFInteractableActor_h_10_PROLOG
#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFInteractableActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFInteractableActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFInteractableActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AIDFInteractableActor;

// ********** End Class AIDFInteractableActor ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Actors_IDFInteractableActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
