// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/IDFPlayerInteractionComponent.h"

#ifdef INTERACTIVEDOORFRAMEWORK_IDFPlayerInteractionComponent_generated_h
#error "IDFPlayerInteractionComponent.generated.h already included, missing '#pragma once' in IDFPlayerInteractionComponent.h"
#endif
#define INTERACTIVEDOORFRAMEWORK_IDFPlayerInteractionComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UIDFPlayerInteractionComponent *******************************************
#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Components_IDFPlayerInteractionComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndInteraction); \
	DECLARE_FUNCTION(execInteractionTriggered); \
	DECLARE_FUNCTION(execStartInteraction);


INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_UIDFPlayerInteractionComponent_NoRegister();

#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Components_IDFPlayerInteractionComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIDFPlayerInteractionComponent(); \
	friend struct Z_Construct_UClass_UIDFPlayerInteractionComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_UIDFPlayerInteractionComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UIDFPlayerInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractiveDoorFramework"), Z_Construct_UClass_UIDFPlayerInteractionComponent_NoRegister) \
	DECLARE_SERIALIZER(UIDFPlayerInteractionComponent)


#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Components_IDFPlayerInteractionComponent_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIDFPlayerInteractionComponent(UIDFPlayerInteractionComponent&&) = delete; \
	UIDFPlayerInteractionComponent(const UIDFPlayerInteractionComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIDFPlayerInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIDFPlayerInteractionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIDFPlayerInteractionComponent) \
	NO_API virtual ~UIDFPlayerInteractionComponent();


#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Components_IDFPlayerInteractionComponent_h_10_PROLOG
#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Components_IDFPlayerInteractionComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Components_IDFPlayerInteractionComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Components_IDFPlayerInteractionComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Components_IDFPlayerInteractionComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIDFPlayerInteractionComponent;

// ********** End Class UIDFPlayerInteractionComponent *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Components_IDFPlayerInteractionComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
