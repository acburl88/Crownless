// Copyright Epic Games, Inc. All Rights Reserved.

#include "CrownlessGameMode.h"
#include "CrownlessCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACrownlessGameMode::ACrownlessGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/GamePlay/Blueprints/Characters/MasterCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
