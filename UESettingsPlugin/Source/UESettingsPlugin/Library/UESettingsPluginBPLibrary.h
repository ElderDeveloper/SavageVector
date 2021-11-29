// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "UESettingsPluginBPLibrary.generated.h"

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/
UCLASS()
class UUESettingsPluginBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:
	
	//Gameplay
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static int32 GetDifficulty(const UObject* WorldContextObject);

	
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static int32 GetLanguage(const UObject* WorldContextObject);

	
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static int32 GetSubtitleLanguage(const UObject* WorldContextObject);

	
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static bool GetUseSubtitles(const UObject* WorldContextObject);

	
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static bool GetColorBlindMode(const UObject* WorldContextObject);




	

	//Graphics
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static int32 GetQualityPreset(const UObject* WorldContextObject);

	
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static int32 GetTextures(const UObject* WorldContextObject);

	
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static int32 GetShadows(const UObject* WorldContextObject);

	
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static int32 GetFoliage (const UObject* WorldContextObject);

	
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static int32 GetAAMethod(const UObject* WorldContextObject);

	
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static int32 GetAAQuality(const UObject* WorldContextObject);

	
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static int32 GetViewDistance(const UObject* WorldContextObject) ;

	
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static int32 GetViewEffectsQuality(const UObject* WorldContextObject);

	
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static bool GetMotionBlur(const UObject* WorldContextObject);

	
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static bool GetLensFlares(const UObject* WorldContextObject);

	
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static bool GetSSReflections(const UObject* WorldContextObject);

	
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static bool GetBloom(const UObject* WorldContextObject);

	
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static float GetResolutionScale(const UObject* WorldContextObject);




	

	//Display
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static int32 GetResolution(const UObject* WorldContextObject);


	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static int32 GetDisplayMode(const UObject* WorldContextObject);


	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static float GetGamma(const UObject* WorldContextObject);


	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static bool GetVSynch(const UObject* WorldContextObject);



	

	
	//Audio
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static float GetAudioMaster(const UObject* WorldContextObject);


	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static float GetAudioMusic(const UObject* WorldContextObject);


	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static float GetAudioSFX(const UObject* WorldContextObject);


	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static float GetAudioVoices(const UObject* WorldContextObject);


	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static float GetAudioUI(const UObject* WorldContextObject);




	

	//Controls
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static bool GetMouseInvertX(const UObject* WorldContextObject);


	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static bool GetMouseInvertY(const UObject* WorldContextObject);


	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static float GetUseVibration(const UObject* WorldContextObject);


	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static float GetMouseSensitivity(const UObject* WorldContextObject);




	//<<<<<<<<<<<<<<<<<<<<<<<<< SET SETTINGS >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>



	//Gameplay
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetDifficulty(const UObject* WorldContextObject , uint8 Difficulty);


	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetLanguage(const UObject* WorldContextObject , int32 Language);

	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetSubtitleLanguage(const UObject* WorldContextObject , int32 SubtitleLanguage);

	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetUseSubtitles(const UObject* WorldContextObject , bool Subtitles);

	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetUseColorBlindMode(const UObject* WorldContextObject, bool ColorBlindMode);

	

	//Graphics
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetQualityPreset(const UObject* WorldContextObject, int32 QualityPreset);

	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetTexturesQuality(const UObject* WorldContextObject, int32 Textures);

	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetShadowsQuality(const UObject* WorldContextObject, int32 Shadows);

	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetFoliageQuality (const UObject* WorldContextObject, int32 Foliage);

	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetAAMethod(const UObject* WorldContextObject, int32 AAMethod);

	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetAAQuality(const UObject* WorldContextObject, int32 AAQuality);

	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetViewDistance(const UObject* WorldContextObject, int32 ViewDistance) ;

	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetViewEffectsQuality(const UObject* WorldContextObject, int32 ViewEffects);

	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetMotionBlur(const UObject* WorldContextObject, bool MotionBlur);

	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetLensFlares(const UObject* WorldContextObject, bool LensFlares);

	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetSSReflections(const UObject* WorldContextObject, bool SSReflection);

	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetBloom(const UObject* WorldContextObject, bool Bloom);

	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetResolutionScale(const UObject* WorldContextObject, float ResolutionScale);



	//Display
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetResolution(const UObject* WorldContextObject, int32 Resolution);


	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetDisplayMode(const UObject* WorldContextObject, int32 DisplayMode);


	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetGamma(const UObject* WorldContextObject, float Gamma);


	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetVSynch(const UObject* WorldContextObject, bool VSynch);

	
	//Audio
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetAudioMaster(const UObject* WorldContextObject, float Master);


	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetAudioMusic(const UObject* WorldContextObject, float Music);


	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetAudioSFX(const UObject* WorldContextObject, float SFX);


	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetAudioVoices(const UObject* WorldContextObject, float Voices);


	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetAudioUI(const UObject* WorldContextObject, float UI);

	

	//Controls
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetMouseInvertX(const UObject* WorldContextObject, bool InvertX);


	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetMouseInvertY(const UObject* WorldContextObject, bool InvertY);


	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetUseVibration(const UObject* WorldContextObject, bool Vibration);


	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SetMouseSensitivity(const UObject* WorldContextObject, float MouseSensitivity);
	
};
