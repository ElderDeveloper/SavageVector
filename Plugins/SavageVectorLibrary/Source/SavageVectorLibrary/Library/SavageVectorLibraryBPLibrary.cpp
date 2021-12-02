// Copyright Epic Games, Inc. All Rights Reserved.

#include "SavageVectorLibraryBPLibrary.h"
#include "SavageVectorLibrary.h"

USavageVectorLibraryBPLibrary::USavageVectorLibraryBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float USavageVectorLibraryBPLibrary::SavageVectorLibrarySampleFunction(float Param)
{
	return -1;
}

void USavageVectorLibraryBPLibrary::AddVectorArrayFloat(UPARAM(ref) FSavageVectorFloat& Ref, float element)
{
	Ref.Add(element);
}

float USavageVectorLibraryBPLibrary::GetVectorArrayFloat(UPARAM(ref) FSavageVectorFloat& Ref, int32 index)
{
	return Ref.GetValue(index);
}

