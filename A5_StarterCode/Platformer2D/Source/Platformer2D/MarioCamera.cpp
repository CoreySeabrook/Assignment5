// Fill out your copyright notice in the Description page of Project Settings.


#include "MarioCamera.h"
#include "CameraDataAsset.h"
#include "Camera/CameraComponent.h"


// Sets default values
AMarioCamera::AMarioCamera() :
	Settings(nullptr),
	Camera(nullptr)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Camera = CreateDefaultSubobject<UCameraComponent>("Camera Component");
	Camera->SetProjectionMode(ECameraProjectionMode::Orthographic);
	Camera->SetupAttachment(RootComponent);

	Tags.Add("MarioCamera");
}

// Called when the game starts or when spawned
void AMarioCamera::BeginPlay()
{
	Super::BeginPlay();
	
	// Set the Camera's initial settings
	if (Camera != nullptr && Settings != nullptr)
	{
		float aspectRatio = Settings->ResolutionWidth / Settings->ResolutionHeight;
		Camera->SetAspectRatio(aspectRatio);
		Camera->SetConstraintAspectRatio(true);
		Camera->SetOrthoWidth(Settings->ResolutionWidth);
		Camera->SetRelativeLocation(FVector(Settings->CameraInitialX, Settings->CameraDepthY, Settings->CameraInitialZ));
		Camera->SetRelativeRotation(FQuat(FRotator(0.0f, Settings->CameraRotationYaw, 0.0f)));
	}

	// Set the first player controller's view target (this)
	GetWorld()->GetFirstPlayerController()->SetViewTargetWithBlend(this);
}

// Called every frame
void AMarioCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

