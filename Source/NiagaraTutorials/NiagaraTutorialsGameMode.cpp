// Copyright Epic Games, Inc. All Rights Reserved.

#include "NiagaraTutorialsGameMode.h"
#include "NiagaraTutorialsHUD.h"
#include "NiagaraTutorialsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANiagaraTutorialsGameMode::ANiagaraTutorialsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ANiagaraTutorialsHUD::StaticClass();
}
