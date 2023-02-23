// Fill out your copyright notice in the Description page of Project Settings.


#include "Popup_CreateRoom_Widget.h"

#include "UMG_PlayerController.h"

#include "GameFramework/PlayerController.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/EditableTextBox.h"

#include "ClientSocket.h"

void UPopup_CreateRoom_Widget::NativeConstruct()
{
	if (Btn_CreateRoom != nullptr)
	{
		Btn_CreateRoom->OnClicked.AddDynamic(this, &UPopup_CreateRoom_Widget::Btn_CreateRoom_Func);
	}

	if (Btn_Close != nullptr)
	{

		Btn_Close->OnClicked.AddDynamic(this, &UPopup_CreateRoom_Widget::Btn_Close_Func);

	}
}

APlayerController* UPopup_CreateRoom_Widget::GetPlayerController()
{

	return PlayerController_obj;

}

void UPopup_CreateRoom_Widget::SetPlayerController(APlayerController* value)
{

	PlayerController_obj = value;

}

void UPopup_CreateRoom_Widget::Btn_CreateRoom_Func()
{

	FString tempInputNum;
	FString tempInputTitle;
	FString tempSendCommand;

	if (EditableTextBox_Num)
	{
		tempInputNum = (EditableTextBox_Num->GetText()).ToString();
	}
	else
	{
		return;
	}

	int32 tempNum = FCString::Atof(*tempInputNum);

	if (!(tempNum >= 2 && tempNum <= 20))
	{
		return;
	}

	if (EditableTextBox_Title)
	{
		tempInputTitle = (EditableTextBox_Title->GetText()).ToString();
	}
	else
	{
		return;
	}

	tempSendCommand = TEXT("O ") + tempInputNum + TEXT(" ") + tempInputTitle;

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

void UPopup_CreateRoom_Widget::Btn_Close_Func()
{
	RemoveFromViewport();
}