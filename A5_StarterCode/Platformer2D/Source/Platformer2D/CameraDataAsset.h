// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CameraDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API UCameraDataAsset : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, Category = "Resolution")
	float ResolutionWidth = 640.0f;

	UPROPERTY(EditAnywhere, Category = "Resolution")
	float ResolutionHeight = 480.0f;

	UPROPERTY(EditAnywhere, Category = "Position")
	float CameraInitialX = 448.0f;

	UPROPERTY(EditAnywhere, Category = "Position")
	float CameraInitialZ = 336.0f;

	UPROPERTY(EditAnywhere, Category = "Position")
	float CameraDepthY = 200.0f;

	UPROPERTY(EditAnywhere, Category = "Rotation")
	float CameraRotationYaw = 270.0f;

};
