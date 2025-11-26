// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Structs/IDFCollectibleStructs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIDFCollectibleStructs() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
INTERACTIVEDOORFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FDocumentItem();
INTERACTIVEDOORFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FKeyItem();
UPackage* Z_Construct_UPackage__Script_InteractiveDoorFramework();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FDocumentItem *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDocumentItem;
class UScriptStruct* FDocumentItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDocumentItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDocumentItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDocumentItem, (UObject*)Z_Construct_UPackage__Script_InteractiveDoorFramework(), TEXT("DocumentItem"));
	}
	return Z_Registration_Info_UScriptStruct_FDocumentItem.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDocumentItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Represents a collectible document item.\n * @details These items contain text or lore elements that can be read by the player.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Structs/IDFCollectibleStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Represents a collectible document item.\n@details These items contain text or lore elements that can be read by the player." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DocumentID_MetaData[] = {
		{ "Category", "Document" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< The name of the document item. */" },
#endif
		{ "ModuleRelativePath", "Public/Structs/IDFCollectibleStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< The name of the document item." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DocumentTitle_MetaData[] = {
		{ "Category", "Document" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< The title of the document. */" },
#endif
		{ "ModuleRelativePath", "Public/Structs/IDFCollectibleStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< The title of the document." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DocumentContent_MetaData[] = {
		{ "Category", "Document" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< The content or description of the document. */" },
#endif
		{ "ModuleRelativePath", "Public/Structs/IDFCollectibleStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< The content or description of the document." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DocumentID;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DocumentTitle;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DocumentContent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDocumentItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDocumentItem_Statics::NewProp_DocumentID = { "DocumentID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDocumentItem, DocumentID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DocumentID_MetaData), NewProp_DocumentID_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDocumentItem_Statics::NewProp_DocumentTitle = { "DocumentTitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDocumentItem, DocumentTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DocumentTitle_MetaData), NewProp_DocumentTitle_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDocumentItem_Statics::NewProp_DocumentContent = { "DocumentContent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDocumentItem, DocumentContent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DocumentContent_MetaData), NewProp_DocumentContent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDocumentItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDocumentItem_Statics::NewProp_DocumentID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDocumentItem_Statics::NewProp_DocumentTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDocumentItem_Statics::NewProp_DocumentContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocumentItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDocumentItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveDoorFramework,
	nullptr,
	&NewStructOps,
	"DocumentItem",
	Z_Construct_UScriptStruct_FDocumentItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocumentItem_Statics::PropPointers),
	sizeof(FDocumentItem),
	alignof(FDocumentItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocumentItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDocumentItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDocumentItem()
{
	if (!Z_Registration_Info_UScriptStruct_FDocumentItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDocumentItem.InnerSingleton, Z_Construct_UScriptStruct_FDocumentItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDocumentItem.InnerSingleton;
}
// ********** End ScriptStruct FDocumentItem *******************************************************

// ********** Begin ScriptStruct FKeyItem **********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FKeyItem;
class UScriptStruct* FKeyItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FKeyItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FKeyItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyItem, (UObject*)Z_Construct_UPackage__Script_InteractiveDoorFramework(), TEXT("KeyItem"));
	}
	return Z_Registration_Info_UScriptStruct_FKeyItem.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FKeyItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Represents a collectible key item.\n * @details These items can be used to unlock doors or trigger events.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Structs/IDFCollectibleStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Represents a collectible key item.\n@details These items can be used to unlock doors or trigger events." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyID_MetaData[] = {
		{ "Category", "Key" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< The unique identifier of the key item. */" },
#endif
		{ "ModuleRelativePath", "Public/Structs/IDFCollectibleStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< The unique identifier of the key item." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
		{ "Category", "Key" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< The name of the key item. */" },
#endif
		{ "ModuleRelativePath", "Public/Structs/IDFCollectibleStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< The name of the key item." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyDescription_MetaData[] = {
		{ "Category", "Key" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< The description of what this key is used for. */" },
#endif
		{ "ModuleRelativePath", "Public/Structs/IDFCollectibleStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< The description of what this key is used for." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorTargetSocket_MetaData[] = {
		{ "Category", "Key" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< The name of a socket of the skeletal mesh door. During unlock door animation, the KeyMesh will be instantiated and childed to the defined socket. */" },
#endif
		{ "ModuleRelativePath", "Public/Structs/IDFCollectibleStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< The name of a socket of the skeletal mesh door. During unlock door animation, the KeyMesh will be instantiated and childed to the defined socket." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyMesh_MetaData[] = {
		{ "Category", "Key" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**< Reference to the key mesh. A copy is instantiated and childed to DoorTargetSocket during the unlock door animation. can be used to visualize the key in the UI. */" },
#endif
		{ "ModuleRelativePath", "Public/Structs/IDFCollectibleStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< Reference to the key mesh. A copy is instantiated and childed to DoorTargetSocket during the unlock door animation. can be used to visualize the key in the UI." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyID;
	static const UECodeGen_Private::FTextPropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_KeyDescription;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DoorTargetSocket;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_KeyMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FKeyItem_Statics::NewProp_KeyID = { "KeyID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKeyItem, KeyID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyID_MetaData), NewProp_KeyID_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FKeyItem_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKeyItem, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName_MetaData), NewProp_KeyName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FKeyItem_Statics::NewProp_KeyDescription = { "KeyDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKeyItem, KeyDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyDescription_MetaData), NewProp_KeyDescription_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FKeyItem_Statics::NewProp_DoorTargetSocket = { "DoorTargetSocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKeyItem, DoorTargetSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorTargetSocket_MetaData), NewProp_DoorTargetSocket_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FKeyItem_Statics::NewProp_KeyMesh = { "KeyMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKeyItem, KeyMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyMesh_MetaData), NewProp_KeyMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeyItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyItem_Statics::NewProp_KeyID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyItem_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyItem_Statics::NewProp_KeyDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyItem_Statics::NewProp_DoorTargetSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyItem_Statics::NewProp_KeyMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveDoorFramework,
	nullptr,
	&NewStructOps,
	"KeyItem",
	Z_Construct_UScriptStruct_FKeyItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyItem_Statics::PropPointers),
	sizeof(FKeyItem),
	alignof(FKeyItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKeyItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKeyItem()
{
	if (!Z_Registration_Info_UScriptStruct_FKeyItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FKeyItem.InnerSingleton, Z_Construct_UScriptStruct_FKeyItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FKeyItem.InnerSingleton;
}
// ********** End ScriptStruct FKeyItem ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Structs_IDFCollectibleStructs_h__Script_InteractiveDoorFramework_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDocumentItem::StaticStruct, Z_Construct_UScriptStruct_FDocumentItem_Statics::NewStructOps, TEXT("DocumentItem"), &Z_Registration_Info_UScriptStruct_FDocumentItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDocumentItem), 1402808572U) },
		{ FKeyItem::StaticStruct, Z_Construct_UScriptStruct_FKeyItem_Statics::NewStructOps, TEXT("KeyItem"), &Z_Registration_Info_UScriptStruct_FKeyItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKeyItem), 3983273373U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Structs_IDFCollectibleStructs_h__Script_InteractiveDoorFramework_488348052(TEXT("/Script/InteractiveDoorFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Structs_IDFCollectibleStructs_h__Script_InteractiveDoorFramework_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_InteractiveDoorFramework_Plugins_InteractiveDoorFramework_Source_InteractiveDoorFramework_Public_Structs_IDFCollectibleStructs_h__Script_InteractiveDoorFramework_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
