// Fill out your copyright notice in the Description page of Project Settings.


#include "UESettingsPlayerSubsystem.h"


bool UUESettingsPlayerSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	return true;
}

void UUESettingsPlayerSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}