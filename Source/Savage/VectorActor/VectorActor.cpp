// Fill out your copyright notice in the Description page of Project Settings.


#include "VectorActor.h"

#include "Savage/SavageVector.h"



// Sets default values
AVectorActor::AVectorActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AVectorActor::BeginPlay()
{
	Super::BeginPlay();
	
	Tester.push_back(45);
	
	
}

// Called every frame
void AVectorActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

