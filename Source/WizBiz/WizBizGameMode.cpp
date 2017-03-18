// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "WizBiz.h"
#include "WizBizGameMode.h"
#include "WizBizHUD.h"
#include "WizBizCharacter.h"

AWizBizGameMode::AWizBizGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AWizBizHUD::StaticClass();
}
