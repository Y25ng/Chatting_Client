// Fill out your copyright notice in the Description page of Project Settings.


#include "Popup_CreateRoom_Widget.h"

#include "UMG_PlayerController.h"

#include "GameFramework/PlayerController.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/EditableTextBox.h"

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

	FString tempInputNum = (EditableTextBox_Num->GetText()).ToString();
	FString tempInputTitle = (EditableTextBox_Title->GetText()).ToString();


}

void UPopup_CreateRoom_Widget::Btn_Close_Func()
{

	RemoveFromViewport();

}

