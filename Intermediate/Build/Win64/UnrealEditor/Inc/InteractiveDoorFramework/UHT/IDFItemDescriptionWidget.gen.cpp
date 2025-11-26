// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/IDFItemDescriptionWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIDFItemDescriptionWidget() {}

// ********** Begin Cross Module References ********************************************************
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_UIDFItemDescriptionWidget();
INTERACTIVEDOORFRAMEWORK_API UClass* Z_Construct_UClass_UIDFItemDescriptionWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_InteractiveDoorFramework();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIDFItemDescriptionWidget Function HidePanel *****************************
struct Z_Construct_UFunction_UIDFItemDescriptionWidget_HidePanel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item Description" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the widget visibility to Hidden\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/IDFItemDescriptionWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the widget visibility to Hidden" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIDFItemDescriptionWidget_HidePanel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIDFItemDescriptionWidget, nullptr, "HidePanel", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFItemDescriptionWidget_HidePanel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIDFItemDescriptionWidget_HidePanel_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIDFItemDescriptionWidget_HidePanel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIDFItemDescriptionWidget_HidePanel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIDFItemDescriptionWidget::execHidePanel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HidePanel();
	P_NATIVE_END;
}
// ********** End Class UIDFItemDescriptionWidget Function HidePanel *******************************

// ********** Begin Class UIDFItemDescriptionWidget Function SetContent ****************************
struct Z_Construct_UFunction_UIDFItemDescriptionWidget_SetContent_Statics
{
	struct IDFItemDescriptionWidget_eventSetContent_Parms
	{
		FText ItemName;
		FText ItemDescription;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item Description" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set the content of the widget\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/IDFItemDescriptionWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the content of the widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ItemDescription;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UIDFItemDescriptionWidget_SetContent_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFItemDescriptionWidget_eventSetContent_Parms, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UIDFItemDescriptionWidget_SetContent_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IDFItemDescriptionWidget_eventSetContent_Parms, ItemDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDescription_MetaData), NewProp_ItemDescription_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIDFItemDescriptionWidget_SetContent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIDFItemDescriptionWidget_SetContent_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIDFItemDescriptionWidget_SetContent_Statics::NewProp_ItemDescription,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFItemDescriptionWidget_SetContent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIDFItemDescriptionWidget_SetContent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIDFItemDescriptionWidget, nullptr, "SetContent", Z_Construct_UFunction_UIDFItemDescriptionWidget_SetContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFItemDescriptionWidget_SetContent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIDFItemDescriptionWidget_SetContent_Statics::IDFItemDescriptionWidget_eventSetContent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFItemDescriptionWidget_SetContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIDFItemDescriptionWidget_SetContent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIDFItemDescriptionWidget_SetContent_Statics::IDFItemDescriptionWidget_eventSetContent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIDFItemDescriptionWidget_SetContent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIDFItemDescriptionWidget_SetContent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIDFItemDescriptionWidget::execSetContent)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_ItemName);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_ItemDescription);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetContent(Z_Param_Out_ItemName,Z_Param_Out_ItemDescription);
	P_NATIVE_END;
}
// ********** End Class UIDFItemDescriptionWidget Function SetContent ******************************

// ********** Begin Class UIDFItemDescriptionWidget Function ShowPanel *****************************
struct Z_Construct_UFunction_UIDFItemDescriptionWidget_ShowPanel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item Description" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the widget visibility to Visible\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/IDFItemDescriptionWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the widget visibility to Visible" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIDFItemDescriptionWidget_ShowPanel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIDFItemDescriptionWidget, nullptr, "ShowPanel", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIDFItemDescriptionWidget_ShowPanel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIDFItemDescriptionWidget_ShowPanel_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIDFItemDescriptionWidget_ShowPanel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIDFItemDescriptionWidget_ShowPanel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIDFItemDescriptionWidget::execShowPanel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowPanel();
	P_NATIVE_END;
}
// ********** End Class UIDFItemDescriptionWidget Function ShowPanel *******************************

