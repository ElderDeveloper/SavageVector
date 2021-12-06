// Fill out your copyright notice in the Description page of Project Settings.


#include "SavageVectorStaticLibrary.h"

#include "SavageVectorLibrary/Data/SavageVectorStructs.h"

void USavageVectorStaticLibrary::AddFloatValueToStaticVector(FName VectorName, float Value)
{
	if (const auto VectorRef = StaticFloatVector.Find(VectorName))
	{
		VectorRef->push_back(Value);
	}
	else
	{
		const auto Savage = new SavageVector<float>();
		Savage->push_back(Value);
		StaticFloatVector.Add(VectorName,*Savage);
	}
}

TArray<float> USavageVectorStaticLibrary::GetFloatArrayFromStaticVector(FName VectorName)
{
	TArray<float> OutArray;
	if (const auto VectorRef = StaticFloatVector.Find(VectorName))
	{
		for (size_t i = 0 ; i < VectorRef->size() ; i++)
		{
			const auto Savage = GetVectorValue<float>(*VectorRef,i);
			OutArray.Add(*Savage);
		}
	}
	return OutArray;
}

void USavageVectorStaticLibrary::RemoveFloatIndexFromStaticVector(FName VectorName, int32 index)
{
	if (const auto VectorRef = StaticFloatVector.Find(VectorName))
	{
		if (VectorRef->size() > index)
		{
			//VectorRef->
		}
	}
}
