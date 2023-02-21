// Fill out your copyright notice in the Description page of Project Settings.


#include "Popup_RoomInfo_Widget.h"

#include "UMG_PlayerController.h"

#include "GameFramework/PlayerController.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/EditableTextBox.h"

void UPopup_RoomInfo_Widget::NativeConstruct()
{
	if (Btn_OK != nullptr)
	{
		Btn_OK->OnClicked.AddDynamic(this, &UPopup_RoomInfo_Widget::Btn_RoomInfo_Func);
	}

	if (Btn_Close != nullptr)
	{
		Btn_Close->OnClicked.AddDynamic(this, &UPopup_RoomInfo_Widget::Btn_Close_Func);
	}
}

APlayerController* UPopup_RoomInfo_Widget::GetPlayerController()
{

	return PlayerController_obj;

}

void UPopup_RoomInfo_Widget::SetPlayerController(APlayerController* value)
{

	PlayerController_obj = value;

}

void UPopup_RoomInfo_Widget::Btn_RoomInfo_Func()
{

	FString tempInputRoomNum = (EditableTextBox_RoomNum->GetText()).ToString();


}

void UPopup_RoomInfo_Widget::Btn_Close_Func()
{

	RemoveFromViewport();

}