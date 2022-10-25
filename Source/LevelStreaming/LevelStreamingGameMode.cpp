// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "LevelStreamingGameMode.h"
#include "LevelStreamingHUD.h"
#include "LevelStreamingCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALevelStreamingGameMode::ALevelStreamingGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALevelStreamingHUD::StaticClass();
}
