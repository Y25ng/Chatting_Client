// Fill out your copyright notice in the Description page of Project Settings.


#include "Popup_JoinRoom_Widget.h"

#include "UMG_PlayerController.h"

#include "GameFramework/PlayerController.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/EditableTextBox.h"

void UPopup_JoinRoom_Widget::NativeConstruct()
{
	if (Btn_CreateRoom != nullptr)
	{
		Btn_CreateRoom->OnClicked.AddDynamic(this, &UPopup_JoinRoom_Widget::Btn_CreateRoom_Func);
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

void UPopup_JoinRoom_Widget::Btn_CreateRoom_Func()
{

	FString tempInputNum = (EditableTextBox_Num->GetText()).ToString();


}

void UPopup_JoinRoom_Widget::Btn_Close_Func()
{

	RemoveFromViewport();

}