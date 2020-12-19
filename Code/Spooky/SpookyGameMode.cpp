// Copyright Epic Games, Inc. All Rights Reserved.

#include "SpookyGameMode.h"
#include "SpookyCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASpookyGameMode::ASpookyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
