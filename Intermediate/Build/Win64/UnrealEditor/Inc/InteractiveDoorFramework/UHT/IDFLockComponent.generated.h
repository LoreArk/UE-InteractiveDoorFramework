// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/IDFLockComponent.h"

#ifdef INTERACTIVEDOORFRAMEWORK_IDFLockComponent_generated_h
#error "IDFLockComponent.generated.h already included, missing '#pragma once' in IDFLockComponent.h"
#endif
#define INTERACTIVEDOORFRAMEWORK_IDFLockComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EDoorLockState : uint8;
struct FKeyItem;

// ********** Begin Delegate FOnKeyItemUsed ********************************************************
#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Components_IDFLockComponent_h_28_DELEGATE \
INTERACTIVEDOORFRAMEWORK_API void FOnKeyItemUsed_DelegateWrapper(const FMulticastScriptDelegate& OnKeyItemUsed, FKeyItem KeyItem);


// ********** End Delegate FOnKeyItemUsed **********************************************************

// ********** Begin Delegate FOnOneSideUnlock ******************************************************
#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Components_IDFLockComponent_h_29_DELEGATE \
INTERACTIVEDOORFRAMEWORK_API void FOnOneSideUnlock_DelegateWrapper(const FMulticastScriptDelegate& OnOneSideUnlock);


// ********** End Delegate FOnOneSideUnlock ********************************************************

// ********** Begin Class UIDFLockComponent ********************************************************
#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Components_IDFLockComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTryUnlock); \
	DECLARE_FUNCTION(execGetIsLocked);


INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_UIDFLockComponent_NoRegister();

#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Components_IDFLockComponent_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIDFLockComponent(); \
	friend struct Z_Construct_UClass_UIDFLockComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_UIDFLockComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UIDFLockComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractiveDoorFramework"), Z_Construct_UClass_UIDFLockComponent_NoRegister) \
	DECLARE_SERIALIZER(UIDFLockComponent)


#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Components_IDFLockComponent_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIDFLockComponent(UIDFLockComponent&&) = delete; \
	UIDFLockComponent(const UIDFLockComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIDFLockComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIDFLockComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIDFLockComponent) \
	NO_API virtual ~UIDFLockComponent();


#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Components_IDFLockComponent_h_31_PROLOG
#define FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Components_IDFLockComponent_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Components_IDFLockComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Components_IDFLockComponent_h_34_INCLASS_NO_PURE_DECLS \
	FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Components_IDFLockComponent_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIDFLockComponent;

// ********** End Class UIDFLockComponent **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Components_IDFLockComponent_h

// ********** Begin Enum EDefaultLockState *********************************************************
#define FOREACH_ENUM_EDEFAULTLOCKSTATE(op) \
	op(EDefaultLockState::Default) \
	op(EDefaultLockState::OneSide) \
	op(EDefaultLockState::Key) \
	op(EDefaultLockState::Broken) 

enum class EDefaultLockState : uint8;
template<> struct TIsUEnumClass<EDefaultLockState> { enum { Value = true }; };
template<> INTERACTIVEDOORFRAMEWORK_API UEnum* StaticEnum<EDefaultLockState>();
// ********** End Enum EDefaultLockState ***********************************************************

// ********** Begin Enum EDoorLockState ************************************************************
#define FOREACH_ENUM_EDOORLOCKSTATE(op) \
	op(EDoorLockState::Unlocked) \
	op(EDoorLockState::Locked_NoKey) \
	op(EDoorLockState::Locked_WrongSide) \
	op(EDoorLockState::Broken) 

enum class EDoorLockState : uint8;
template<> struct TIsUEnumClass<EDoorLockState> { enum { Value = true }; };
template<> INTERACTIVEDOORFRAMEWORK_API UEnum* StaticEnum<EDoorLockState>();
// ********** End Enum EDoorLockState **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
