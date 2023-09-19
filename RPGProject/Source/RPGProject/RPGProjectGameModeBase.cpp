// Copyright Epic Games, Inc. All Rights Reserved.


#include "RPGProjectGameModeBase.h"
#include "Player/Yin/YinCharacter.h"
#include "Player/Kwang/KwangCharacter.h"
#include "Player/Gideon/GideonCharacter.h"
#include "Player/PlayerCharacter.h"

ARPGProjectGameModeBase::ARPGProjectGameModeBase()
{
	DefaultPawnClass = AKwangCharacter::StaticClass();
}

ARPGProjectGameModeBase::~ARPGProjectGameModeBase()
{
}
