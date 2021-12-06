// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SavageVectorLibrary/cpptest.h"
#include "UObject/Object.h"
#include "SavageVectorStructs.generated.h"




template<typename T>
T* GetVectorValue(vector<T>& Ref , int32 index) { return &Ref[index] ;}
template<typename T>
void AddVectorValue(vector<T>& Ref , T element) { Ref.Push_Back(element);}


USTRUCT(BlueprintType)
struct FSavageVectorFloat 
{
	GENERATED_BODY();
public:

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TArray<float> FirstElements;

	FSavageVectorFloat ()
	{
		Vector = new vector<float>();

		for (const auto i : FirstElements)
		{
			Vector->Push_Back(i);
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
	vector<float>* Vector;
};


USTRUCT(BlueprintType)
struct FSavageVectorInt
{
	GENERATED_BODY();
public:

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TArray<int32> FirstElements;

	FSavageVectorInt ()
	{
		Vector = new vector<int32>();

		for (const auto i : FirstElements)
		{
			Vector->Push_Back(i);
		}
		if (Vector)
		{
			IsValid=true;
		}
	}

	UPROPERTY(BlueprintReadOnly)
	bool IsValid = false;

	
	float GetValue(int32 index) const { return *GetVectorValue<int32>(*Vector,index);}
	void Add(float Element) { AddVectorValue<int32>(*Vector,Element);}
	vector<int32>* Vector;
};






UCLASS()
class SAVAGEVECTORLIBRARY_API USavageVectorStructs : public UObject
{
	GENERATED_BODY()
};
