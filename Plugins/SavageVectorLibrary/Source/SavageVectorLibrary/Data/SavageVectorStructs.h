// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../../../../../Source/Savage/SavageVector.h"
#include "UObject/Object.h"
#include "SavageVectorStructs.generated.h"




template<typename T>
T* GetVectorValue(SavageVector<T>& Ref , int32 index) { return &Ref[index] ;}
template<typename T>
void AddVectorValue(SavageVector<T>& Ref , T element) { Ref.push_back(element);}


USTRUCT(BlueprintType)
struct FSavageVectorFloat 
{
	GENERATED_BODY();
public:

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TArray<float> FirstElements;

	FSavageVectorFloat ()
	{
		Vector = new SavageVector<float>();

		for (const auto i : FirstElements)
		{
			Vector->push_back(i);
		}
		if (Vector)
		{
			IsValid=true;
		}
	}

	UPROPERTY(BlueprintReadOnly)
	bool IsValid = false;

	float GetValue(int32 index) const { return *GetVectorValue<float>(*Vector,index);}
	void Add(float Element) { AddVectorValue<float>(*Vector,Element);}
	SavageVector<float>* Vector;
};







UCLASS()
class SAVAGEVECTORLIBRARY_API USavageVectorStructs : public UObject
{
	GENERATED_BODY()
};
