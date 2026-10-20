// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PlatformerGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API APlatformerGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	APlatformerGameModeBase();

	UPROPERTY(EditAnywhere, Category = "Camera Template")
	TSubclassOf<class AMarioCamera> CameraTemplate;
	
protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY() class AMarioCamera* Camera;
};
