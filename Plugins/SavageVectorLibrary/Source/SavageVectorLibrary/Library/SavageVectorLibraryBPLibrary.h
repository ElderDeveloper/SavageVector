// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "SavageVectorLibrary/Data/SavageVectorStructs.h"
#include "SavageVectorLibraryBPLibrary.generated.h"

UCLASS()
class USavageVectorLibraryBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample function", Keywords = "SavageVectorLibrary sample test testing"), Category = "SavageVectorLibraryTesting")
	static float SavageVectorLibrarySampleFunction(float Param);

	UFUNCTION(BlueprintCallable)
	static float GetVectorArrayFloat(UPARAM(ref) FSavageVectorFloat& Ref , int32 index);

	UFUNCTION(BlueprintCallable)
	static void AddVectorArrayFloat(UPARAM(ref) FSavageVectorFloat& Ref ,float element);
};
