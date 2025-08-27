// Copyright Epic Games, Inc. All Rights Reserved.


#include "fps_aim_assist_lyraPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "InputMappingContext.h"
#include "fps_aim_assist_lyraCameraManager.h"
#include "Blueprint/UserWidget.h"
#include "fps_aim_assist_lyra.h"
#include "Widgets/Input/SVirtualJoystick.h"

Afps_aim_assist_lyraPlayerController::Afps_aim_assist_lyraPlayerController()
{
	// set the player camera manager class
	PlayerCameraManagerClass = Afps_aim_assist_lyraCameraManager::StaticClass();
}

void Afps_aim_assist_lyraPlayerController::BeginPlay()
{
	Super::BeginPlay();

	
	// only spawn touch controls on local player controllers
	if (SVirtualJoystick::ShouldDisplayTouchInterface() && IsLocalPlayerController())
	{
		// spawn the mobile controls widget
		MobileControlsWidget = CreateWidget<UUserWidget>(this, MobileControlsWidgetClass);

		if (MobileControlsWidget)
		{
			// add the controls to the player screen
			MobileControlsWidget->AddToPlayerScreen(0);

		} else {

			UE_LOG(Logfps_aim_assist_lyra, Error, TEXT("Could not spawn mobile controls widget."));

		}

	}
}

void Afps_aim_assist_lyraPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// only add IMCs for local player controllers
	if (IsLocalPlayerController())
	{
		// Add Input Mapping Context
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
		{
			for (UInputMappingContext* CurrentContext : DefaultMappingContexts)
			{
				Subsystem->AddMappingContext(CurrentContext, 0);
			}

			// only add these IMCs if we're not using mobile touch input
			if (!SVirtualJoystick::ShouldDisplayTouchInterface())
			{
				for (UInputMappingContext* CurrentContext : MobileExcludedMappingContexts)
				{
					Subsystem->AddMappingContext(CurrentContext, 0);
				}
			}
		}
	}
	
}
