// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UESettingsPlugin/Save/UESettingsData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUESettingsData() {}
// Cross Module References
	UESETTINGSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSettingsSaveStruct();
	UPackage* Z_Construct_UPackage__Script_UESettingsPlugin();
	UESETTINGSPLUGIN_API UClass* Z_Construct_UClass_UUESettingsData_NoRegister();
	UESETTINGSPLUGIN_API UClass* Z_Construct_UClass_UUESettingsData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FSettingsSaveStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UESETTINGSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FSettingsSaveStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSettingsSaveStruct, Z_Construct_UPackage__Script_UESettingsPlugin(), TEXT("SettingsSaveStruct"), sizeof(FSettingsSaveStruct), Get_Z_Construct_UScriptStruct_FSettingsSaveStruct_Hash());
	}
	return Singleton;
}
template<> UESETTINGSPLUGIN_API UScriptStruct* StaticStruct<FSettingsSaveStruct>()
{
	return FSettingsSaveStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSettingsSaveStruct(FSettingsSaveStruct::StaticStruct, TEXT("/Script/UESettingsPlugin"), TEXT("SettingsSaveStruct"), false, nullptr, nullptr);
static struct FScriptStruct_UESettingsPlugin_StaticRegisterNativesFSettingsSaveStruct
{
	FScriptStruct_UESettingsPlugin_StaticRegisterNativesFSettingsSaveStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SettingsSaveStruct")),new UScriptStruct::TCppStructOps<FSettingsSaveStruct>);
	}
} ScriptStruct_UESettingsPlugin_StaticRegisterNativesFSettingsSaveStruct;
	struct Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Difficulty_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Difficulty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Language;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitleLanguage_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SubtitleLanguage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtitles_MetaData[];
#endif
		static void NewProp_Subtitles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Subtitles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorBlindMode_MetaData[];
#endif
		static void NewProp_ColorBlindMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ColorBlindMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QualityPreset_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QualityPreset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Textures;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shadows_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Shadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Foliage_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Foliage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AAMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AAMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AAQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AAQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ViewDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ViewEffects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionBlur_MetaData[];
#endif
		static void NewProp_MotionBlur_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MotionBlur;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensFlares_MetaData[];
#endif
		static void NewProp_LensFlares_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LensFlares;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSReflections_MetaData[];
#endif
		static void NewProp_SSReflections_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SSReflections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bloom_MetaData[];
#endif
		static void NewProp_Bloom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Bloom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResolutionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResolutionScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Resolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DisplayMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gamma_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gamma;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VSynch_MetaData[];
#endif
		static void NewProp_VSynch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VSynch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Master_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Master;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Music_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Music;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Voices_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Voices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UI_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseInvertX_MetaData[];
#endif
		static void NewProp_MouseInvertX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MouseInvertX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseInvertY_MetaData[];
#endif
		static void NewProp_MouseInvertY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MouseInvertY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vibration_MetaData[];
