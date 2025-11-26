// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/IDFInteractable.h"

#ifdef INTERACTIVEDOORFRAMEWORK_IDFInteractable_generated_h
#error "IDFInteractable.generated.h already included, missing '#pragma once' in IDFInteractable.h"
#endif
#define INTERACTIVEDOORFRAMEWORK_IDFInteractable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Interface UIDFInteractable *****************************************************
#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Interfaces_IDFInteractable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetIsTargeted_Implementation(bool bNewIsTargeted, UPrimitiveComponent* TargetedComponent) {}; \
	virtual void InteractCompleted_Implementation() {}; \
	virtual void InteractHeld_Implementation() {}; \
	virtual void InteractStarted_Implementation(AActor* InteractingActor, FHitResult TraceHitResult) {}; \
	DECLARE_FUNCTION(execSetIsTargeted); \
	DECLARE_FUNCTION(execInteractCompleted); \
	DECLARE_FUNCTION(execInteractHeld); \
	DECLARE_FUNCTION(execInteractStarted);


#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Interfaces_IDFInteractable_h_12_CALLBACK_WRAPPERS
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_UIDFInteractable_NoRegister();

#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Interfaces_IDFInteractable_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVEDOORFRAMEWORK_API UIDFInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIDFInteractable(UIDFInteractable&&) = delete; \
	UIDFInteractable(const UIDFInteractable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVEDOORFRAMEWORK_API, UIDFInteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIDFInteractable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIDFInteractable) \
	virtual ~UIDFInteractable() = default;


#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Interfaces_IDFInteractable_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIDFInteractable(); \
	friend struct Z_Construct_UClass_UIDFInteractable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_UIDFInteractable_NoRegister(); \
public: \
	DECLARE_CLASS2(UIDFInteractable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveDoorFramework"), Z_Construct_UClass_UIDFInteractable_NoRegister) \
	DECLARE_SERIALIZER(UIDFInteractable)


#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Interfaces_IDFInteractable_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Interfaces_IDFInteractable_h_12_GENERATED_UINTERFACE_BODY() \
	FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Interfaces_IDFInteractable_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Interfaces_IDFInteractable_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIDFInteractable() {} \
public: \
	typedef UIDFInteractable UClassType; \
	typedef IIDFInteractable ThisClass; \
	static void Execute_InteractCompleted(UObject* O); \
	static void Execute_InteractHeld(UObject* O); \
	static void Execute_InteractStarted(UObject* O, AActor* InteractingActor, FHitResult TraceHitResult); \
	static void Execute_SetIsTargeted(UObject* O, bool bNewIsTargeted, UPrimitiveComponent* TargetedComponent); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Interfaces_IDFInteractable_h_9_PROLOG
#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Interfaces_IDFInteractable_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Interfaces_IDFInteractable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Interfaces_IDFInteractable_h_12_CALLBACK_WRAPPERS \
	FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Interfaces_IDFInteractable_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIDFInteractable;

// ********** End Interface UIDFInteractable *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Interfaces_IDFInteractable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
