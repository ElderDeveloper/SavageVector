// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../../../../../Source/Savage/SavageVector.h"
#include "SavageVectorStaticLibrary.generated.h"


static TMap<FName,SavageVector<float>> StaticFloatVector;



UCLASS()
class SAVAGEVECTORLIBRARY_API USavageVectorStaticLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable , Category="Savage Vector|Static")
	static void AddFloatValueToStaticVector(FName VectorName , float Value);

	UFUNCTION(BlueprintPure , Category="Savage Vector|Static")
	static TArray<float> GetFloatArrayFromStaticVector(FName VectorName);

	UFUNCTION(BlueprintPure , Category="Savage Vector|Static")
	static void RemoveFloatIndexFromStaticVector(FName VectorName , int32 index);
};
