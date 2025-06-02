// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan_012025TypGameMode.h"
#include "BomberMan_012025TypCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABomberMan_012025TypGameMode::ABomberMan_012025TypGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
