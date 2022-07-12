// Copyright Epic Games, Inc. All Rights Reserved.

#include "MechaJamIIIGameMode.h"
#include "MechaJamIIICharacter.h"
#include "UObject/ConstructorHelpers.h"

AMechaJamIIIGameMode::AMechaJamIIIGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
