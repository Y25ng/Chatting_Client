// Fill out your copyright notice in the Description page of Project Settings.


#include "Lobby_UserWidget.h"


void ULobby_UserWidget::NativeConstruct()
{

}

APlayerController* ULobby_UserWidget::GetPlayerController()
{
	return PlayerController_obj;
}

void ULobby_UserWidget::SetPlayerController(APlayerController* value)
{
	PlayerController_obj = value;
}