#endif
		static void NewProp_Vibration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Vibration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSettingsSaveStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Difficulty_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "//Gameplay\n" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
		{ "ToolTip", "Gameplay" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Difficulty = { "Difficulty", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSettingsSaveStruct, Difficulty), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Difficulty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Difficulty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Language_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSettingsSaveStruct, Language), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Language_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_SubtitleLanguage_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_SubtitleLanguage = { "SubtitleLanguage", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSettingsSaveStruct, SubtitleLanguage), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_SubtitleLanguage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_SubtitleLanguage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Subtitles_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Subtitles_SetBit(void* Obj)
	{
		((FSettingsSaveStruct*)Obj)->Subtitles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Subtitles = { "Subtitles", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSettingsSaveStruct), &Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Subtitles_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Subtitles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Subtitles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_ColorBlindMode_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_ColorBlindMode_SetBit(void* Obj)
	{
		((FSettingsSaveStruct*)Obj)->ColorBlindMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_ColorBlindMode = { "ColorBlindMode", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSettingsSaveStruct), &Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_ColorBlindMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_ColorBlindMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_ColorBlindMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_QualityPreset_MetaData[] = {
		{ "Category", "Graphics" },
		{ "Comment", "//Graphics\n" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
		{ "ToolTip", "Graphics" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_QualityPreset = { "QualityPreset", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSettingsSaveStruct, QualityPreset), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_QualityPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_QualityPreset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Textures_MetaData[] = {
		{ "Category", "Graphics" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSettingsSaveStruct, Textures), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Textures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Textures_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Shadows_MetaData[] = {
		{ "Category", "Graphics" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Shadows = { "Shadows", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSettingsSaveStruct, Shadows), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Shadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Shadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Foliage_MetaData[] = {
		{ "Category", "Graphics" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Foliage = { "Foliage", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSettingsSaveStruct, Foliage), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Foliage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Foliage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_AAMethod_MetaData[] = {
		{ "Category", "Graphics" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_AAMethod = { "AAMethod", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSettingsSaveStruct, AAMethod), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_AAMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_AAMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_AAQuality_MetaData[] = {
		{ "Category", "Graphics" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_AAQuality = { "AAQuality", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSettingsSaveStruct, AAQuality), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_AAQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_AAQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_ViewDistance_MetaData[] = {
		{ "Category", "Graphics" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_ViewDistance = { "ViewDistance", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSettingsSaveStruct, ViewDistance), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_ViewDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_ViewDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_ViewEffects_MetaData[] = {
		{ "Category", "Graphics" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_ViewEffects = { "ViewEffects", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSettingsSaveStruct, ViewEffects), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_ViewEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_ViewEffects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_MotionBlur_MetaData[] = {
		{ "Category", "Graphics" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_MotionBlur_SetBit(void* Obj)
	{
		((FSettingsSaveStruct*)Obj)->MotionBlur = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_MotionBlur = { "MotionBlur", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSettingsSaveStruct), &Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_MotionBlur_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_MotionBlur_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_MotionBlur_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_LensFlares_MetaData[] = {
		{ "Category", "Graphics" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_LensFlares_SetBit(void* Obj)
	{
		((FSettingsSaveStruct*)Obj)->LensFlares = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_LensFlares = { "LensFlares", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSettingsSaveStruct), &Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_LensFlares_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_LensFlares_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_LensFlares_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_SSReflections_MetaData[] = {
		{ "Category", "Graphics" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_SSReflections_SetBit(void* Obj)
	{
		((FSettingsSaveStruct*)Obj)->SSReflections = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_SSReflections = { "SSReflections", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSettingsSaveStruct), &Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_SSReflections_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_SSReflections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_SSReflections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Bloom_MetaData[] = {
		{ "Category", "Graphics" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Bloom_SetBit(void* Obj)
	{
		((FSettingsSaveStruct*)Obj)->Bloom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Bloom = { "Bloom", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSettingsSaveStruct), &Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Bloom_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Bloom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Bloom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_ResolutionScale_MetaData[] = {
		{ "Category", "Graphics" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_ResolutionScale = { "ResolutionScale", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSettingsSaveStruct, ResolutionScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_ResolutionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_ResolutionScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "//Display\n" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
		{ "ToolTip", "Display" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSettingsSaveStruct, Resolution), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Resolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_DisplayMode_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_DisplayMode = { "DisplayMode", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSettingsSaveStruct, DisplayMode), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_DisplayMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_DisplayMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Gamma_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Gamma = { "Gamma", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSettingsSaveStruct, Gamma), METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Gamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Gamma_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_VSynch_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_VSynch_SetBit(void* Obj)
	{
		((FSettingsSaveStruct*)Obj)->VSynch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_VSynch = { "VSynch", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSettingsSaveStruct), &Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_VSynch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_VSynch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_VSynch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Master_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "//Audio\n" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
		{ "ToolTip", "Audio" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Master = { "Master", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSettingsSaveStruct, Master), METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Master_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Master_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Music_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Music = { "Music", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSettingsSaveStruct, Music), METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Music_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Music_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_SFX_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_SFX = { "SFX", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSettingsSaveStruct, SFX), METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_SFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_SFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Voices_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Voices = { "Voices", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSettingsSaveStruct, Voices), METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Voices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Voices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_UI_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_UI = { "UI", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSettingsSaveStruct, UI), METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_UI_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_UI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_MouseInvertX_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "//Controls\n" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
		{ "ToolTip", "Controls" },
	};
#endif
	void Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_MouseInvertX_SetBit(void* Obj)
	{
		((FSettingsSaveStruct*)Obj)->MouseInvertX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_MouseInvertX = { "MouseInvertX", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSettingsSaveStruct), &Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_MouseInvertX_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_MouseInvertX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_MouseInvertX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_MouseInvertY_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_MouseInvertY_SetBit(void* Obj)
	{
		((FSettingsSaveStruct*)Obj)->MouseInvertY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_MouseInvertY = { "MouseInvertY", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSettingsSaveStruct), &Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_MouseInvertY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_MouseInvertY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_MouseInvertY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Vibration_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Vibration_SetBit(void* Obj)
	{
		((FSettingsSaveStruct*)Obj)->Vibration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Vibration = { "Vibration", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSettingsSaveStruct), &Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Vibration_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Vibration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Vibration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_MouseSensitivity_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_MouseSensitivity = { "MouseSensitivity", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSettingsSaveStruct, MouseSensitivity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_MouseSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_MouseSensitivity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Difficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_SubtitleLanguage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Subtitles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_ColorBlindMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_QualityPreset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Textures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Shadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Foliage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_AAMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_AAQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_ViewDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_ViewEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_MotionBlur,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_LensFlares,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_SSReflections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Bloom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_ResolutionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Resolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_DisplayMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Gamma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_VSynch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Master,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Music,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_SFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Voices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_UI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_MouseInvertX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_MouseInvertY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_Vibration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::NewProp_MouseSensitivity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UESettingsPlugin,
		nullptr,
		&NewStructOps,
		"SettingsSaveStruct",
		sizeof(FSettingsSaveStruct),
		alignof(FSettingsSaveStruct),
		Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSettingsSaveStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSettingsSaveStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UESettingsPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SettingsSaveStruct"), sizeof(FSettingsSaveStruct), Get_Z_Construct_UScriptStruct_FSettingsSaveStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSettingsSaveStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSettingsSaveStruct_Hash() { return 3329446232U; }
	void UUESettingsData::StaticRegisterNativesUUESettingsData()
	{
	}
	UClass* Z_Construct_UClass_UUESettingsData_NoRegister()
	{
		return UUESettingsData::StaticClass();
	}
	struct Z_Construct_UClass_UUESettingsData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUESettingsData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UESettingsPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUESettingsData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Save/UESettingsData.h" },
		{ "ModuleRelativePath", "Save/UESettingsData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUESettingsData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUESettingsData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUESettingsData_Statics::ClassParams = {
		&UUESettingsData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUESettingsData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUESettingsData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUESettingsData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUESettingsData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUESettingsData, 3076439579);
	template<> UESETTINGSPLUGIN_API UClass* StaticClass<UUESettingsData>()
	{
		return UUESettingsData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUESettingsData(Z_Construct_UClass_UUESettingsData, &UUESettingsData::StaticClass, TEXT("/Script/UESettingsPlugin"), TEXT("UUESettingsData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUESettingsData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
