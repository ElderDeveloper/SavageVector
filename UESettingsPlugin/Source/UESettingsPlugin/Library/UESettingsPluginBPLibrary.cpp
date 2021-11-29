// Copyright Epic Games, Inc. All Rights Reserved.

#include "UESettingsPluginBPLibrary.h"

#include "UESettingsPlugin/Subsystems/UESettingsPlayerSubsystem.h"

UGameInstance* getGameInstance(const UObject* WorldContextObject)
{
	if (WorldContextObject)
	{
		if (const auto World = Cast<UWorld>(WorldContextObject))
		{
			return World->GetGameInstance();
		}
	}
	return nullptr;
}



UUESettingsPluginBPLibrary::UUESettingsPluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}
int32 UUESettingsPluginBPLibrary::GetDifficulty(const UObject* WorldContextObject)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetDifficulty();
	return 0;
}

int32 UUESettingsPluginBPLibrary::GetLanguage(const UObject* WorldContextObject)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetLanguage();
	return 0;
}

int32 UUESettingsPluginBPLibrary::GetSubtitleLanguage(const UObject* WorldContextObject)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetSubtitleLanguage();
	return 0;
}

bool UUESettingsPluginBPLibrary::GetUseSubtitles(const UObject* WorldContextObject)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetSubtitles();
	return 0;
}

bool UUESettingsPluginBPLibrary::GetColorBlindMode(const UObject* WorldContextObject)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetColorBlindMode();
	return 0;
}

int32 UUESettingsPluginBPLibrary::GetQualityPreset(const UObject* WorldContextObject)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetQualityPreset();
	return 0;
}

int32 UUESettingsPluginBPLibrary::GetTextures(const UObject* WorldContextObject)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetTextureQuality();
	return 0;
}

int32 UUESettingsPluginBPLibrary::GetShadows(const UObject* WorldContextObject)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetShadowQuality();
	return 0;
}

int32 UUESettingsPluginBPLibrary::GetFoliage(const UObject* WorldContextObject)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetFoliageQuality();
	return 0;
}

int32 UUESettingsPluginBPLibrary::GetAAMethod(const UObject* WorldContextObject)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetAAMethod();
	return 0;
}

int32 UUESettingsPluginBPLibrary::GetAAQuality(const UObject* WorldContextObject)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetAAQuality();
	return 0;
}

int32 UUESettingsPluginBPLibrary::GetViewDistance(const UObject* WorldContextObject) 
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetViewDistance();
	return 0;
}

int32 UUESettingsPluginBPLibrary::GetViewEffectsQuality(const UObject* WorldContextObject)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetViewEffectsQuality();
	return 0;
}

bool UUESettingsPluginBPLibrary::GetMotionBlur(const UObject* WorldContextObject)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetMotionBlur();
	return 0;
}

bool UUESettingsPluginBPLibrary::GetLensFlares(const UObject* WorldContextObject)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetLensFlares();
	return 0;
}

bool UUESettingsPluginBPLibrary::GetSSReflections(const UObject* WorldContextObject)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetSSReflections();
	return 0;
}

bool UUESettingsPluginBPLibrary::GetBloom(const UObject* WorldContextObject)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetBloom();
	return 0;
}

float UUESettingsPluginBPLibrary::GetResolutionScale(const UObject* WorldContextObject)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetResolutionScale();
	return 75;
}

int32 UUESettingsPluginBPLibrary::GetResolution(const UObject* WorldContextObject)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetResolution();
	return 0;
}

int32 UUESettingsPluginBPLibrary::GetDisplayMode(const UObject* WorldContextObject)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetDisplayMode();
	return 0;
}

float UUESettingsPluginBPLibrary::GetGamma(const UObject* WorldContextObject)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetGamma();
	return 0;
}

bool UUESettingsPluginBPLibrary::GetVSynch(const UObject* WorldContextObject)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetVSynch();
	return 0;
}

float UUESettingsPluginBPLibrary::GetAudioMaster(const UObject* WorldContextObject)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetAudioMaster();
	return 100;
}

float UUESettingsPluginBPLibrary::GetAudioMusic(const UObject* WorldContextObject)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetAudioMusic();
	return 100;
}

float UUESettingsPluginBPLibrary::GetAudioSFX(const UObject* WorldContextObject)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetAudioSFX();
	return 100;
}

float UUESettingsPluginBPLibrary::GetAudioVoices(const UObject* WorldContextObject)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetAudioVoices();
	return 100;
}

float UUESettingsPluginBPLibrary::GetAudioUI(const UObject* WorldContextObject)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetAudioUI();
	return 100;
}

bool UUESettingsPluginBPLibrary::GetMouseInvertX(const UObject* WorldContextObject)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetMouseInvertX();
	return false;
}

bool UUESettingsPluginBPLibrary::GetMouseInvertY(const UObject* WorldContextObject)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetMouseInvertY();
	return false;
}

float UUESettingsPluginBPLibrary::GetUseVibration(const UObject* WorldContextObject)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetUseVibration();
	return false;
}

float UUESettingsPluginBPLibrary::GetMouseSensitivity(const UObject* WorldContextObject)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->GetMouseSensitivity();
	return 30;
}







