// Fill out your copyright notice in the Description page of Project Settings.


#include "Lobby_UserWidget.h"

#include "GameFramework/PlayerController.h"
#include "Runtime/UMG/Public/Components/EditableTextBox.h"
#include "Runtime/UMG/Public/Components/Button.h"

#include "UMG_PlayerController.h"

#include "UserInfo.h"

void ULobby_UserWidget::NativeConstruct()
{
	if (Btn_RoomList != nullptr)
	{
		Btn_RoomList->OnClicked.AddDynamic(this, &ULobby_UserWidget::Btn_RoomList_Func);
	}

	if (Btn_UserList != nullptr)
	{
		Btn_UserList->OnClicked.AddDynamic(this, &ULobby_UserWidget::Btn_UserList_Func);
	}

	if (Btn_RoomInfo != nullptr)
	{
		Btn_RoomInfo->OnClicked.AddDynamic(this, &ULobby_UserWidget::Btn_RoomInfo_Func);
	}

	if (Btn_UserInfo != nullptr)
	{
		Btn_UserInfo->OnClicked.AddDynamic(this, &ULobby_UserWidget::Btn_UserInfo_Func);
	}

	if (Btn_CreateRoom != nullptr)
	{
		Btn_CreateRoom->OnClicked.AddDynamic(this, &ULobby_UserWidget::Btn_CreateRoom_Func);
	}

	if (Btn_JoinRoom != nullptr)
	{
		Btn_JoinRoom->OnClicked.AddDynamic(this, &ULobby_UserWidget::Btn_JoinRoom_Func);
	}

	if (Btn_Letter != nullptr)
	{
		Btn_Letter->OnClicked.AddDynamic(this, &ULobby_UserWidget::Btn_Letter_Func);
	}

}

APlayerController* ULobby_UserWidget::GetPlayerController()
{
	return PlayerController_obj;
}

void ULobby_UserWidget::SetPlayerController(APlayerController* value)
{
	PlayerController_obj = value;
}

void ULobby_UserWidget::Btn_RoomList_Func()
{

}

void ULobby_UserWidget::Btn_UserList_Func()
{

}

void ULobby_UserWidget::Btn_RoomInfo_Func()
{

	AUMG_PlayerController* PlayerController_objTemp = Cast<AUMG_PlayerController>(PlayerController_obj);

	if (PlayerController_objTemp)
	{

		PlayerController_objTemp->AddToViewPort_Popup_RoomInfo();

	}

}

void ULobby_UserWidget::Btn_UserInfo_Func()
{

	AUMG_PlayerController* PlayerController_objTemp = Cast<AUMG_PlayerController>(PlayerController_obj);

	if (PlayerController_objTemp)
	{

		PlayerController_objTemp->AddToViewPort_Popup_UserInfo();

	}

}

void ULobby_UserWidget::Btn_CreateRoom_Func()
{

	AUMG_PlayerController* PlayerController_objTemp = Cast<AUMG_PlayerController>(PlayerController_obj);

	if (PlayerController_objTemp)
	{

		PlayerController_objTemp->AddToViewPort_Popup_CreateRoom();

	}

}

void ULobby_UserWidget::Btn_JoinRoom_Func()
{

	AUMG_PlayerController* PlayerController_objTemp = Cast<AUMG_PlayerController>(PlayerController_obj);

	if (PlayerController_objTemp)
	{

		PlayerController_objTemp->AddToViewPort_Popup_JoinRoom();

	}

}

void ULobby_UserWidget::Btn_Letter_Func()
{


}
