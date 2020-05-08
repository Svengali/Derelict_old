// Copyright Epic Games, Inc. All Rights Reserved.

#include "DerelictGameMode.h"
#include "DerelictPlayerController.h"
#include "DerelictCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADerelictGameMode::ADerelictGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ADerelictPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}