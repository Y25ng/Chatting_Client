// Fill out your copyright notice in the Description page of Project Settings.


#include "Popup_JoinRoom_Widget.h"

#include "UMG_PlayerController.h"

#include "GameFramework/PlayerController.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/EditableTextBox.h"

#include "ClientSocket.h"

void UPopup_JoinRoom_Widget::NativeConstruct()
{
	if (Btn_Join != nullptr)
	{
		Btn_Join->OnClicked.AddDynamic(this, &UPopup_JoinRoom_Widget::Btn_Join_Func);
	}

	if (Btn_Close != nullptr)
	{
		Btn_Close->OnClicked.AddDynamic(this, &UPopup_JoinRoom_Widget::Btn_Close_Func);
	}
}

APlayerController* UPopup_JoinRoom_Widget::GetPlayerController()
{

	return PlayerController_obj;

}

void UPopup_JoinRoom_Widget::SetPlayerController(APlayerController* value)
{

	PlayerController_obj = value;

}

void UPopup_JoinRoom_Widget::Btn_Join_Func()
{

	FString tempInputRoomNum = (EditableTextBox_Num->GetText()).ToString();
	FString tempSendCommand = TEXT("J ") + tempInputRoomNum;

	bool bExsistRoom = true;

	AUMG_PlayerController* PlayerController_temp = Cast<AUMG_PlayerController>(PlayerController_obj);

	if (PlayerController_temp)
	{

		ClientSocket* ClientSocketTemp = PlayerController_temp->GetClientSocket();

		if (ClientSocketTemp)
		{

			bExsistRoom = ClientSocketTemp->Send(tempSendCommand);

			PlayerController_temp->AddToViewPort_Room();
			RemoveFromViewport();

			return;

		}
		else
		{
			return;
		}
	}
	else
	{
		return;
	}

}

void UPopup_JoinRoom_Widget::Btn_Close_Func()
{

	RemoveFromViewport();

}