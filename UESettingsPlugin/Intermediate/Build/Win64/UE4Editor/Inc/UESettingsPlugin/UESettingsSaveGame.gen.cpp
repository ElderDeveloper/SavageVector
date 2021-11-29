// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UESettingsPlugin/Save/UESettingsSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUESettingsSaveGame() {}
// Cross Module References
	UESETTINGSPLUGIN_API UClass* Z_Construct_UClass_UUESettingsSaveGame_NoRegister();
	UESETTINGSPLUGIN_API UClass* Z_Construct_UClass_UUESettingsSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_UESettingsPlugin();
// End Cross Module References
	void UUESettingsSaveGame::StaticRegisterNativesUUESettingsSaveGame()
	{
	}
	UClass* Z_Construct_UClass_UUESettingsSaveGame_NoRegister()
	{
		return UUESettingsSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UUESettingsSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUESettingsSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_UESettingsPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUESettingsSaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Save/UESettingsSaveGame.h" },
		{ "ModuleRelativePath", "Save/UESettingsSaveGame.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUESettingsSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUESettingsSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUESettingsSaveGame_Statics::ClassParams = {
		&UUESettingsSaveGame::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUESettingsSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUESettingsSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUESettingsSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUESettingsSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUESettingsSaveGame, 2443854869);
	template<> UESETTINGSPLUGIN_API UClass* StaticClass<UUESettingsSaveGame>()
	{
		return UUESettingsSaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUESettingsSaveGame(Z_Construct_UClass_UUESettingsSaveGame, &UUESettingsSaveGame::StaticClass, TEXT("/Script/UESettingsPlugin"), TEXT("UUESettingsSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUESettingsSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
