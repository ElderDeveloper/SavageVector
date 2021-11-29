// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UESettingsPlugin/Library/UESettingsPluginBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUESettingsPluginBPLibrary() {}
// Cross Module References
	UESETTINGSPLUGIN_API UClass* Z_Construct_UClass_UUESettingsPluginBPLibrary_NoRegister();
	UESETTINGSPLUGIN_API UClass* Z_Construct_UClass_UUESettingsPluginBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_UESettingsPlugin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetMouseSensitivity)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MouseSensitivity);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetMouseSensitivity(Z_Param_WorldContextObject,Z_Param_MouseSensitivity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetUseVibration)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_Vibration);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetUseVibration(Z_Param_WorldContextObject,Z_Param_Vibration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetMouseInvertY)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_InvertY);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetMouseInvertY(Z_Param_WorldContextObject,Z_Param_InvertY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetMouseInvertX)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_InvertX);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetMouseInvertX(Z_Param_WorldContextObject,Z_Param_InvertX);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetAudioUI)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_UI);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetAudioUI(Z_Param_WorldContextObject,Z_Param_UI);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetAudioVoices)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Voices);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetAudioVoices(Z_Param_WorldContextObject,Z_Param_Voices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetAudioSFX)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SFX);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetAudioSFX(Z_Param_WorldContextObject,Z_Param_SFX);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetAudioMusic)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Music);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetAudioMusic(Z_Param_WorldContextObject,Z_Param_Music);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetAudioMaster)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Master);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetAudioMaster(Z_Param_WorldContextObject,Z_Param_Master);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetVSynch)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_VSynch);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetVSynch(Z_Param_WorldContextObject,Z_Param_VSynch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetGamma)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gamma);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetGamma(Z_Param_WorldContextObject,Z_Param_Gamma);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetDisplayMode)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_DisplayMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetDisplayMode(Z_Param_WorldContextObject,Z_Param_DisplayMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetResolution)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Resolution);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetResolution(Z_Param_WorldContextObject,Z_Param_Resolution);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetResolutionScale)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ResolutionScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetResolutionScale(Z_Param_WorldContextObject,Z_Param_ResolutionScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetBloom)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_Bloom);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetBloom(Z_Param_WorldContextObject,Z_Param_Bloom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetSSReflections)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_SSReflection);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetSSReflections(Z_Param_WorldContextObject,Z_Param_SSReflection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetLensFlares)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_LensFlares);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetLensFlares(Z_Param_WorldContextObject,Z_Param_LensFlares);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetMotionBlur)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_MotionBlur);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetMotionBlur(Z_Param_WorldContextObject,Z_Param_MotionBlur);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetViewEffectsQuality)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_ViewEffects);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetViewEffectsQuality(Z_Param_WorldContextObject,Z_Param_ViewEffects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetViewDistance)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_ViewDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetViewDistance(Z_Param_WorldContextObject,Z_Param_ViewDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetAAQuality)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_AAQuality);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetAAQuality(Z_Param_WorldContextObject,Z_Param_AAQuality);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetAAMethod)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_AAMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetAAMethod(Z_Param_WorldContextObject,Z_Param_AAMethod);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetFoliageQuality)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Foliage);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetFoliageQuality(Z_Param_WorldContextObject,Z_Param_Foliage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetShadowsQuality)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Shadows);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetShadowsQuality(Z_Param_WorldContextObject,Z_Param_Shadows);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetTexturesQuality)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Textures);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetTexturesQuality(Z_Param_WorldContextObject,Z_Param_Textures);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetQualityPreset)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_QualityPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetQualityPreset(Z_Param_WorldContextObject,Z_Param_QualityPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetUseColorBlindMode)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_ColorBlindMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetUseColorBlindMode(Z_Param_WorldContextObject,Z_Param_ColorBlindMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetUseSubtitles)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_Subtitles);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetUseSubtitles(Z_Param_WorldContextObject,Z_Param_Subtitles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetSubtitleLanguage)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_SubtitleLanguage);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetSubtitleLanguage(Z_Param_WorldContextObject,Z_Param_SubtitleLanguage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetLanguage)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Language);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetLanguage(Z_Param_WorldContextObject,Z_Param_Language);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execSetDifficulty)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FByteProperty,Z_Param_Difficulty);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUESettingsPluginBPLibrary::SetDifficulty(Z_Param_WorldContextObject,Z_Param_Difficulty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetMouseSensitivity)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UUESettingsPluginBPLibrary::GetMouseSensitivity(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetUseVibration)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UUESettingsPluginBPLibrary::GetUseVibration(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetMouseInvertY)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUESettingsPluginBPLibrary::GetMouseInvertY(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetMouseInvertX)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUESettingsPluginBPLibrary::GetMouseInvertX(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetAudioUI)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UUESettingsPluginBPLibrary::GetAudioUI(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetAudioVoices)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UUESettingsPluginBPLibrary::GetAudioVoices(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetAudioSFX)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UUESettingsPluginBPLibrary::GetAudioSFX(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetAudioMusic)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UUESettingsPluginBPLibrary::GetAudioMusic(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetAudioMaster)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UUESettingsPluginBPLibrary::GetAudioMaster(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetVSynch)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUESettingsPluginBPLibrary::GetVSynch(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetGamma)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UUESettingsPluginBPLibrary::GetGamma(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetDisplayMode)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUESettingsPluginBPLibrary::GetDisplayMode(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetResolution)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUESettingsPluginBPLibrary::GetResolution(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetResolutionScale)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UUESettingsPluginBPLibrary::GetResolutionScale(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetBloom)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUESettingsPluginBPLibrary::GetBloom(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetSSReflections)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUESettingsPluginBPLibrary::GetSSReflections(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetLensFlares)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUESettingsPluginBPLibrary::GetLensFlares(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetMotionBlur)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUESettingsPluginBPLibrary::GetMotionBlur(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetViewEffectsQuality)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUESettingsPluginBPLibrary::GetViewEffectsQuality(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetViewDistance)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUESettingsPluginBPLibrary::GetViewDistance(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetAAQuality)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUESettingsPluginBPLibrary::GetAAQuality(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetAAMethod)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUESettingsPluginBPLibrary::GetAAMethod(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetFoliage)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUESettingsPluginBPLibrary::GetFoliage(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetShadows)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUESettingsPluginBPLibrary::GetShadows(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetTextures)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUESettingsPluginBPLibrary::GetTextures(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetQualityPreset)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUESettingsPluginBPLibrary::GetQualityPreset(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetColorBlindMode)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUESettingsPluginBPLibrary::GetColorBlindMode(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetUseSubtitles)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUESettingsPluginBPLibrary::GetUseSubtitles(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetSubtitleLanguage)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUESettingsPluginBPLibrary::GetSubtitleLanguage(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetLanguage)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUESettingsPluginBPLibrary::GetLanguage(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUESettingsPluginBPLibrary::execGetDifficulty)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUESettingsPluginBPLibrary::GetDifficulty(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UUESettingsPluginBPLibrary::StaticRegisterNativesUUESettingsPluginBPLibrary()
	{
		UClass* Class = UUESettingsPluginBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAAMethod", &UUESettingsPluginBPLibrary::execGetAAMethod },
			{ "GetAAQuality", &UUESettingsPluginBPLibrary::execGetAAQuality },
			{ "GetAudioMaster", &UUESettingsPluginBPLibrary::execGetAudioMaster },
			{ "GetAudioMusic", &UUESettingsPluginBPLibrary::execGetAudioMusic },
			{ "GetAudioSFX", &UUESettingsPluginBPLibrary::execGetAudioSFX },
			{ "GetAudioUI", &UUESettingsPluginBPLibrary::execGetAudioUI },
			{ "GetAudioVoices", &UUESettingsPluginBPLibrary::execGetAudioVoices },
			{ "GetBloom", &UUESettingsPluginBPLibrary::execGetBloom },
			{ "GetColorBlindMode", &UUESettingsPluginBPLibrary::execGetColorBlindMode },
			{ "GetDifficulty", &UUESettingsPluginBPLibrary::execGetDifficulty },
			{ "GetDisplayMode", &UUESettingsPluginBPLibrary::execGetDisplayMode },
			{ "GetFoliage", &UUESettingsPluginBPLibrary::execGetFoliage },
			{ "GetGamma", &UUESettingsPluginBPLibrary::execGetGamma },
			{ "GetLanguage", &UUESettingsPluginBPLibrary::execGetLanguage },
			{ "GetLensFlares", &UUESettingsPluginBPLibrary::execGetLensFlares },
			{ "GetMotionBlur", &UUESettingsPluginBPLibrary::execGetMotionBlur },
			{ "GetMouseInvertX", &UUESettingsPluginBPLibrary::execGetMouseInvertX },
			{ "GetMouseInvertY", &UUESettingsPluginBPLibrary::execGetMouseInvertY },
			{ "GetMouseSensitivity", &UUESettingsPluginBPLibrary::execGetMouseSensitivity },
			{ "GetQualityPreset", &UUESettingsPluginBPLibrary::execGetQualityPreset },
			{ "GetResolution", &UUESettingsPluginBPLibrary::execGetResolution },
			{ "GetResolutionScale", &UUESettingsPluginBPLibrary::execGetResolutionScale },
			{ "GetShadows", &UUESettingsPluginBPLibrary::execGetShadows },
			{ "GetSSReflections", &UUESettingsPluginBPLibrary::execGetSSReflections },
			{ "GetSubtitleLanguage", &UUESettingsPluginBPLibrary::execGetSubtitleLanguage },
			{ "GetTextures", &UUESettingsPluginBPLibrary::execGetTextures },
			{ "GetUseSubtitles", &UUESettingsPluginBPLibrary::execGetUseSubtitles },
			{ "GetUseVibration", &UUESettingsPluginBPLibrary::execGetUseVibration },
			{ "GetViewDistance", &UUESettingsPluginBPLibrary::execGetViewDistance },
			{ "GetViewEffectsQuality", &UUESettingsPluginBPLibrary::execGetViewEffectsQuality },
			{ "GetVSynch", &UUESettingsPluginBPLibrary::execGetVSynch },
			{ "SetAAMethod", &UUESettingsPluginBPLibrary::execSetAAMethod },
			{ "SetAAQuality", &UUESettingsPluginBPLibrary::execSetAAQuality },
			{ "SetAudioMaster", &UUESettingsPluginBPLibrary::execSetAudioMaster },
			{ "SetAudioMusic", &UUESettingsPluginBPLibrary::execSetAudioMusic },
			{ "SetAudioSFX", &UUESettingsPluginBPLibrary::execSetAudioSFX },
			{ "SetAudioUI", &UUESettingsPluginBPLibrary::execSetAudioUI },
			{ "SetAudioVoices", &UUESettingsPluginBPLibrary::execSetAudioVoices },
			{ "SetBloom", &UUESettingsPluginBPLibrary::execSetBloom },
			{ "SetDifficulty", &UUESettingsPluginBPLibrary::execSetDifficulty },
			{ "SetDisplayMode", &UUESettingsPluginBPLibrary::execSetDisplayMode },
			{ "SetFoliageQuality", &UUESettingsPluginBPLibrary::execSetFoliageQuality },
			{ "SetGamma", &UUESettingsPluginBPLibrary::execSetGamma },
			{ "SetLanguage", &UUESettingsPluginBPLibrary::execSetLanguage },
			{ "SetLensFlares", &UUESettingsPluginBPLibrary::execSetLensFlares },
			{ "SetMotionBlur", &UUESettingsPluginBPLibrary::execSetMotionBlur },
			{ "SetMouseInvertX", &UUESettingsPluginBPLibrary::execSetMouseInvertX },
			{ "SetMouseInvertY", &UUESettingsPluginBPLibrary::execSetMouseInvertY },
			{ "SetMouseSensitivity", &UUESettingsPluginBPLibrary::execSetMouseSensitivity },
			{ "SetQualityPreset", &UUESettingsPluginBPLibrary::execSetQualityPreset },
			{ "SetResolution", &UUESettingsPluginBPLibrary::execSetResolution },
			{ "SetResolutionScale", &UUESettingsPluginBPLibrary::execSetResolutionScale },
			{ "SetShadowsQuality", &UUESettingsPluginBPLibrary::execSetShadowsQuality },
			{ "SetSSReflections", &UUESettingsPluginBPLibrary::execSetSSReflections },
			{ "SetSubtitleLanguage", &UUESettingsPluginBPLibrary::execSetSubtitleLanguage },
			{ "SetTexturesQuality", &UUESettingsPluginBPLibrary::execSetTexturesQuality },
			{ "SetUseColorBlindMode", &UUESettingsPluginBPLibrary::execSetUseColorBlindMode },
			{ "SetUseSubtitles", &UUESettingsPluginBPLibrary::execSetUseSubtitles },
			{ "SetUseVibration", &UUESettingsPluginBPLibrary::execSetUseVibration },
			{ "SetViewDistance", &UUESettingsPluginBPLibrary::execSetViewDistance },
			{ "SetViewEffectsQuality", &UUESettingsPluginBPLibrary::execSetViewEffectsQuality },
			{ "SetVSynch", &UUESettingsPluginBPLibrary::execSetVSynch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAMethod_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetAAMethod_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAMethod_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAMethod_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetAAMethod_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAMethod_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAMethod_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetAAMethod_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAMethod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAMethod_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAMethod_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAMethod_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetAAMethod", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetAAMethod_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAQuality_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetAAQuality_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAQuality_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAQuality_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetAAQuality_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAQuality_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAQuality_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetAAQuality_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAQuality_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAQuality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAQuality_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetAAQuality", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetAAQuality_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMaster_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetAudioMaster_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMaster_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMaster_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetAudioMaster_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMaster_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMaster_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMaster_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetAudioMaster_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMaster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMaster_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMaster_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMaster_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Audio\n" },
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "ToolTip", "Audio" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMaster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetAudioMaster", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetAudioMaster_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMaster_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMaster_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMaster_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMaster_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMaster()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMaster_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMusic_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetAudioMusic_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMusic_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMusic_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetAudioMusic_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMusic_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMusic_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMusic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetAudioMusic_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMusic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMusic_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMusic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMusic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMusic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetAudioMusic", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetAudioMusic_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMusic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMusic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMusic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMusic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMusic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMusic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioSFX_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetAudioSFX_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioSFX_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioSFX_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetAudioSFX_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioSFX_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioSFX_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioSFX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetAudioSFX_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioSFX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioSFX_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioSFX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioSFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetAudioSFX", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetAudioSFX_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioSFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioSFX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioSFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioSFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioSFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioSFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioUI_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetAudioUI_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioUI_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioUI_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetAudioUI_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioUI_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioUI_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetAudioUI_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioUI_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetAudioUI", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetAudioUI_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioVoices_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetAudioVoices_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioVoices_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioVoices_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetAudioVoices_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioVoices_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioVoices_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioVoices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetAudioVoices_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioVoices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioVoices_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioVoices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioVoices_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioVoices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetAudioVoices", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetAudioVoices_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioVoices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioVoices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioVoices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioVoices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioVoices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioVoices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetBloom_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetBloom_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetBloom_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetBloom_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetBloom_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetBloom_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetBloom_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetBloom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UESettingsPluginBPLibrary_eventGetBloom_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetBloom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPluginBPLibrary_eventGetBloom_Parms), &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetBloom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetBloom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetBloom_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetBloom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetBloom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetBloom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetBloom", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetBloom_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetBloom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetBloom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetBloom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetBloom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetBloom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetBloom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetColorBlindMode_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetColorBlindMode_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetColorBlindMode_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetColorBlindMode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetColorBlindMode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetColorBlindMode_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetColorBlindMode_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetColorBlindMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UESettingsPluginBPLibrary_eventGetColorBlindMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetColorBlindMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPluginBPLibrary_eventGetColorBlindMode_Parms), &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetColorBlindMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetColorBlindMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetColorBlindMode_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetColorBlindMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetColorBlindMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetColorBlindMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetColorBlindMode", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetColorBlindMode_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetColorBlindMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetColorBlindMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetColorBlindMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetColorBlindMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetColorBlindMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetColorBlindMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDifficulty_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetDifficulty_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDifficulty_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDifficulty_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetDifficulty_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDifficulty_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDifficulty_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDifficulty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetDifficulty_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDifficulty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDifficulty_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDifficulty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDifficulty_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Gameplay\n" },
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "ToolTip", "Gameplay" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetDifficulty", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetDifficulty_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDifficulty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDifficulty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDifficulty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDifficulty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDifficulty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDisplayMode_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetDisplayMode_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDisplayMode_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDisplayMode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetDisplayMode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDisplayMode_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDisplayMode_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDisplayMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetDisplayMode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDisplayMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDisplayMode_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDisplayMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDisplayMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDisplayMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetDisplayMode", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetDisplayMode_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDisplayMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDisplayMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDisplayMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDisplayMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDisplayMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDisplayMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetFoliage_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetFoliage_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetFoliage_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetFoliage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetFoliage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetFoliage_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetFoliage_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetFoliage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetFoliage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetFoliage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetFoliage_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetFoliage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetFoliage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetFoliage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetFoliage", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetFoliage_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetFoliage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetFoliage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetFoliage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetFoliage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetFoliage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetFoliage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetGamma_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetGamma_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetGamma_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetGamma_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetGamma_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetGamma_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetGamma_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetGamma_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetGamma_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetGamma_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetGamma_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetGamma_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetGamma_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetGamma_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetGamma", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetGamma_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetGamma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetGamma_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetGamma_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetGamma_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetGamma()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetGamma_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLanguage_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetLanguage_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLanguage_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLanguage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetLanguage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLanguage_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLanguage_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetLanguage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLanguage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLanguage_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLanguage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLanguage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetLanguage", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetLanguage_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLensFlares_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetLensFlares_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLensFlares_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLensFlares_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetLensFlares_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLensFlares_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLensFlares_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLensFlares_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UESettingsPluginBPLibrary_eventGetLensFlares_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLensFlares_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPluginBPLibrary_eventGetLensFlares_Parms), &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLensFlares_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLensFlares_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLensFlares_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLensFlares_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLensFlares_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLensFlares_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetLensFlares", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetLensFlares_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLensFlares_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLensFlares_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLensFlares_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLensFlares_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLensFlares()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLensFlares_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMotionBlur_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetMotionBlur_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMotionBlur_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMotionBlur_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetMotionBlur_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMotionBlur_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMotionBlur_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMotionBlur_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UESettingsPluginBPLibrary_eventGetMotionBlur_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMotionBlur_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPluginBPLibrary_eventGetMotionBlur_Parms), &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMotionBlur_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMotionBlur_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMotionBlur_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMotionBlur_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMotionBlur_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMotionBlur_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetMotionBlur", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetMotionBlur_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMotionBlur_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMotionBlur_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMotionBlur_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMotionBlur_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMotionBlur()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMotionBlur_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertX_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetMouseInvertX_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertX_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertX_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetMouseInvertX_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertX_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertX_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertX_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UESettingsPluginBPLibrary_eventGetMouseInvertX_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPluginBPLibrary_eventGetMouseInvertX_Parms), &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertX_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertX_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertX_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Controls\n" },
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "ToolTip", "Controls" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetMouseInvertX", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetMouseInvertX_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertY_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetMouseInvertY_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertY_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertY_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetMouseInvertY_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertY_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertY_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertY_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UESettingsPluginBPLibrary_eventGetMouseInvertY_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPluginBPLibrary_eventGetMouseInvertY_Parms), &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertY_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertY_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertY_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetMouseInvertY", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetMouseInvertY_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseSensitivity_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetMouseSensitivity_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseSensitivity_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseSensitivity_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetMouseSensitivity_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseSensitivity_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseSensitivity_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseSensitivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetMouseSensitivity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseSensitivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseSensitivity_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseSensitivity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseSensitivity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetMouseSensitivity", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetMouseSensitivity_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseSensitivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseSensitivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseSensitivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseSensitivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseSensitivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetQualityPreset_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetQualityPreset_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetQualityPreset_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetQualityPreset_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetQualityPreset_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetQualityPreset_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetQualityPreset_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetQualityPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetQualityPreset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetQualityPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetQualityPreset_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetQualityPreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetQualityPreset_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Graphics\n" },
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "ToolTip", "Graphics" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetQualityPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetQualityPreset", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetQualityPreset_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetQualityPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetQualityPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetQualityPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetQualityPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetQualityPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetQualityPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolution_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetResolution_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolution_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolution_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetResolution_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolution_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolution_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetResolution_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolution_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolution_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Display\n" },
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "ToolTip", "Display" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetResolution", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetResolution_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolutionScale_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetResolutionScale_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolutionScale_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolutionScale_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetResolutionScale_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolutionScale_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolutionScale_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolutionScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetResolutionScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolutionScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolutionScale_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolutionScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolutionScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolutionScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetResolutionScale", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetResolutionScale_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolutionScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolutionScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolutionScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolutionScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolutionScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolutionScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetShadows_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetShadows_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetShadows_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetShadows_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetShadows_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetShadows_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetShadows_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetShadows_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetShadows_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetShadows_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetShadows_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetShadows_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetShadows_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetShadows_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetShadows", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetShadows_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetShadows_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetShadows_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetShadows_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetShadows_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetShadows()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetShadows_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSSReflections_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetSSReflections_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSSReflections_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSSReflections_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetSSReflections_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSSReflections_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSSReflections_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSSReflections_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UESettingsPluginBPLibrary_eventGetSSReflections_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSSReflections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPluginBPLibrary_eventGetSSReflections_Parms), &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSSReflections_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSSReflections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSSReflections_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSSReflections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSSReflections_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSSReflections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetSSReflections", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetSSReflections_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSSReflections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSSReflections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSSReflections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSSReflections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSSReflections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSSReflections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSubtitleLanguage_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetSubtitleLanguage_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSubtitleLanguage_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSubtitleLanguage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetSubtitleLanguage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSubtitleLanguage_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSubtitleLanguage_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSubtitleLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetSubtitleLanguage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSubtitleLanguage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSubtitleLanguage_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSubtitleLanguage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSubtitleLanguage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSubtitleLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetSubtitleLanguage", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetSubtitleLanguage_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSubtitleLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSubtitleLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSubtitleLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSubtitleLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSubtitleLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSubtitleLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetTextures_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetTextures_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetTextures_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetTextures_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetTextures_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetTextures_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetTextures_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetTextures_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetTextures_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetTextures_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetTextures_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetTextures_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetTextures_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetTextures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetTextures", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetTextures_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetTextures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetTextures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetTextures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetTextures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetTextures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetTextures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseSubtitles_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetUseSubtitles_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseSubtitles_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseSubtitles_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetUseSubtitles_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseSubtitles_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseSubtitles_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseSubtitles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UESettingsPluginBPLibrary_eventGetUseSubtitles_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseSubtitles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPluginBPLibrary_eventGetUseSubtitles_Parms), &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseSubtitles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseSubtitles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseSubtitles_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseSubtitles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseSubtitles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseSubtitles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetUseSubtitles", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetUseSubtitles_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseSubtitles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseSubtitles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseSubtitles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseSubtitles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseSubtitles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseSubtitles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseVibration_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetUseVibration_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseVibration_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseVibration_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetUseVibration_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseVibration_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseVibration_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseVibration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetUseVibration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseVibration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseVibration_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseVibration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseVibration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseVibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetUseVibration", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetUseVibration_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseVibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseVibration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseVibration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseVibration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseVibration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseVibration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewDistance_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetViewDistance_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewDistance_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewDistance_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetViewDistance_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewDistance_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewDistance_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetViewDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewDistance_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetViewDistance", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetViewDistance_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewEffectsQuality_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetViewEffectsQuality_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewEffectsQuality_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewEffectsQuality_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetViewEffectsQuality_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewEffectsQuality_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewEffectsQuality_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewEffectsQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetViewEffectsQuality_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewEffectsQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewEffectsQuality_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewEffectsQuality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewEffectsQuality_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewEffectsQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetViewEffectsQuality", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetViewEffectsQuality_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewEffectsQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewEffectsQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewEffectsQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewEffectsQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewEffectsQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewEffectsQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetVSynch_Statics
	{
		struct UESettingsPluginBPLibrary_eventGetVSynch_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetVSynch_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetVSynch_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventGetVSynch_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetVSynch_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetVSynch_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetVSynch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UESettingsPluginBPLibrary_eventGetVSynch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetVSynch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPluginBPLibrary_eventGetVSynch_Parms), &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetVSynch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetVSynch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetVSynch_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetVSynch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetVSynch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetVSynch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "GetVSynch", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventGetVSynch_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetVSynch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetVSynch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetVSynch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetVSynch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetVSynch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetVSynch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAMethod_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetAAMethod_Parms
		{
			const UObject* WorldContextObject;
			int32 AAMethod;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AAMethod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAMethod_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAMethod_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetAAMethod_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAMethod_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAMethod_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAMethod_Statics::NewProp_AAMethod = { "AAMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetAAMethod_Parms, AAMethod), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAMethod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAMethod_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAMethod_Statics::NewProp_AAMethod,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAMethod_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetAAMethod", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetAAMethod_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAQuality_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetAAQuality_Parms
		{
			const UObject* WorldContextObject;
			int32 AAQuality;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AAQuality;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAQuality_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAQuality_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetAAQuality_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAQuality_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAQuality_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAQuality_Statics::NewProp_AAQuality = { "AAQuality", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetAAQuality_Parms, AAQuality), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAQuality_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAQuality_Statics::NewProp_AAQuality,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAQuality_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetAAQuality", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetAAQuality_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMaster_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetAudioMaster_Parms
		{
			const UObject* WorldContextObject;
			float Master;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Master;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMaster_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMaster_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetAudioMaster_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMaster_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMaster_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMaster_Statics::NewProp_Master = { "Master", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetAudioMaster_Parms, Master), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMaster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMaster_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMaster_Statics::NewProp_Master,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMaster_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Audio\n" },
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "ToolTip", "Audio" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMaster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetAudioMaster", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetAudioMaster_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMaster_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMaster_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMaster_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMaster_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMaster()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMaster_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMusic_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetAudioMusic_Parms
		{
			const UObject* WorldContextObject;
			float Music;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Music;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMusic_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMusic_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetAudioMusic_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMusic_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMusic_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMusic_Statics::NewProp_Music = { "Music", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetAudioMusic_Parms, Music), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMusic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMusic_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMusic_Statics::NewProp_Music,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMusic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMusic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetAudioMusic", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetAudioMusic_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMusic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMusic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMusic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMusic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMusic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMusic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioSFX_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetAudioSFX_Parms
		{
			const UObject* WorldContextObject;
			float SFX;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SFX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioSFX_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioSFX_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetAudioSFX_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioSFX_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioSFX_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioSFX_Statics::NewProp_SFX = { "SFX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetAudioSFX_Parms, SFX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioSFX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioSFX_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioSFX_Statics::NewProp_SFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioSFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetAudioSFX", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetAudioSFX_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioSFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioSFX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioSFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioSFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioSFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioSFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioUI_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetAudioUI_Parms
		{
			const UObject* WorldContextObject;
			float UI;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioUI_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioUI_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetAudioUI_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioUI_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioUI_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioUI_Statics::NewProp_UI = { "UI", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetAudioUI_Parms, UI), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioUI_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioUI_Statics::NewProp_UI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetAudioUI", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetAudioUI_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioVoices_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetAudioVoices_Parms
		{
			const UObject* WorldContextObject;
			float Voices;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Voices;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioVoices_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioVoices_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetAudioVoices_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioVoices_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioVoices_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioVoices_Statics::NewProp_Voices = { "Voices", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetAudioVoices_Parms, Voices), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioVoices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioVoices_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioVoices_Statics::NewProp_Voices,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioVoices_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioVoices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetAudioVoices", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetAudioVoices_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioVoices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioVoices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioVoices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioVoices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioVoices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioVoices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetBloom_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetBloom_Parms
		{
			const UObject* WorldContextObject;
			bool Bloom;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_Bloom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Bloom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetBloom_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetBloom_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetBloom_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetBloom_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetBloom_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetBloom_Statics::NewProp_Bloom_SetBit(void* Obj)
	{
		((UESettingsPluginBPLibrary_eventSetBloom_Parms*)Obj)->Bloom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetBloom_Statics::NewProp_Bloom = { "Bloom", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPluginBPLibrary_eventSetBloom_Parms), &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetBloom_Statics::NewProp_Bloom_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetBloom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetBloom_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetBloom_Statics::NewProp_Bloom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetBloom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetBloom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetBloom", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetBloom_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetBloom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetBloom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetBloom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetBloom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetBloom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetBloom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDifficulty_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetDifficulty_Parms
		{
			const UObject* WorldContextObject;
			uint8 Difficulty;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Difficulty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDifficulty_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDifficulty_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetDifficulty_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDifficulty_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDifficulty_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDifficulty_Statics::NewProp_Difficulty = { "Difficulty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetDifficulty_Parms, Difficulty), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDifficulty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDifficulty_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDifficulty_Statics::NewProp_Difficulty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDifficulty_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Gameplay\n" },
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "ToolTip", "Gameplay" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetDifficulty", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetDifficulty_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDifficulty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDifficulty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDifficulty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDifficulty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDifficulty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDisplayMode_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetDisplayMode_Parms
		{
			const UObject* WorldContextObject;
			int32 DisplayMode;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DisplayMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDisplayMode_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDisplayMode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetDisplayMode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDisplayMode_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDisplayMode_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDisplayMode_Statics::NewProp_DisplayMode = { "DisplayMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetDisplayMode_Parms, DisplayMode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDisplayMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDisplayMode_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDisplayMode_Statics::NewProp_DisplayMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDisplayMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDisplayMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetDisplayMode", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetDisplayMode_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDisplayMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDisplayMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDisplayMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDisplayMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDisplayMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDisplayMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetFoliageQuality_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetFoliageQuality_Parms
		{
			const UObject* WorldContextObject;
			int32 Foliage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Foliage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetFoliageQuality_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetFoliageQuality_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetFoliageQuality_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetFoliageQuality_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetFoliageQuality_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetFoliageQuality_Statics::NewProp_Foliage = { "Foliage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetFoliageQuality_Parms, Foliage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetFoliageQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetFoliageQuality_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetFoliageQuality_Statics::NewProp_Foliage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetFoliageQuality_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetFoliageQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetFoliageQuality", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetFoliageQuality_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetFoliageQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetFoliageQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetFoliageQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetFoliageQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetFoliageQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetFoliageQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetGamma_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetGamma_Parms
		{
			const UObject* WorldContextObject;
			float Gamma;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gamma;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetGamma_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetGamma_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetGamma_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetGamma_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetGamma_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetGamma_Statics::NewProp_Gamma = { "Gamma", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetGamma_Parms, Gamma), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetGamma_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetGamma_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetGamma_Statics::NewProp_Gamma,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetGamma_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetGamma_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetGamma", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetGamma_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetGamma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetGamma_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetGamma_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetGamma_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetGamma()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetGamma_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLanguage_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetLanguage_Parms
		{
			const UObject* WorldContextObject;
			int32 Language;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Language;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLanguage_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLanguage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetLanguage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLanguage_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLanguage_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLanguage_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetLanguage_Parms, Language), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLanguage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLanguage_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLanguage_Statics::NewProp_Language,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLanguage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetLanguage", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetLanguage_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLensFlares_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetLensFlares_Parms
		{
			const UObject* WorldContextObject;
			bool LensFlares;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_LensFlares_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LensFlares;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLensFlares_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLensFlares_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetLensFlares_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLensFlares_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLensFlares_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLensFlares_Statics::NewProp_LensFlares_SetBit(void* Obj)
	{
		((UESettingsPluginBPLibrary_eventSetLensFlares_Parms*)Obj)->LensFlares = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLensFlares_Statics::NewProp_LensFlares = { "LensFlares", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPluginBPLibrary_eventSetLensFlares_Parms), &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLensFlares_Statics::NewProp_LensFlares_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLensFlares_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLensFlares_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLensFlares_Statics::NewProp_LensFlares,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLensFlares_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLensFlares_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetLensFlares", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetLensFlares_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLensFlares_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLensFlares_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLensFlares_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLensFlares_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLensFlares()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLensFlares_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMotionBlur_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetMotionBlur_Parms
		{
			const UObject* WorldContextObject;
			bool MotionBlur;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_MotionBlur_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MotionBlur;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMotionBlur_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMotionBlur_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetMotionBlur_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMotionBlur_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMotionBlur_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMotionBlur_Statics::NewProp_MotionBlur_SetBit(void* Obj)
	{
		((UESettingsPluginBPLibrary_eventSetMotionBlur_Parms*)Obj)->MotionBlur = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMotionBlur_Statics::NewProp_MotionBlur = { "MotionBlur", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPluginBPLibrary_eventSetMotionBlur_Parms), &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMotionBlur_Statics::NewProp_MotionBlur_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMotionBlur_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMotionBlur_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMotionBlur_Statics::NewProp_MotionBlur,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMotionBlur_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMotionBlur_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetMotionBlur", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetMotionBlur_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMotionBlur_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMotionBlur_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMotionBlur_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMotionBlur_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMotionBlur()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMotionBlur_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertX_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetMouseInvertX_Parms
		{
			const UObject* WorldContextObject;
			bool InvertX;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_InvertX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertX_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertX_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetMouseInvertX_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertX_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertX_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertX_Statics::NewProp_InvertX_SetBit(void* Obj)
	{
		((UESettingsPluginBPLibrary_eventSetMouseInvertX_Parms*)Obj)->InvertX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertX_Statics::NewProp_InvertX = { "InvertX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPluginBPLibrary_eventSetMouseInvertX_Parms), &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertX_Statics::NewProp_InvertX_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertX_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertX_Statics::NewProp_InvertX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertX_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Controls\n" },
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "ToolTip", "Controls" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetMouseInvertX", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetMouseInvertX_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertY_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetMouseInvertY_Parms
		{
			const UObject* WorldContextObject;
			bool InvertY;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_InvertY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertY_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertY_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetMouseInvertY_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertY_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertY_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertY_Statics::NewProp_InvertY_SetBit(void* Obj)
	{
		((UESettingsPluginBPLibrary_eventSetMouseInvertY_Parms*)Obj)->InvertY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertY_Statics::NewProp_InvertY = { "InvertY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPluginBPLibrary_eventSetMouseInvertY_Parms), &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertY_Statics::NewProp_InvertY_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertY_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertY_Statics::NewProp_InvertY,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertY_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetMouseInvertY", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetMouseInvertY_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseSensitivity_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetMouseSensitivity_Parms
		{
			const UObject* WorldContextObject;
			float MouseSensitivity;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseSensitivity_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseSensitivity_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetMouseSensitivity_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseSensitivity_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseSensitivity_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseSensitivity_Statics::NewProp_MouseSensitivity = { "MouseSensitivity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetMouseSensitivity_Parms, MouseSensitivity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseSensitivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseSensitivity_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseSensitivity_Statics::NewProp_MouseSensitivity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseSensitivity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetMouseSensitivity", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetMouseSensitivity_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseSensitivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseSensitivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseSensitivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseSensitivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseSensitivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetQualityPreset_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetQualityPreset_Parms
		{
			const UObject* WorldContextObject;
			int32 QualityPreset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QualityPreset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetQualityPreset_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetQualityPreset_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetQualityPreset_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetQualityPreset_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetQualityPreset_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetQualityPreset_Statics::NewProp_QualityPreset = { "QualityPreset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetQualityPreset_Parms, QualityPreset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetQualityPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetQualityPreset_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetQualityPreset_Statics::NewProp_QualityPreset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetQualityPreset_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Graphics\n" },
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "ToolTip", "Graphics" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetQualityPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetQualityPreset", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetQualityPreset_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetQualityPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetQualityPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetQualityPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetQualityPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetQualityPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetQualityPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolution_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetResolution_Parms
		{
			const UObject* WorldContextObject;
			int32 Resolution;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Resolution;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolution_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolution_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetResolution_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolution_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolution_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolution_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetResolution_Parms, Resolution), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolution_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolution_Statics::NewProp_Resolution,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolution_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Display\n" },
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "ToolTip", "Display" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetResolution", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetResolution_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolutionScale_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetResolutionScale_Parms
		{
			const UObject* WorldContextObject;
			float ResolutionScale;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResolutionScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolutionScale_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolutionScale_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetResolutionScale_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolutionScale_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolutionScale_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolutionScale_Statics::NewProp_ResolutionScale = { "ResolutionScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetResolutionScale_Parms, ResolutionScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolutionScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolutionScale_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolutionScale_Statics::NewProp_ResolutionScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolutionScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolutionScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetResolutionScale", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetResolutionScale_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolutionScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolutionScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolutionScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolutionScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolutionScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolutionScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetShadowsQuality_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetShadowsQuality_Parms
		{
			const UObject* WorldContextObject;
			int32 Shadows;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Shadows;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetShadowsQuality_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetShadowsQuality_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetShadowsQuality_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetShadowsQuality_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetShadowsQuality_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetShadowsQuality_Statics::NewProp_Shadows = { "Shadows", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetShadowsQuality_Parms, Shadows), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetShadowsQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetShadowsQuality_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetShadowsQuality_Statics::NewProp_Shadows,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetShadowsQuality_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetShadowsQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetShadowsQuality", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetShadowsQuality_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetShadowsQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetShadowsQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetShadowsQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetShadowsQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetShadowsQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetShadowsQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSSReflections_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetSSReflections_Parms
		{
			const UObject* WorldContextObject;
			bool SSReflection;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_SSReflection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SSReflection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSSReflections_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSSReflections_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetSSReflections_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSSReflections_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSSReflections_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSSReflections_Statics::NewProp_SSReflection_SetBit(void* Obj)
	{
		((UESettingsPluginBPLibrary_eventSetSSReflections_Parms*)Obj)->SSReflection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSSReflections_Statics::NewProp_SSReflection = { "SSReflection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPluginBPLibrary_eventSetSSReflections_Parms), &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSSReflections_Statics::NewProp_SSReflection_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSSReflections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSSReflections_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSSReflections_Statics::NewProp_SSReflection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSSReflections_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSSReflections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetSSReflections", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetSSReflections_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSSReflections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSSReflections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSSReflections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSSReflections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSSReflections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSSReflections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSubtitleLanguage_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetSubtitleLanguage_Parms
		{
			const UObject* WorldContextObject;
			int32 SubtitleLanguage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubtitleLanguage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSubtitleLanguage_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSubtitleLanguage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetSubtitleLanguage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSubtitleLanguage_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSubtitleLanguage_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSubtitleLanguage_Statics::NewProp_SubtitleLanguage = { "SubtitleLanguage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetSubtitleLanguage_Parms, SubtitleLanguage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSubtitleLanguage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSubtitleLanguage_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSubtitleLanguage_Statics::NewProp_SubtitleLanguage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSubtitleLanguage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSubtitleLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetSubtitleLanguage", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetSubtitleLanguage_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSubtitleLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSubtitleLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSubtitleLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSubtitleLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSubtitleLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSubtitleLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetTexturesQuality_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetTexturesQuality_Parms
		{
			const UObject* WorldContextObject;
			int32 Textures;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Textures;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetTexturesQuality_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetTexturesQuality_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetTexturesQuality_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetTexturesQuality_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetTexturesQuality_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetTexturesQuality_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetTexturesQuality_Parms, Textures), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetTexturesQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetTexturesQuality_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetTexturesQuality_Statics::NewProp_Textures,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetTexturesQuality_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetTexturesQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetTexturesQuality", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetTexturesQuality_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetTexturesQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetTexturesQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetTexturesQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetTexturesQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetTexturesQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetTexturesQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseColorBlindMode_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetUseColorBlindMode_Parms
		{
			const UObject* WorldContextObject;
			bool ColorBlindMode;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ColorBlindMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ColorBlindMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseColorBlindMode_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseColorBlindMode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetUseColorBlindMode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseColorBlindMode_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseColorBlindMode_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseColorBlindMode_Statics::NewProp_ColorBlindMode_SetBit(void* Obj)
	{
		((UESettingsPluginBPLibrary_eventSetUseColorBlindMode_Parms*)Obj)->ColorBlindMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseColorBlindMode_Statics::NewProp_ColorBlindMode = { "ColorBlindMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPluginBPLibrary_eventSetUseColorBlindMode_Parms), &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseColorBlindMode_Statics::NewProp_ColorBlindMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseColorBlindMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseColorBlindMode_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseColorBlindMode_Statics::NewProp_ColorBlindMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseColorBlindMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseColorBlindMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetUseColorBlindMode", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetUseColorBlindMode_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseColorBlindMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseColorBlindMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseColorBlindMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseColorBlindMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseColorBlindMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseColorBlindMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseSubtitles_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetUseSubtitles_Parms
		{
			const UObject* WorldContextObject;
			bool Subtitles;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_Subtitles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Subtitles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseSubtitles_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseSubtitles_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetUseSubtitles_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseSubtitles_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseSubtitles_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseSubtitles_Statics::NewProp_Subtitles_SetBit(void* Obj)
	{
		((UESettingsPluginBPLibrary_eventSetUseSubtitles_Parms*)Obj)->Subtitles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseSubtitles_Statics::NewProp_Subtitles = { "Subtitles", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPluginBPLibrary_eventSetUseSubtitles_Parms), &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseSubtitles_Statics::NewProp_Subtitles_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseSubtitles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseSubtitles_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseSubtitles_Statics::NewProp_Subtitles,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseSubtitles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseSubtitles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetUseSubtitles", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetUseSubtitles_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseSubtitles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseSubtitles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseSubtitles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseSubtitles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseSubtitles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseSubtitles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseVibration_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetUseVibration_Parms
		{
			const UObject* WorldContextObject;
			bool Vibration;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_Vibration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Vibration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseVibration_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseVibration_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetUseVibration_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseVibration_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseVibration_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseVibration_Statics::NewProp_Vibration_SetBit(void* Obj)
	{
		((UESettingsPluginBPLibrary_eventSetUseVibration_Parms*)Obj)->Vibration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseVibration_Statics::NewProp_Vibration = { "Vibration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPluginBPLibrary_eventSetUseVibration_Parms), &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseVibration_Statics::NewProp_Vibration_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseVibration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseVibration_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseVibration_Statics::NewProp_Vibration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseVibration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseVibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetUseVibration", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetUseVibration_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseVibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseVibration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseVibration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseVibration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseVibration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseVibration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewDistance_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetViewDistance_Parms
		{
			const UObject* WorldContextObject;
			int32 ViewDistance;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ViewDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewDistance_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewDistance_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetViewDistance_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewDistance_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewDistance_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewDistance_Statics::NewProp_ViewDistance = { "ViewDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetViewDistance_Parms, ViewDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewDistance_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewDistance_Statics::NewProp_ViewDistance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetViewDistance", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetViewDistance_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewEffectsQuality_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetViewEffectsQuality_Parms
		{
			const UObject* WorldContextObject;
			int32 ViewEffects;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ViewEffects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewEffectsQuality_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewEffectsQuality_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetViewEffectsQuality_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewEffectsQuality_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewEffectsQuality_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewEffectsQuality_Statics::NewProp_ViewEffects = { "ViewEffects", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetViewEffectsQuality_Parms, ViewEffects), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewEffectsQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewEffectsQuality_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewEffectsQuality_Statics::NewProp_ViewEffects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewEffectsQuality_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewEffectsQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetViewEffectsQuality", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetViewEffectsQuality_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewEffectsQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewEffectsQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewEffectsQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewEffectsQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewEffectsQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewEffectsQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetVSynch_Statics
	{
		struct UESettingsPluginBPLibrary_eventSetVSynch_Parms
		{
			const UObject* WorldContextObject;
			bool VSynch;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_VSynch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VSynch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetVSynch_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetVSynch_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UESettingsPluginBPLibrary_eventSetVSynch_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetVSynch_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetVSynch_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetVSynch_Statics::NewProp_VSynch_SetBit(void* Obj)
	{
		((UESettingsPluginBPLibrary_eventSetVSynch_Parms*)Obj)->VSynch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetVSynch_Statics::NewProp_VSynch = { "VSynch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UESettingsPluginBPLibrary_eventSetVSynch_Parms), &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetVSynch_Statics::NewProp_VSynch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetVSynch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetVSynch_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetVSynch_Statics::NewProp_VSynch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetVSynch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetVSynch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUESettingsPluginBPLibrary, nullptr, "SetVSynch", nullptr, nullptr, sizeof(UESettingsPluginBPLibrary_eventSetVSynch_Parms), Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetVSynch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetVSynch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetVSynch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetVSynch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetVSynch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetVSynch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUESettingsPluginBPLibrary_NoRegister()
	{
		return UUESettingsPluginBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUESettingsPluginBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUESettingsPluginBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UESettingsPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUESettingsPluginBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAMethod, "GetAAMethod" }, // 4116742178
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAAQuality, "GetAAQuality" }, // 1627569730
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMaster, "GetAudioMaster" }, // 2271850787
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioMusic, "GetAudioMusic" }, // 906512525
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioSFX, "GetAudioSFX" }, // 4264018459
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioUI, "GetAudioUI" }, // 4001444042
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetAudioVoices, "GetAudioVoices" }, // 2881385531
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetBloom, "GetBloom" }, // 2840984060
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetColorBlindMode, "GetColorBlindMode" }, // 3366179872
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDifficulty, "GetDifficulty" }, // 1626639279
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetDisplayMode, "GetDisplayMode" }, // 448719287
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetFoliage, "GetFoliage" }, // 930793793
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetGamma, "GetGamma" }, // 3220065088
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLanguage, "GetLanguage" }, // 3966541038
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetLensFlares, "GetLensFlares" }, // 4184852806
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMotionBlur, "GetMotionBlur" }, // 2134904849
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertX, "GetMouseInvertX" }, // 2298681498
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseInvertY, "GetMouseInvertY" }, // 1161080632
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetMouseSensitivity, "GetMouseSensitivity" }, // 2648046428
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetQualityPreset, "GetQualityPreset" }, // 1922966844
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolution, "GetResolution" }, // 2412480606
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetResolutionScale, "GetResolutionScale" }, // 4083671034
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetShadows, "GetShadows" }, // 3329694521
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSSReflections, "GetSSReflections" }, // 4064468503
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetSubtitleLanguage, "GetSubtitleLanguage" }, // 3922807124
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetTextures, "GetTextures" }, // 3680149007
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseSubtitles, "GetUseSubtitles" }, // 4073757568
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetUseVibration, "GetUseVibration" }, // 3700171024
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewDistance, "GetViewDistance" }, // 4253500762
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetViewEffectsQuality, "GetViewEffectsQuality" }, // 717079257
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_GetVSynch, "GetVSynch" }, // 1869572915
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAMethod, "SetAAMethod" }, // 362195786
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAAQuality, "SetAAQuality" }, // 2750300834
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMaster, "SetAudioMaster" }, // 2830126665
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioMusic, "SetAudioMusic" }, // 1619689023
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioSFX, "SetAudioSFX" }, // 1663054877
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioUI, "SetAudioUI" }, // 82300323
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetAudioVoices, "SetAudioVoices" }, // 2560007027
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetBloom, "SetBloom" }, // 1182034590
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDifficulty, "SetDifficulty" }, // 3099736036
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetDisplayMode, "SetDisplayMode" }, // 3276981489
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetFoliageQuality, "SetFoliageQuality" }, // 1736025359
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetGamma, "SetGamma" }, // 3853019278
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLanguage, "SetLanguage" }, // 1057334142
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetLensFlares, "SetLensFlares" }, // 436228769
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMotionBlur, "SetMotionBlur" }, // 2239984874
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertX, "SetMouseInvertX" }, // 2898326959
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseInvertY, "SetMouseInvertY" }, // 3274704305
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetMouseSensitivity, "SetMouseSensitivity" }, // 492812698
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetQualityPreset, "SetQualityPreset" }, // 2321145288
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolution, "SetResolution" }, // 4120402702
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetResolutionScale, "SetResolutionScale" }, // 2996758700
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetShadowsQuality, "SetShadowsQuality" }, // 2432339794
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSSReflections, "SetSSReflections" }, // 1294629048
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetSubtitleLanguage, "SetSubtitleLanguage" }, // 3128552957
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetTexturesQuality, "SetTexturesQuality" }, // 2781966922
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseColorBlindMode, "SetUseColorBlindMode" }, // 692661929
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseSubtitles, "SetUseSubtitles" }, // 674184251
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetUseVibration, "SetUseVibration" }, // 459118310
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewDistance, "SetViewDistance" }, // 2518508841
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetViewEffectsQuality, "SetViewEffectsQuality" }, // 199971145
		{ &Z_Construct_UFunction_UUESettingsPluginBPLibrary_SetVSynch, "SetVSynch" }, // 2518582719
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUESettingsPluginBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "ModuleRelativePath", "Library/UESettingsPluginBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUESettingsPluginBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUESettingsPluginBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUESettingsPluginBPLibrary_Statics::ClassParams = {
		&UUESettingsPluginBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUESettingsPluginBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUESettingsPluginBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUESettingsPluginBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUESettingsPluginBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUESettingsPluginBPLibrary, 1846299862);
	template<> UESETTINGSPLUGIN_API UClass* StaticClass<UUESettingsPluginBPLibrary>()
	{
		return UUESettingsPluginBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUESettingsPluginBPLibrary(Z_Construct_UClass_UUESettingsPluginBPLibrary, &UUESettingsPluginBPLibrary::StaticClass, TEXT("/Script/UESettingsPlugin"), TEXT("UUESettingsPluginBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUESettingsPluginBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
