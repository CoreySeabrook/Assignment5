// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformerGameModeBase.h"
#include "MarioCamera.h"

APlatformerGameModeBase::APlatformerGameModeBase() :
	CameraTemplate(nullptr),
	Camera(nullptr)
{
}

void APlatformerGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	Camera = GetWorld()->SpawnActor<AMarioCamera>(CameraTemplate, FVector(), FRotator(), SpawnParams);
}