// ********** Begin Class UIDFItemDescriptionWidget ************************************************
void UIDFItemDescriptionWidget::StaticRegisterNativesUIDFItemDescriptionWidget()
{
	UClass* Class = UIDFItemDescriptionWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HidePanel", &UIDFItemDescriptionWidget::execHidePanel },
		{ "SetContent", &UIDFItemDescriptionWidget::execSetContent },
		{ "ShowPanel", &UIDFItemDescriptionWidget::execShowPanel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIDFItemDescriptionWidget;
UClass* UIDFItemDescriptionWidget::GetPrivateStaticClass()
{
	using TClass = UIDFItemDescriptionWidget;
	if (!Z_Registration_Info_UClass_UIDFItemDescriptionWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IDFItemDescriptionWidget"),
			Z_Registration_Info_UClass_UIDFItemDescriptionWidget.InnerSingleton,
			StaticRegisterNativesUIDFItemDescriptionWidget,
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
	return Z_Registration_Info_UClass_UIDFItemDescriptionWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UIDFItemDescriptionWidget_NoRegister()
{
	return UIDFItemDescriptionWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIDFItemDescriptionWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/IDFItemDescriptionWidget.h" },
		{ "ModuleRelativePath", "Public/UI/IDFItemDescriptionWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Item Description" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reference to UI elements\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/IDFItemDescriptionWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to UI elements" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DescriptionText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Item Description" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/IDFItemDescriptionWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NameText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DescriptionText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIDFItemDescriptionWidget_HidePanel, "HidePanel" }, // 3222637997
		{ &Z_Construct_UFunction_UIDFItemDescriptionWidget_SetContent, "SetContent" }, // 669592611
		{ &Z_Construct_UFunction_UIDFItemDescriptionWidget_ShowPanel, "ShowPanel" }, // 2274449950
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIDFItemDescriptionWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIDFItemDescriptionWidget_Statics::NewProp_NameText = { "NameText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIDFItemDescriptionWidget, NameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameText_MetaData), NewProp_NameText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIDFItemDescriptionWidget_Statics::NewProp_DescriptionText = { "DescriptionText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIDFItemDescriptionWidget, DescriptionText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DescriptionText_MetaData), NewProp_DescriptionText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIDFItemDescriptionWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIDFItemDescriptionWidget_Statics::NewProp_NameText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIDFItemDescriptionWidget_Statics::NewProp_DescriptionText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIDFItemDescriptionWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIDFItemDescriptionWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveDoorFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIDFItemDescriptionWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIDFItemDescriptionWidget_Statics::ClassParams = {
	&UIDFItemDescriptionWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIDFItemDescriptionWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIDFItemDescriptionWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIDFItemDescriptionWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UIDFItemDescriptionWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIDFItemDescriptionWidget()
{
	if (!Z_Registration_Info_UClass_UIDFItemDescriptionWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIDFItemDescriptionWidget.OuterSingleton, Z_Construct_UClass_UIDFItemDescriptionWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIDFItemDescriptionWidget.OuterSingleton;
}
UIDFItemDescriptionWidget::UIDFItemDescriptionWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIDFItemDescriptionWidget);
UIDFItemDescriptionWidget::~UIDFItemDescriptionWidget() {}
// ********** End Class UIDFItemDescriptionWidget **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_UI_IDFItemDescriptionWidget_h__Script_InteractiveDoorFramework_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIDFItemDescriptionWidget, UIDFItemDescriptionWidget::StaticClass, TEXT("UIDFItemDescriptionWidget"), &Z_Registration_Info_UClass_UIDFItemDescriptionWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIDFItemDescriptionWidget), 3883551541U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_UI_IDFItemDescriptionWidget_h__Script_InteractiveDoorFramework_1087664456(TEXT("/Script/InteractiveDoorFramework"),
	Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_UI_IDFItemDescriptionWidget_h__Script_InteractiveDoorFramework_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_UI_IDFItemDescriptionWidget_h__Script_InteractiveDoorFramework_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
