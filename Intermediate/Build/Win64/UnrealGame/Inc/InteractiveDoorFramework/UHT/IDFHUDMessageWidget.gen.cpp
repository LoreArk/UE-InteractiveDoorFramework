// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/IDFHUDMessageWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIDFHUDMessageWidget() {}

// ********** Begin Cross Module References ********************************************************
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_UIDFHUDMessageWidget();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_UIDFHUDMessageWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_InteractiveDoorFramework();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIDFHUDMessageWidget Function ShowMessage ********************************
struct IDFHUDMessageWidget_eventShowMessage_Parms
{
	FText MessageText;
};
static FName NAME_UIDFHUDMessageWidget_ShowMessage = FName(TEXT("ShowMessage"));
void UIDFHUDMessageWidget::ShowMessage(FText const& MessageText)
{
	UFunction* Func = FindFunctionChecked(NAME_UIDFHUDMessageWidget_ShowMessage);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		IDFHUDMessageWidget_eventShowMessage_Parms Parms;
		Parms.MessageText=MessageText;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		ShowMessage_Implementation(MessageText);
	}
}
struct Z_Construct_UFunction_UIDFHUDMessageWidget_ShowMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item Description" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set HUD Message text with new text, the blueprint implementation will handle animations and other show/hide effects\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/IDFHUDMessageWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set HUD Message text with new text, the blueprint implementation will handle animations and other show/hide effects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_MessageText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UIDFHUDMessageWidget_ShowMessage_Statics::NewProp_MessageText = { "MessageText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFHUDMessageWidget_eventShowMessage_Parms, MessageText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageText_MetaData), NewProp_MessageText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIDFHUDMessageWidget_ShowMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIDFHUDMessageWidget_ShowMessage_Statics::NewProp_MessageText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFHUDMessageWidget_ShowMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIDFHUDMessageWidget_ShowMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIDFHUDMessageWidget, nullptr, "ShowMessage", Z_Construct_UFunction_UIDFHUDMessageWidget_ShowMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFHUDMessageWidget_ShowMessage_Statics::PropPointers), sizeof(IDFHUDMessageWidget_eventShowMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFHUDMessageWidget_ShowMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIDFHUDMessageWidget_ShowMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IDFHUDMessageWidget_eventShowMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIDFHUDMessageWidget_ShowMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIDFHUDMessageWidget_ShowMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIDFHUDMessageWidget::execShowMessage)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_MessageText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowMessage_Implementation(Z_Param_Out_MessageText);
	P_NATIVE_END;
}
// ********** End Class UIDFHUDMessageWidget Function ShowMessage **********************************

// ********** Begin Class UIDFHUDMessageWidget *****************************************************
void UIDFHUDMessageWidget::StaticRegisterNativesUIDFHUDMessageWidget()
{
	UClass* Class = UIDFHUDMessageWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ShowMessage", &UIDFHUDMessageWidget::execShowMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIDFHUDMessageWidget;
UClass* UIDFHUDMessageWidget::GetPrivateStaticClass()
{
	using TClass = UIDFHUDMessageWidget;
	if (!Z_Registration_Info_UClass_UIDFHUDMessageWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IDFHUDMessageWidget"),
			Z_Registration_Info_UClass_UIDFHUDMessageWidget.InnerSingleton,
			StaticRegisterNativesUIDFHUDMessageWidget,
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
	return Z_Registration_Info_UClass_UIDFHUDMessageWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UIDFHUDMessageWidget_NoRegister()
{
	return UIDFHUDMessageWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIDFHUDMessageWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/IDFHUDMessageWidget.h" },
		{ "ModuleRelativePath", "Public/UI/IDFHUDMessageWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Item Description" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/IDFHUDMessageWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MessageTextBlock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIDFHUDMessageWidget_ShowMessage, "ShowMessage" }, // 950188165
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIDFHUDMessageWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIDFHUDMessageWidget_Statics::NewProp_MessageTextBlock = { "MessageTextBlock", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIDFHUDMessageWidget, MessageTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageTextBlock_MetaData), NewProp_MessageTextBlock_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIDFHUDMessageWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIDFHUDMessageWidget_Statics::NewProp_MessageTextBlock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIDFHUDMessageWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIDFHUDMessageWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveDoorFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIDFHUDMessageWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIDFHUDMessageWidget_Statics::ClassParams = {
	&UIDFHUDMessageWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIDFHUDMessageWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIDFHUDMessageWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIDFHUDMessageWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UIDFHUDMessageWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIDFHUDMessageWidget()
{
	if (!Z_Registration_Info_UClass_UIDFHUDMessageWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIDFHUDMessageWidget.OuterSingleton, Z_Construct_UClass_UIDFHUDMessageWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIDFHUDMessageWidget.OuterSingleton;
}
UIDFHUDMessageWidget::UIDFHUDMessageWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIDFHUDMessageWidget);
UIDFHUDMessageWidget::~UIDFHUDMessageWidget() {}
// ********** End Class UIDFHUDMessageWidget *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_UI_IDFHUDMessageWidget_h__Script_InteractiveDoorFramework_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIDFHUDMessageWidget, UIDFHUDMessageWidget::StaticClass, TEXT("UIDFHUDMessageWidget"), &Z_Registration_Info_UClass_UIDFHUDMessageWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIDFHUDMessageWidget), 1993456563U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_UI_IDFHUDMessageWidget_h__Script_InteractiveDoorFramework_994030174(TEXT("/Script/InteractiveDoorFramework"),
	Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_UI_IDFHUDMessageWidget_h__Script_InteractiveDoorFramework_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_UI_IDFHUDMessageWidget_h__Script_InteractiveDoorFramework_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