void UUESettingsPluginBPLibrary::SetDifficulty(const UObject* WorldContextObject, uint8 Difficulty)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetDifficulty(Difficulty);
}

void UUESettingsPluginBPLibrary::SetLanguage(const UObject* WorldContextObject, int32 Language)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetLanguage(Language);
}

void UUESettingsPluginBPLibrary::SetSubtitleLanguage(const UObject* WorldContextObject, int32 SubtitleLanguage)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetSubtitleLanguage(SubtitleLanguage);
}

void UUESettingsPluginBPLibrary::SetUseSubtitles(const UObject* WorldContextObject, bool Subtitles)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetUseSubtitles(Subtitles);
}

void UUESettingsPluginBPLibrary::SetUseColorBlindMode(const UObject* WorldContextObject, bool ColorBlindMode)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetUseColorBlindMode(ColorBlindMode);
}

void UUESettingsPluginBPLibrary::SetQualityPreset(const UObject* WorldContextObject, int32 QualityPreset)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetQualityPreset(QualityPreset);
}

void UUESettingsPluginBPLibrary::SetTexturesQuality(const UObject* WorldContextObject, int32 Textures)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetTexturesQuality(Textures);
}

void UUESettingsPluginBPLibrary::SetShadowsQuality(const UObject* WorldContextObject, int32 Shadows)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetShadowsQuality(Shadows);
}

void UUESettingsPluginBPLibrary::SetFoliageQuality(const UObject* WorldContextObject, int32 Foliage)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetFoliageQuality(Foliage);
}

void UUESettingsPluginBPLibrary::SetAAMethod(const UObject* WorldContextObject, int32 AAMethod)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetAAMethod(AAMethod);
}

void UUESettingsPluginBPLibrary::SetAAQuality(const UObject* WorldContextObject, int32 AAQuality)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetAAQuality(AAQuality);
}

void UUESettingsPluginBPLibrary::SetViewDistance(const UObject* WorldContextObject, int32 ViewDistance)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetViewDistance(ViewDistance);
}

void UUESettingsPluginBPLibrary::SetViewEffectsQuality(const UObject* WorldContextObject, int32 ViewEffects)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetViewEffectsQuality(ViewEffects);
}

void UUESettingsPluginBPLibrary::SetMotionBlur(const UObject* WorldContextObject, bool MotionBlur)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetMotionBlur(MotionBlur);
}

void UUESettingsPluginBPLibrary::SetLensFlares(const UObject* WorldContextObject, bool LensFlares)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetLensFlares(LensFlares);
}

void UUESettingsPluginBPLibrary::SetSSReflections(const UObject* WorldContextObject, bool SSReflection)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetSSReflections(SSReflection);
}

void UUESettingsPluginBPLibrary::SetBloom(const UObject* WorldContextObject, bool Bloom)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetBloom(Bloom);
}

void UUESettingsPluginBPLibrary::SetResolutionScale(const UObject* WorldContextObject, float ResolutionScale)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetResolutionScale(ResolutionScale);
}

void UUESettingsPluginBPLibrary::SetResolution(const UObject* WorldContextObject, int32 Resolution)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetResolution(Resolution);
}

void UUESettingsPluginBPLibrary::SetDisplayMode(const UObject* WorldContextObject, int32 DisplayMode)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetDisplayMode(DisplayMode);
}

void UUESettingsPluginBPLibrary::SetGamma(const UObject* WorldContextObject, float Gamma)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetGamma(Gamma);
}

void UUESettingsPluginBPLibrary::SetVSynch(const UObject* WorldContextObject, bool VSynch)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetVSynch(VSynch);
}

void UUESettingsPluginBPLibrary::SetAudioMaster(const UObject* WorldContextObject, float Master)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetAudioMaster(Master);
}

void UUESettingsPluginBPLibrary::SetAudioMusic(const UObject* WorldContextObject, float Music)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetAudioMusic(Music);
}

void UUESettingsPluginBPLibrary::SetAudioSFX(const UObject* WorldContextObject, float SFX)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetAudioSFX(SFX);
}

void UUESettingsPluginBPLibrary::SetAudioVoices(const UObject* WorldContextObject, float Voices)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetAudioVoices(Voices);
}

void UUESettingsPluginBPLibrary::SetAudioUI(const UObject* WorldContextObject, float UI)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetAudioUI(UI);
}

void UUESettingsPluginBPLibrary::SetMouseInvertX(const UObject* WorldContextObject, bool InvertX)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetMouseInvertX(InvertX);
}

void UUESettingsPluginBPLibrary::SetMouseInvertY(const UObject* WorldContextObject, bool InvertY)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetMouseInvertY(InvertY);
}

void UUESettingsPluginBPLibrary::SetUseVibration(const UObject* WorldContextObject, bool Vibration)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetUseVibration(Vibration);
}

void UUESettingsPluginBPLibrary::SetMouseSensitivity(const UObject* WorldContextObject, float MouseSensitivity)
{
	if (const auto GI = getGameInstance(WorldContextObject))
		return GI->GetSubsystem<UUESettingsPlayerSubsystem>()->SetMouseSensitivity(MouseSensitivity);
}
