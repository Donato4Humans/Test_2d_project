// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Test_2d_projectGameMode.h"
#include "Custom_2d_character.h"

ATest_2d_projectGameMode::ATest_2d_projectGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ACustom_2d_character::StaticClass();	
}
