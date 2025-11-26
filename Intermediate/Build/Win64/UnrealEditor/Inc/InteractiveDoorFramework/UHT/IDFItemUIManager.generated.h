// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/IDFItemUIManager.h"

#ifdef INTERACTIVEDOORFRAMEWORK_IDFItemUIManager_generated_h
#error "IDFItemUIManager.generated.h already included, missing '#pragma once' in IDFItemUIManager.h"
#endif
#define INTERACTIVEDOORFRAMEWORK_IDFItemUIManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AIDFInteractionPromptActor;
class UIDFHUDMessageWidget;
class UUserWidget;

// ********** Begin Class UIDFItemUIManager ********************************************************
#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Subsystems_IDFItemUIManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShowHUDMessage); \
	DECLARE_FUNCTION(execHidePromptWidget); \
	DECLARE_FUNCTION(execHideItemDescription); \
	DECLARE_FUNCTION(execShowPromptWidget); \
	DECLARE_FUNCTION(execShowItemDescription); \
	DECLARE_FUNCTION(execSetPromptWidgetClass); \
	DECLARE_FUNCTION(execSetHUDMessageWidgetClass); \
	DECLARE_FUNCTION(execSetDescriptionWidgetClass);


INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_UIDFItemUIManager_NoRegister();

#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Subsystems_IDFItemUIManager_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIDFItemUIManager(); \
	friend struct Z_Construct_UClass_UIDFItemUIManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_UIDFItemUIManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UIDFItemUIManager, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InteractiveDoorFramework"), Z_Construct_UClass_UIDFItemUIManager_NoRegister) \
	DECLARE_SERIALIZER(UIDFItemUIManager)


#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Subsystems_IDFItemUIManager_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIDFItemUIManager(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIDFItemUIManager(UIDFItemUIManager&&) = delete; \
	UIDFItemUIManager(const UIDFItemUIManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIDFItemUIManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIDFItemUIManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIDFItemUIManager) \
	NO_API virtual ~UIDFItemUIManager();


#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Subsystems_IDFItemUIManager_h_14_PROLOG
#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Subsystems_IDFItemUIManager_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Subsystems_IDFItemUIManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Subsystems_IDFItemUIManager_h_17_INCLASS_NO_PURE_DECLS \
	FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Subsystems_IDFItemUIManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIDFItemUIManager;

// ********** End Class UIDFItemUIManager **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Subsystems_IDFItemUIManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
