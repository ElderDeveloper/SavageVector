// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UESettingsPlugin/Subsystems/UESettingsPlayerSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUESettingsPlayerSubsystem() {}
// Cross Module References
	UESETTINGSPLUGIN_API UClass* Z_Construct_UClass_UUESettingsPlayerSubsystem_NoRegister();
	UESETTINGSPLUGIN_API UClass* Z_Construct_UClass_UUESettingsPlayerSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_UESettingsPlugin();
	UESETTINGSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSettingsSaveStruct();
// End Cross Module References
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetMouseSensitivity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MouseSensitivity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMouseSensitivity(Z_Param_MouseSensitivity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetUseVibration)
	{
		P_GET_UBOOL(Z_Param_Vibration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseVibration(Z_Param_Vibration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetMouseInvertY)
	{
		P_GET_UBOOL(Z_Param_InvertY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMouseInvertY(Z_Param_InvertY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetMouseInvertX)
	{
		P_GET_UBOOL(Z_Param_InvertX);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMouseInvertX(Z_Param_InvertX);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetAudioUI)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_UI);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAudioUI(Z_Param_UI);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetAudioVoices)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Voices);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAudioVoices(Z_Param_Voices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetAudioSFX)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_SFX);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAudioSFX(Z_Param_SFX);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetAudioMusic)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Music);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAudioMusic(Z_Param_Music);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetAudioMaster)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Master);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAudioMaster(Z_Param_Master);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetVSynch)
	{
		P_GET_UBOOL(Z_Param_VSynch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVSynch(Z_Param_VSynch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetGamma)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gamma);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGamma(Z_Param_Gamma);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetDisplayMode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DisplayMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisplayMode(Z_Param_DisplayMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetResolution)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Resolution);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetResolution(Z_Param_Resolution);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetResolutionScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ResolutionScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetResolutionScale(Z_Param_ResolutionScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetBloom)
	{
		P_GET_UBOOL(Z_Param_Bloom);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBloom(Z_Param_Bloom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetSSReflections)
	{
		P_GET_UBOOL(Z_Param_SSReflection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSSReflections(Z_Param_SSReflection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetLensFlares)
	{
		P_GET_UBOOL(Z_Param_LensFlares);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLensFlares(Z_Param_LensFlares);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetMotionBlur)
	{
		P_GET_UBOOL(Z_Param_MotionBlur);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMotionBlur(Z_Param_MotionBlur);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetViewEffectsQuality)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ViewEffects);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetViewEffectsQuality(Z_Param_ViewEffects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetViewDistance)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ViewDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetViewDistance(Z_Param_ViewDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetAAQuality)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AAQuality);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAAQuality(Z_Param_AAQuality);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetAAMethod)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AAMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAAMethod(Z_Param_AAMethod);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetFoliageQuality)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Foliage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFoliageQuality(Z_Param_Foliage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetShadowsQuality)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Shadows);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShadowsQuality(Z_Param_Shadows);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetTexturesQuality)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Textures);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTexturesQuality(Z_Param_Textures);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetQualityPreset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_QualityPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetQualityPreset(Z_Param_QualityPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetUseColorBlindMode)
	{
		P_GET_UBOOL(Z_Param_ColorBlindMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseColorBlindMode(Z_Param_ColorBlindMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetUseSubtitles)
	{
		P_GET_UBOOL(Z_Param_Subtitles);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseSubtitles(Z_Param_Subtitles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetSubtitleLanguage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SubtitleLanguage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubtitleLanguage(Z_Param_SubtitleLanguage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetLanguage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Language);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLanguage(Z_Param_Language);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execSetDifficulty)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Difficulty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDifficulty(Z_Param_Difficulty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetUseVibration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetUseVibration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetMouseSensitivity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMouseSensitivity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetMouseInvertY)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMouseInvertY();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetMouseInvertX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMouseInvertX();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetAudioUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAudioUI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetAudioVoices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAudioVoices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetAudioSFX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAudioSFX();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetAudioMusic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAudioMusic();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetAudioMaster)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAudioMaster();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetVSynch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVSynch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetGamma)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGamma();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetDisplayMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDisplayMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetResolution)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetResolution();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetResolutionScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetResolutionScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetBloom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBloom();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetSSReflections)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSSReflections();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetLensFlares)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLensFlares();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetMotionBlur)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMotionBlur();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetViewEffectsQuality)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetViewEffectsQuality();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetViewDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetViewDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetAAQuality)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAAQuality();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetAAMethod)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAAMethod();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetFoliageQuality)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFoliageQuality();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetShadowQuality)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetShadowQuality();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetTextureQuality)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTextureQuality();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetQualityPreset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetQualityPreset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetColorBlindMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetColorBlindMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetSubtitles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSubtitles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetSubtitleLanguage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSubtitleLanguage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetLanguage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLanguage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPlayerSubsystem::execGetDifficulty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDifficulty();
		P_NATIVE_END;
	}
	void UUESettingsPlayerSubsystem::StaticRegisterNativesUUESettingsPlayerSubsystem()
	{
		UClass* Class = UUESettingsPlayerSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAAMethod", &UUESettingsPlayerSubsystem::execGetAAMethod },
			{ "GetAAQuality", &UUESettingsPlayerSubsystem::execGetAAQuality },
			{ "GetAudioMaster", &UUESettingsPlayerSubsystem::execGetAudioMaster },
			{ "GetAudioMusic", &UUESettingsPlayerSubsystem::execGetAudioMusic },
			{ "GetAudioSFX", &UUESettingsPlayerSubsystem::execGetAudioSFX },
			{ "GetAudioUI", &UUESettingsPlayerSubsystem::execGetAudioUI },
			{ "GetAudioVoices", &UUESettingsPlayerSubsystem::execGetAudioVoices },
			{ "GetBloom", &UUESettingsPlayerSubsystem::execGetBloom },
			{ "GetColorBlindMode", &UUESettingsPlayerSubsystem::execGetColorBlindMode },
			{ "GetDifficulty", &UUESettingsPlayerSubsystem::execGetDifficulty },
			{ "GetDisplayMode", &UUESettingsPlayerSubsystem::execGetDisplayMode },
			{ "GetFoliageQuality", &UUESettingsPlayerSubsystem::execGetFoliageQuality },
			{ "GetGamma", &UUESettingsPlayerSubsystem::execGetGamma },
			{ "GetLanguage", &UUESettingsPlayerSubsystem::execGetLanguage },
			{ "GetLensFlares", &UUESettingsPlayerSubsystem::execGetLensFlares },
			{ "GetMotionBlur", &UUESettingsPlayerSubsystem::execGetMotionBlur },
			{ "GetMouseInvertX", &UUESettingsPlayerSubsystem::execGetMouseInvertX },
			{ "GetMouseInvertY", &UUESettingsPlayerSubsystem::execGetMouseInvertY },
			{ "GetMouseSensitivity", &UUESettingsPlayerSubsystem::execGetMouseSensitivity },
			{ "GetQualityPreset", &UUESettingsPlayerSubsystem::execGetQualityPreset },
			{ "GetResolution", &UUESettingsPlayerSubsystem::execGetResolution },
			{ "GetResolutionScale", &UUESettingsPlayerSubsystem::execGetResolutionScale },
			{ "GetShadowQuality", &UUESettingsPlayerSubsystem::execGetShadowQuality },
			{ "GetSSReflections", &UUESettingsPlayerSubsystem::execGetSSReflections },
			{ "GetSubtitleLanguage", &UUESettingsPlayerSubsystem::execGetSubtitleLanguage },
			{ "GetSubtitles", &UUESettingsPlayerSubsystem::execGetSubtitles },
			{ "GetTextureQuality", &UUESettingsPlayerSubsystem::execGetTextureQuality },
			{ "GetUseVibration", &UUESettingsPlayerSubsystem::execGetUseVibration },
			{ "GetViewDistance", &UUESettingsPlayerSubsystem::execGetViewDistance },
			{ "GetViewEffectsQuality", &UUESettingsPlayerSubsystem::execGetViewEffectsQuality },
			{ "GetVSynch", &UUESettingsPlayerSubsystem::execGetVSynch },
			{ "SetAAMethod", &UUESettingsPlayerSubsystem::execSetAAMethod },
			{ "SetAAQuality", &UUESettingsPlayerSubsystem::execSetAAQuality },
			{ "SetAudioMaster", &UUESettingsPlayerSubsystem::execSetAudioMaster },
			{ "SetAudioMusic", &UUESettingsPlayerSubsystem::execSetAudioMusic },
			{ "SetAudioSFX", &UUESettingsPlayerSubsystem::execSetAudioSFX },
			{ "SetAudioUI", &UUESettingsPlayerSubsystem::execSetAudioUI },
			{ "SetAudioVoices", &UUESettingsPlayerSubsystem::execSetAudioVoices },
			{ "SetBloom", &UUESettingsPlayerSubsystem::execSetBloom },
			{ "SetDifficulty", &UUESettingsPlayerSubsystem::execSetDifficulty },
			{ "SetDisplayMode", &UUESettingsPlayerSubsystem::execSetDisplayMode },
			{ "SetFoliageQuality", &UUESettingsPlayerSubsystem::execSetFoliageQuality },
			{ "SetGamma", &UUESettingsPlayerSubsystem::execSetGamma },
			{ "SetLanguage", &UUESettingsPlayerSubsystem::execSetLanguage },
			{ "SetLensFlares", &UUESettingsPlayerSubsystem::execSetLensFlares },
			{ "SetMotionBlur", &UUESettingsPlayerSubsystem::execSetMotionBlur },
			{ "SetMouseInvertX", &UUESettingsPlayerSubsystem::execSetMouseInvertX },
			{ "SetMouseInvertY", &UUESettingsPlayerSubsystem::execSetMouseInvertY },
			{ "SetMouseSensitivity", &UUESettingsPlayerSubsystem::execSetMouseSensitivity },
			{ "SetQualityPreset", &UUESettingsPlayerSubsystem::execSetQualityPreset },
			{ "SetResolution", &UUESettingsPlayerSubsystem::execSetResolution },
			{ "SetResolutionScale", &UUESettingsPlayerSubsystem::execSetResolutionScale },
			{ "SetShadowsQuality", &UUESettingsPlayerSubsystem::execSetShadowsQuality },
			{ "SetSSReflections", &UUESettingsPlayerSubsystem::execSetSSReflections },
			{ "SetSubtitleLanguage", &UUESettingsPlayerSubsystem::execSetSubtitleLanguage },
			{ "SetTexturesQuality", &UUESettingsPlayerSubsystem::execSetTexturesQuality },
			{ "SetUseColorBlindMode", &UUESettingsPlayerSubsystem::execSetUseColorBlindMode },
			{ "SetUseSubtitles", &UUESettingsPlayerSubsystem::execSetUseSubtitles },
			{ "SetUseVibration", &UUESettingsPlayerSubsystem::execSetUseVibration },
			{ "SetViewDistance", &UUESettingsPlayerSubsystem::execSetViewDistance },
			{ "SetViewEffectsQuality", &UUESettingsPlayerSubsystem::execSetViewEffectsQuality },
			{ "SetVSynch", &UUESettingsPlayerSubsystem::execSetVSynch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAAMethod_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetAAMethod_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAAMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventGetAAMethod_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAAMethod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAAMethod_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAAMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Graphics" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAAMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetAAMethod", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetAAMethod_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAAMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAAMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAAMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAAMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAAMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAAMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAAQuality_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetAAQuality_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAAQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventGetAAQuality_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAAQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAAQuality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAAQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Graphics" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAAQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetAAQuality", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetAAQuality_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAAQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAAQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAAQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAAQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAAQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAAQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioMaster_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetAudioMaster_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioMaster_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventGetAudioMaster_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioMaster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioMaster_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioMaster_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Audio" },
		{ "Comment", "//Audio\n" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
		{ "ToolTip", "Audio" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioMaster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetAudioMaster", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetAudioMaster_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioMaster_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioMaster_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioMaster_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioMaster_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioMaster()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioMaster_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioMusic_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetAudioMusic_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioMusic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventGetAudioMusic_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioMusic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioMusic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioMusic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Audio" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioMusic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetAudioMusic", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetAudioMusic_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioMusic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioMusic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioMusic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioMusic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioMusic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioMusic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioSFX_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetAudioSFX_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioSFX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventGetAudioSFX_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioSFX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioSFX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioSFX_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Audio" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetAudioSFX", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetAudioSFX_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioSFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioSFX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioSFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioSFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioSFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioSFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioUI_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetAudioUI_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventGetAudioUI_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Audio" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetAudioUI", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetAudioUI_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioVoices_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetAudioVoices_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioVoices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventGetAudioVoices_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioVoices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioVoices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioVoices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Audio" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioVoices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetAudioVoices", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetAudioVoices_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioVoices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioVoices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioVoices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioVoices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioVoices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioVoices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetBloom_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetBloom_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetBloom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UESettingsPlayerSubsystem_eventGetBloom_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetBloom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPlayerSubsystem_eventGetBloom_Parms), &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetBloom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetBloom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetBloom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetBloom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Graphics" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetBloom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetBloom", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetBloom_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetBloom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetBloom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetBloom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetBloom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetBloom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetBloom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetColorBlindMode_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetColorBlindMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetColorBlindMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UESettingsPlayerSubsystem_eventGetColorBlindMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetColorBlindMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPlayerSubsystem_eventGetColorBlindMode_Parms), &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetColorBlindMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetColorBlindMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetColorBlindMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetColorBlindMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Graphics" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetColorBlindMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetColorBlindMode", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetColorBlindMode_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetColorBlindMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetColorBlindMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetColorBlindMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetColorBlindMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetColorBlindMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetColorBlindMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetDifficulty_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetDifficulty_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetDifficulty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventGetDifficulty_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetDifficulty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetDifficulty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetDifficulty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Graphics" },
		{ "Comment", "//Gameplay\n" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
		{ "ToolTip", "Gameplay" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetDifficulty", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetDifficulty_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetDifficulty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetDifficulty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetDifficulty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetDifficulty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetDifficulty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetDisplayMode_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetDisplayMode_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetDisplayMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventGetDisplayMode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetDisplayMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetDisplayMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetDisplayMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Display" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetDisplayMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetDisplayMode", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetDisplayMode_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetDisplayMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetDisplayMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetDisplayMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetDisplayMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetDisplayMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetDisplayMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetFoliageQuality_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetFoliageQuality_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetFoliageQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventGetFoliageQuality_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetFoliageQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetFoliageQuality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetFoliageQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Graphics" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetFoliageQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetFoliageQuality", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetFoliageQuality_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetFoliageQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetFoliageQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetFoliageQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetFoliageQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetFoliageQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetFoliageQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetGamma_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetGamma_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetGamma_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventGetGamma_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetGamma_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetGamma_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetGamma_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Display" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetGamma_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetGamma", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetGamma_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetGamma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetGamma_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetGamma_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetGamma_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetGamma()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetGamma_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetLanguage_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetLanguage_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventGetLanguage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetLanguage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetLanguage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetLanguage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Graphics" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetLanguage", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetLanguage_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetLensFlares_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetLensFlares_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetLensFlares_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UESettingsPlayerSubsystem_eventGetLensFlares_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetLensFlares_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPlayerSubsystem_eventGetLensFlares_Parms), &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetLensFlares_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetLensFlares_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetLensFlares_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetLensFlares_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Graphics" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetLensFlares_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetLensFlares", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetLensFlares_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetLensFlares_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetLensFlares_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetLensFlares_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetLensFlares_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetLensFlares()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetLensFlares_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMotionBlur_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetMotionBlur_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMotionBlur_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UESettingsPlayerSubsystem_eventGetMotionBlur_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMotionBlur_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPlayerSubsystem_eventGetMotionBlur_Parms), &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMotionBlur_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMotionBlur_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMotionBlur_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMotionBlur_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Graphics" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMotionBlur_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetMotionBlur", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetMotionBlur_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMotionBlur_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMotionBlur_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMotionBlur_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMotionBlur_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMotionBlur()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMotionBlur_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseInvertX_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetMouseInvertX_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseInvertX_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UESettingsPlayerSubsystem_eventGetMouseInvertX_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseInvertX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPlayerSubsystem_eventGetMouseInvertX_Parms), &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseInvertX_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseInvertX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseInvertX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseInvertX_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Controls" },
		{ "Comment", "//Controls\n" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
		{ "ToolTip", "Controls" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseInvertX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetMouseInvertX", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetMouseInvertX_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseInvertX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseInvertX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseInvertX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseInvertX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseInvertX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseInvertX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseInvertY_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetMouseInvertY_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseInvertY_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UESettingsPlayerSubsystem_eventGetMouseInvertY_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseInvertY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPlayerSubsystem_eventGetMouseInvertY_Parms), &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseInvertY_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseInvertY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseInvertY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseInvertY_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Controls" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseInvertY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetMouseInvertY", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetMouseInvertY_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseInvertY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseInvertY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseInvertY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseInvertY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseInvertY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseInvertY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseSensitivity_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetMouseSensitivity_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseSensitivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventGetMouseSensitivity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseSensitivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseSensitivity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseSensitivity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Controls" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetMouseSensitivity", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetMouseSensitivity_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseSensitivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseSensitivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseSensitivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseSensitivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseSensitivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetQualityPreset_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetQualityPreset_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetQualityPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventGetQualityPreset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetQualityPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetQualityPreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetQualityPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Graphics" },
		{ "Comment", "//Graphics\n" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
		{ "ToolTip", "Graphics" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetQualityPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetQualityPreset", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetQualityPreset_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetQualityPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetQualityPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetQualityPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetQualityPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetQualityPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetQualityPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetResolution_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetResolution_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventGetResolution_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetResolution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetResolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Display" },
		{ "Comment", "//Display\n" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
		{ "ToolTip", "Display" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetResolution", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetResolution_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetResolutionScale_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetResolutionScale_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetResolutionScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventGetResolutionScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetResolutionScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetResolutionScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetResolutionScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Graphics" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetResolutionScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetResolutionScale", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetResolutionScale_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetResolutionScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetResolutionScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetResolutionScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetResolutionScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetResolutionScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetResolutionScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetShadowQuality_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetShadowQuality_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetShadowQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventGetShadowQuality_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetShadowQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetShadowQuality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetShadowQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Graphics" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetShadowQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetShadowQuality", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetShadowQuality_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetShadowQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetShadowQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetShadowQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetShadowQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetShadowQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetShadowQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSSReflections_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetSSReflections_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSSReflections_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UESettingsPlayerSubsystem_eventGetSSReflections_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSSReflections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPlayerSubsystem_eventGetSSReflections_Parms), &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSSReflections_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSSReflections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSSReflections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSSReflections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Graphics" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSSReflections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetSSReflections", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetSSReflections_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSSReflections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSSReflections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSSReflections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSSReflections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSSReflections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSSReflections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSubtitleLanguage_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetSubtitleLanguage_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSubtitleLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventGetSubtitleLanguage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSubtitleLanguage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSubtitleLanguage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSubtitleLanguage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Graphics" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSubtitleLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetSubtitleLanguage", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetSubtitleLanguage_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSubtitleLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSubtitleLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSubtitleLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSubtitleLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSubtitleLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSubtitleLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSubtitles_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetSubtitles_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSubtitles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UESettingsPlayerSubsystem_eventGetSubtitles_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSubtitles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPlayerSubsystem_eventGetSubtitles_Parms), &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSubtitles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSubtitles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSubtitles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSubtitles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Graphics" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSubtitles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetSubtitles", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetSubtitles_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSubtitles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSubtitles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSubtitles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSubtitles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSubtitles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSubtitles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetTextureQuality_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetTextureQuality_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetTextureQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventGetTextureQuality_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetTextureQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetTextureQuality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetTextureQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Graphics" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetTextureQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetTextureQuality", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetTextureQuality_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetTextureQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetTextureQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetTextureQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetTextureQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetTextureQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetTextureQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetUseVibration_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetUseVibration_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetUseVibration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventGetUseVibration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetUseVibration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetUseVibration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetUseVibration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Controls" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetUseVibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetUseVibration", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetUseVibration_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetUseVibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetUseVibration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetUseVibration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetUseVibration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetUseVibration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetUseVibration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetViewDistance_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetViewDistance_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetViewDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventGetViewDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetViewDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetViewDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetViewDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Graphics" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetViewDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetViewDistance", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetViewDistance_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetViewDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetViewDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetViewDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetViewDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetViewDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetViewDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetViewEffectsQuality_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetViewEffectsQuality_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetViewEffectsQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventGetViewEffectsQuality_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetViewEffectsQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetViewEffectsQuality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetViewEffectsQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Graphics" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetViewEffectsQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetViewEffectsQuality", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetViewEffectsQuality_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetViewEffectsQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetViewEffectsQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetViewEffectsQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetViewEffectsQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetViewEffectsQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetViewEffectsQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetVSynch_Statics
	{
		struct UESettingsPlayerSubsystem_eventGetVSynch_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetVSynch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UESettingsPlayerSubsystem_eventGetVSynch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetVSynch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPlayerSubsystem_eventGetVSynch_Parms), &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetVSynch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetVSynch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetVSynch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetVSynch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Get Settings|Display" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetVSynch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "GetVSynch", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventGetVSynch_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetVSynch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetVSynch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetVSynch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetVSynch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetVSynch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetVSynch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAAMethod_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetAAMethod_Parms
		{
			int32 AAMethod;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AAMethod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAAMethod_Statics::NewProp_AAMethod = { "AAMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventSetAAMethod_Parms, AAMethod), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAAMethod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAAMethod_Statics::NewProp_AAMethod,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAAMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Graphics" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAAMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetAAMethod", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetAAMethod_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAAMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAAMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAAMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAAMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAAMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAAMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAAQuality_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetAAQuality_Parms
		{
			int32 AAQuality;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AAQuality;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAAQuality_Statics::NewProp_AAQuality = { "AAQuality", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventSetAAQuality_Parms, AAQuality), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAAQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAAQuality_Statics::NewProp_AAQuality,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAAQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Graphics" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAAQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetAAQuality", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetAAQuality_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAAQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAAQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAAQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAAQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAAQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAAQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioMaster_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetAudioMaster_Parms
		{
			float Master;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Master;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioMaster_Statics::NewProp_Master = { "Master", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventSetAudioMaster_Parms, Master), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioMaster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioMaster_Statics::NewProp_Master,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioMaster_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Audio" },
		{ "Comment", "//Audio\n" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
		{ "ToolTip", "Audio" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioMaster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetAudioMaster", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetAudioMaster_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioMaster_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioMaster_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioMaster_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioMaster_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioMaster()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioMaster_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioMusic_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetAudioMusic_Parms
		{
			float Music;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Music;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioMusic_Statics::NewProp_Music = { "Music", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventSetAudioMusic_Parms, Music), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioMusic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioMusic_Statics::NewProp_Music,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioMusic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Audio" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioMusic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetAudioMusic", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetAudioMusic_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioMusic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioMusic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioMusic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioMusic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioMusic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioMusic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioSFX_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetAudioSFX_Parms
		{
			float SFX;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SFX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioSFX_Statics::NewProp_SFX = { "SFX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventSetAudioSFX_Parms, SFX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioSFX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioSFX_Statics::NewProp_SFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioSFX_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Audio" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetAudioSFX", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetAudioSFX_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioSFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioSFX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioSFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioSFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioSFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioSFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioUI_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetAudioUI_Parms
		{
			float UI;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioUI_Statics::NewProp_UI = { "UI", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventSetAudioUI_Parms, UI), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioUI_Statics::NewProp_UI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Audio" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetAudioUI", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetAudioUI_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioVoices_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetAudioVoices_Parms
		{
			float Voices;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Voices;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioVoices_Statics::NewProp_Voices = { "Voices", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventSetAudioVoices_Parms, Voices), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioVoices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioVoices_Statics::NewProp_Voices,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioVoices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Audio" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioVoices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetAudioVoices", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetAudioVoices_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioVoices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioVoices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioVoices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioVoices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioVoices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioVoices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetBloom_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetBloom_Parms
		{
			bool Bloom;
		};
		static void NewProp_Bloom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Bloom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetBloom_Statics::NewProp_Bloom_SetBit(void* Obj)
	{
		((UESettingsPlayerSubsystem_eventSetBloom_Parms*)Obj)->Bloom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetBloom_Statics::NewProp_Bloom = { "Bloom", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPlayerSubsystem_eventSetBloom_Parms), &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetBloom_Statics::NewProp_Bloom_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetBloom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetBloom_Statics::NewProp_Bloom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetBloom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Graphics" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetBloom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetBloom", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetBloom_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetBloom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetBloom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetBloom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetBloom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetBloom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetBloom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetDifficulty_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetDifficulty_Parms
		{
			int32 Difficulty;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Difficulty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetDifficulty_Statics::NewProp_Difficulty = { "Difficulty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventSetDifficulty_Parms, Difficulty), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetDifficulty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetDifficulty_Statics::NewProp_Difficulty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetDifficulty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Gameplay" },
		{ "Comment", "//Gameplay\n" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
		{ "ToolTip", "Gameplay" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetDifficulty", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetDifficulty_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetDifficulty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetDifficulty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetDifficulty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetDifficulty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetDifficulty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetDisplayMode_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetDisplayMode_Parms
		{
			int32 DisplayMode;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DisplayMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetDisplayMode_Statics::NewProp_DisplayMode = { "DisplayMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventSetDisplayMode_Parms, DisplayMode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetDisplayMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetDisplayMode_Statics::NewProp_DisplayMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetDisplayMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Display" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetDisplayMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetDisplayMode", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetDisplayMode_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetDisplayMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetDisplayMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetDisplayMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetDisplayMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetDisplayMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetDisplayMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetFoliageQuality_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetFoliageQuality_Parms
		{
			int32 Foliage;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Foliage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetFoliageQuality_Statics::NewProp_Foliage = { "Foliage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventSetFoliageQuality_Parms, Foliage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetFoliageQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetFoliageQuality_Statics::NewProp_Foliage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetFoliageQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Graphics" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetFoliageQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetFoliageQuality", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetFoliageQuality_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetFoliageQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetFoliageQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetFoliageQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetFoliageQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetFoliageQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetFoliageQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetGamma_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetGamma_Parms
		{
			float Gamma;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gamma;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetGamma_Statics::NewProp_Gamma = { "Gamma", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventSetGamma_Parms, Gamma), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetGamma_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetGamma_Statics::NewProp_Gamma,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetGamma_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Display" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetGamma_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetGamma", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetGamma_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetGamma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetGamma_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetGamma_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetGamma_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetGamma()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetGamma_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetLanguage_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetLanguage_Parms
		{
			int32 Language;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Language;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetLanguage_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventSetLanguage_Parms, Language), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetLanguage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetLanguage_Statics::NewProp_Language,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetLanguage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Gameplay" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetLanguage", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetLanguage_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetLensFlares_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetLensFlares_Parms
		{
			bool LensFlares;
		};
		static void NewProp_LensFlares_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LensFlares;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetLensFlares_Statics::NewProp_LensFlares_SetBit(void* Obj)
	{
		((UESettingsPlayerSubsystem_eventSetLensFlares_Parms*)Obj)->LensFlares = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetLensFlares_Statics::NewProp_LensFlares = { "LensFlares", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPlayerSubsystem_eventSetLensFlares_Parms), &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetLensFlares_Statics::NewProp_LensFlares_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetLensFlares_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetLensFlares_Statics::NewProp_LensFlares,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetLensFlares_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Graphics" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetLensFlares_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetLensFlares", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetLensFlares_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetLensFlares_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetLensFlares_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetLensFlares_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetLensFlares_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetLensFlares()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetLensFlares_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMotionBlur_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetMotionBlur_Parms
		{
			bool MotionBlur;
		};
		static void NewProp_MotionBlur_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MotionBlur;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMotionBlur_Statics::NewProp_MotionBlur_SetBit(void* Obj)
	{
		((UESettingsPlayerSubsystem_eventSetMotionBlur_Parms*)Obj)->MotionBlur = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMotionBlur_Statics::NewProp_MotionBlur = { "MotionBlur", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPlayerSubsystem_eventSetMotionBlur_Parms), &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMotionBlur_Statics::NewProp_MotionBlur_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMotionBlur_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMotionBlur_Statics::NewProp_MotionBlur,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMotionBlur_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Graphics" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMotionBlur_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetMotionBlur", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetMotionBlur_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMotionBlur_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMotionBlur_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMotionBlur_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMotionBlur_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMotionBlur()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMotionBlur_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseInvertX_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetMouseInvertX_Parms
		{
			bool InvertX;
		};
		static void NewProp_InvertX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseInvertX_Statics::NewProp_InvertX_SetBit(void* Obj)
	{
		((UESettingsPlayerSubsystem_eventSetMouseInvertX_Parms*)Obj)->InvertX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseInvertX_Statics::NewProp_InvertX = { "InvertX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPlayerSubsystem_eventSetMouseInvertX_Parms), &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseInvertX_Statics::NewProp_InvertX_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseInvertX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseInvertX_Statics::NewProp_InvertX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseInvertX_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Controls" },
		{ "Comment", "//Controls\n" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
		{ "ToolTip", "Controls" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseInvertX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetMouseInvertX", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetMouseInvertX_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseInvertX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseInvertX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseInvertX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseInvertX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseInvertX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseInvertX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseInvertY_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetMouseInvertY_Parms
		{
			bool InvertY;
		};
		static void NewProp_InvertY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseInvertY_Statics::NewProp_InvertY_SetBit(void* Obj)
	{
		((UESettingsPlayerSubsystem_eventSetMouseInvertY_Parms*)Obj)->InvertY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseInvertY_Statics::NewProp_InvertY = { "InvertY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPlayerSubsystem_eventSetMouseInvertY_Parms), &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseInvertY_Statics::NewProp_InvertY_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseInvertY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseInvertY_Statics::NewProp_InvertY,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseInvertY_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Controls" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseInvertY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetMouseInvertY", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetMouseInvertY_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseInvertY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseInvertY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseInvertY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseInvertY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseInvertY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseInvertY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseSensitivity_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetMouseSensitivity_Parms
		{
			float MouseSensitivity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseSensitivity_Statics::NewProp_MouseSensitivity = { "MouseSensitivity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventSetMouseSensitivity_Parms, MouseSensitivity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseSensitivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseSensitivity_Statics::NewProp_MouseSensitivity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseSensitivity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Controls" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetMouseSensitivity", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetMouseSensitivity_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseSensitivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseSensitivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseSensitivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseSensitivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseSensitivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetQualityPreset_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetQualityPreset_Parms
		{
			int32 QualityPreset;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QualityPreset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetQualityPreset_Statics::NewProp_QualityPreset = { "QualityPreset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventSetQualityPreset_Parms, QualityPreset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetQualityPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetQualityPreset_Statics::NewProp_QualityPreset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetQualityPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Graphics" },
		{ "Comment", "//Graphics\n" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
		{ "ToolTip", "Graphics" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetQualityPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetQualityPreset", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetQualityPreset_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetQualityPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetQualityPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetQualityPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetQualityPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetQualityPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetQualityPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetResolution_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetResolution_Parms
		{
			int32 Resolution;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Resolution;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetResolution_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventSetResolution_Parms, Resolution), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetResolution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetResolution_Statics::NewProp_Resolution,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Display" },
		{ "Comment", "//Display\n" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
		{ "ToolTip", "Display" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetResolution", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetResolution_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetResolutionScale_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetResolutionScale_Parms
		{
			float ResolutionScale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResolutionScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetResolutionScale_Statics::NewProp_ResolutionScale = { "ResolutionScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventSetResolutionScale_Parms, ResolutionScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetResolutionScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetResolutionScale_Statics::NewProp_ResolutionScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetResolutionScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Graphics" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetResolutionScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetResolutionScale", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetResolutionScale_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetResolutionScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetResolutionScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetResolutionScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetResolutionScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetResolutionScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetResolutionScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetShadowsQuality_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetShadowsQuality_Parms
		{
			int32 Shadows;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Shadows;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetShadowsQuality_Statics::NewProp_Shadows = { "Shadows", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventSetShadowsQuality_Parms, Shadows), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetShadowsQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetShadowsQuality_Statics::NewProp_Shadows,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetShadowsQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Graphics" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetShadowsQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetShadowsQuality", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetShadowsQuality_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetShadowsQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetShadowsQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetShadowsQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetShadowsQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetShadowsQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetShadowsQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetSSReflections_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetSSReflections_Parms
		{
			bool SSReflection;
		};
		static void NewProp_SSReflection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SSReflection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetSSReflections_Statics::NewProp_SSReflection_SetBit(void* Obj)
	{
		((UESettingsPlayerSubsystem_eventSetSSReflections_Parms*)Obj)->SSReflection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetSSReflections_Statics::NewProp_SSReflection = { "SSReflection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPlayerSubsystem_eventSetSSReflections_Parms), &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetSSReflections_Statics::NewProp_SSReflection_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetSSReflections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetSSReflections_Statics::NewProp_SSReflection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetSSReflections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Graphics" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetSSReflections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetSSReflections", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetSSReflections_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetSSReflections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetSSReflections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetSSReflections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetSSReflections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetSSReflections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetSSReflections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetSubtitleLanguage_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetSubtitleLanguage_Parms
		{
			int32 SubtitleLanguage;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubtitleLanguage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetSubtitleLanguage_Statics::NewProp_SubtitleLanguage = { "SubtitleLanguage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventSetSubtitleLanguage_Parms, SubtitleLanguage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetSubtitleLanguage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetSubtitleLanguage_Statics::NewProp_SubtitleLanguage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetSubtitleLanguage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Gameplay" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetSubtitleLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetSubtitleLanguage", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetSubtitleLanguage_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetSubtitleLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetSubtitleLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetSubtitleLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetSubtitleLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetSubtitleLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetSubtitleLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetTexturesQuality_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetTexturesQuality_Parms
		{
			int32 Textures;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Textures;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetTexturesQuality_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventSetTexturesQuality_Parms, Textures), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetTexturesQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetTexturesQuality_Statics::NewProp_Textures,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetTexturesQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Graphics" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetTexturesQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetTexturesQuality", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetTexturesQuality_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetTexturesQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetTexturesQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetTexturesQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetTexturesQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetTexturesQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetTexturesQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseColorBlindMode_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetUseColorBlindMode_Parms
		{
			bool ColorBlindMode;
		};
		static void NewProp_ColorBlindMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ColorBlindMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseColorBlindMode_Statics::NewProp_ColorBlindMode_SetBit(void* Obj)
	{
		((UESettingsPlayerSubsystem_eventSetUseColorBlindMode_Parms*)Obj)->ColorBlindMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseColorBlindMode_Statics::NewProp_ColorBlindMode = { "ColorBlindMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPlayerSubsystem_eventSetUseColorBlindMode_Parms), &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseColorBlindMode_Statics::NewProp_ColorBlindMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseColorBlindMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseColorBlindMode_Statics::NewProp_ColorBlindMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseColorBlindMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Gameplay" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseColorBlindMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetUseColorBlindMode", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetUseColorBlindMode_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseColorBlindMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseColorBlindMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseColorBlindMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseColorBlindMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseColorBlindMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseColorBlindMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseSubtitles_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetUseSubtitles_Parms
		{
			bool Subtitles;
		};
		static void NewProp_Subtitles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Subtitles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseSubtitles_Statics::NewProp_Subtitles_SetBit(void* Obj)
	{
		((UESettingsPlayerSubsystem_eventSetUseSubtitles_Parms*)Obj)->Subtitles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseSubtitles_Statics::NewProp_Subtitles = { "Subtitles", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPlayerSubsystem_eventSetUseSubtitles_Parms), &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseSubtitles_Statics::NewProp_Subtitles_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseSubtitles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseSubtitles_Statics::NewProp_Subtitles,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseSubtitles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Gameplay" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseSubtitles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetUseSubtitles", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetUseSubtitles_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseSubtitles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseSubtitles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseSubtitles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseSubtitles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseSubtitles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseSubtitles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseVibration_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetUseVibration_Parms
		{
			bool Vibration;
		};
		static void NewProp_Vibration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Vibration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseVibration_Statics::NewProp_Vibration_SetBit(void* Obj)
	{
		((UESettingsPlayerSubsystem_eventSetUseVibration_Parms*)Obj)->Vibration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseVibration_Statics::NewProp_Vibration = { "Vibration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPlayerSubsystem_eventSetUseVibration_Parms), &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseVibration_Statics::NewProp_Vibration_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseVibration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseVibration_Statics::NewProp_Vibration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseVibration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Controls" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseVibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetUseVibration", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetUseVibration_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseVibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseVibration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseVibration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseVibration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseVibration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseVibration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetViewDistance_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetViewDistance_Parms
		{
			int32 ViewDistance;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ViewDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetViewDistance_Statics::NewProp_ViewDistance = { "ViewDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventSetViewDistance_Parms, ViewDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetViewDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetViewDistance_Statics::NewProp_ViewDistance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetViewDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Graphics" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetViewDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetViewDistance", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetViewDistance_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetViewDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetViewDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetViewDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetViewDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetViewDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetViewDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetViewEffectsQuality_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetViewEffectsQuality_Parms
		{
			int32 ViewEffects;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ViewEffects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetViewEffectsQuality_Statics::NewProp_ViewEffects = { "ViewEffects", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPlayerSubsystem_eventSetViewEffectsQuality_Parms, ViewEffects), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetViewEffectsQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetViewEffectsQuality_Statics::NewProp_ViewEffects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetViewEffectsQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Graphics" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetViewEffectsQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetViewEffectsQuality", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetViewEffectsQuality_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetViewEffectsQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetViewEffectsQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetViewEffectsQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetViewEffectsQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetViewEffectsQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetViewEffectsQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetVSynch_Statics
	{
		struct UESettingsPlayerSubsystem_eventSetVSynch_Parms
		{
			bool VSynch;
		};
		static void NewProp_VSynch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VSynch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetVSynch_Statics::NewProp_VSynch_SetBit(void* Obj)
	{
		((UESettingsPlayerSubsystem_eventSetVSynch_Parms*)Obj)->VSynch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetVSynch_Statics::NewProp_VSynch = { "VSynch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPlayerSubsystem_eventSetVSynch_Parms), &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetVSynch_Statics::NewProp_VSynch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetVSynch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetVSynch_Statics::NewProp_VSynch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetVSynch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Set Settings|Display" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetVSynch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPlayerSubsystem, nullptr, "SetVSynch", nullptr, nullptr, sizeof(UESettingsPlayerSubsystem_eventSetVSynch_Parms), Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetVSynch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetVSynch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetVSynch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetVSynch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetVSynch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetVSynch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUESettingsPlayerSubsystem_NoRegister()
	{
		return UUESettingsPlayerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UUESettingsPlayerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SettingsStruct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUESettingsPlayerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UESettingsPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUESettingsPlayerSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAAMethod, "GetAAMethod" }, // 2362154950
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAAQuality, "GetAAQuality" }, // 3253600445
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioMaster, "GetAudioMaster" }, // 1562974813
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioMusic, "GetAudioMusic" }, // 2454956233
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioSFX, "GetAudioSFX" }, // 2576745216
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioUI, "GetAudioUI" }, // 54604928
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetAudioVoices, "GetAudioVoices" }, // 2536743287
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetBloom, "GetBloom" }, // 1706426555
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetColorBlindMode, "GetColorBlindMode" }, // 3795920039
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetDifficulty, "GetDifficulty" }, // 2379942506
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetDisplayMode, "GetDisplayMode" }, // 139774833
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetFoliageQuality, "GetFoliageQuality" }, // 3535333033
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetGamma, "GetGamma" }, // 3678005823
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetLanguage, "GetLanguage" }, // 1723024268
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetLensFlares, "GetLensFlares" }, // 2657821885
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMotionBlur, "GetMotionBlur" }, // 133215783
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseInvertX, "GetMouseInvertX" }, // 570229166
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseInvertY, "GetMouseInvertY" }, // 2976165936
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetMouseSensitivity, "GetMouseSensitivity" }, // 1275909806
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetQualityPreset, "GetQualityPreset" }, // 2111336732
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetResolution, "GetResolution" }, // 153323776
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetResolutionScale, "GetResolutionScale" }, // 1777053135
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetShadowQuality, "GetShadowQuality" }, // 2527197771
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSSReflections, "GetSSReflections" }, // 2812381441
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSubtitleLanguage, "GetSubtitleLanguage" }, // 1304106828
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetSubtitles, "GetSubtitles" }, // 1115379568
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetTextureQuality, "GetTextureQuality" }, // 39003702
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetUseVibration, "GetUseVibration" }, // 1161665655
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetViewDistance, "GetViewDistance" }, // 761973017
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetViewEffectsQuality, "GetViewEffectsQuality" }, // 216039834
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_GetVSynch, "GetVSynch" }, // 2933650984
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAAMethod, "SetAAMethod" }, // 518172651
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAAQuality, "SetAAQuality" }, // 1769612481
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioMaster, "SetAudioMaster" }, // 976734439
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioMusic, "SetAudioMusic" }, // 2948607009
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioSFX, "SetAudioSFX" }, // 1959546449
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioUI, "SetAudioUI" }, // 2911804123
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetAudioVoices, "SetAudioVoices" }, // 2876942208
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetBloom, "SetBloom" }, // 3622725700
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetDifficulty, "SetDifficulty" }, // 1468853054
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetDisplayMode, "SetDisplayMode" }, // 175665175
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetFoliageQuality, "SetFoliageQuality" }, // 500368195
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetGamma, "SetGamma" }, // 1401623446
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetLanguage, "SetLanguage" }, // 3977747627
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetLensFlares, "SetLensFlares" }, // 684025075
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMotionBlur, "SetMotionBlur" }, // 531712639
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseInvertX, "SetMouseInvertX" }, // 3797106581
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseInvertY, "SetMouseInvertY" }, // 481311166
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetMouseSensitivity, "SetMouseSensitivity" }, // 3565006008
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetQualityPreset, "SetQualityPreset" }, // 3041063620
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetResolution, "SetResolution" }, // 2540857275
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetResolutionScale, "SetResolutionScale" }, // 3469677389
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetShadowsQuality, "SetShadowsQuality" }, // 3937215577
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetSSReflections, "SetSSReflections" }, // 3141919532
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetSubtitleLanguage, "SetSubtitleLanguage" }, // 1040300075
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetTexturesQuality, "SetTexturesQuality" }, // 957188993
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseColorBlindMode, "SetUseColorBlindMode" }, // 3373855098
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseSubtitles, "SetUseSubtitles" }, // 1716684959
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetUseVibration, "SetUseVibration" }, // 4231666545
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetViewDistance, "SetViewDistance" }, // 2484195135
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetViewEffectsQuality, "SetViewEffectsQuality" }, // 3373349748
		{ &Z_Construct_UFunction_UUESettingsPlayerSubsystem_SetVSynch, "SetVSynch" }, // 649433880
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUESettingsPlayerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Subsystems/UESettingsPlayerSubsystem.h" },
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUESettingsPlayerSubsystem_Statics::NewProp_SettingsStruct_MetaData[] = {
		{ "ModuleRelativePath", "Subsystems/UESettingsPlayerSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUESettingsPlayerSubsystem_Statics::NewProp_SettingsStruct = { "SettingsStruct", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUESettingsPlayerSubsystem, SettingsStruct), Z_Construct_UScriptStruct_FSettingsSaveStruct, METADATA_PARAMS(Z_Construct_UClass_UUESettingsPlayerSubsystem_Statics::NewProp_SettingsStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUESettingsPlayerSubsystem_Statics::NewProp_SettingsStruct_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUESettingsPlayerSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUESettingsPlayerSubsystem_Statics::NewProp_SettingsStruct,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUESettingsPlayerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUESettingsPlayerSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUESettingsPlayerSubsystem_Statics::ClassParams = {
		&UUESettingsPlayerSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUESettingsPlayerSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUESettingsPlayerSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUESettingsPlayerSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUESettingsPlayerSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUESettingsPlayerSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUESettingsPlayerSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUESettingsPlayerSubsystem, 1617920716);
	template<> UESETTINGSPLUGIN_API UClass* StaticClass<UUESettingsPlayerSubsystem>()
	{
		return UUESettingsPlayerSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUESettingsPlayerSubsystem(Z_Construct_UClass_UUESettingsPlayerSubsystem, &UUESettingsPlayerSubsystem::StaticClass, TEXT("/Script/UESettingsPlugin"), TEXT("UUESettingsPlayerSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUESettingsPlayerSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
