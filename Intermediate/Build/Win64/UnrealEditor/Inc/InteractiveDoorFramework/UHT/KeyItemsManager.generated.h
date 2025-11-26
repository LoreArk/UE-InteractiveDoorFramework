// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/KeyItemsManager.h"

#ifdef INTERACTIVEDOORFRAMEWORK_KeyItemsManager_generated_h
#error "KeyItemsManager.generated.h already included, missing '#pragma once' in KeyItemsManager.h"
#endif
#define INTERACTIVEDOORFRAMEWORK_KeyItemsManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FKeyItem;

// ********** Begin Class UKeyItemsManager *********************************************************
#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Subsystems_KeyItemsManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddFoundKey); \
	DECLARE_FUNCTION(execGetFoundKeys);


INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_UKeyItemsManager_NoRegister();

#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Subsystems_KeyItemsManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKeyItemsManager(); \
	friend struct Z_Construct_UClass_UKeyItemsManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_UKeyItemsManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UKeyItemsManager, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InteractiveDoorFramework"), Z_Construct_UClass_UKeyItemsManager_NoRegister) \
	DECLARE_SERIALIZER(UKeyItemsManager)


#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Subsystems_KeyItemsManager_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKeyItemsManager(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKeyItemsManager(UKeyItemsManager&&) = delete; \
	UKeyItemsManager(const UKeyItemsManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKeyItemsManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKeyItemsManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UKeyItemsManager) \
	NO_API virtual ~UKeyItemsManager();


#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Subsystems_KeyItemsManager_h_12_PROLOG
#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Subsystems_KeyItemsManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Subsystems_KeyItemsManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Subsystems_KeyItemsManager_h_15_INCLASS_NO_PURE_DECLS \
	FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Subsystems_KeyItemsManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKeyItemsManager;

// ********** End Class UKeyItemsManager ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Subsystems_KeyItemsManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
