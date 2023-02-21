// Fill out your copyright notice in the Description page of Project Settings.


#include "Chat_GameMode.h"

AChat_GameMode::AChat_GameMode()
{
	HUDClass = ALogin_HUD::StaticClass(); 
	DefaultPawnClass = nullptr;
}