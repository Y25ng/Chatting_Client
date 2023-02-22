// Fill out your copyright notice in the Description page of Project Settings.


#include "Popup_LetterRecv_Widget.h"

#include "GameFramework/PlayerController.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Components/ScrollBox.h"
#include "Components/TextBlock.h"
#include <string.h>
#include <string>

#include "UMG_PlayerController.h"
#include "UserInfo.h"
#include "ClientSocket.h"

void UPopup_LetterRecv_Widget::NativeConstruct()
{
	if (Btn_Close != nullptr)
	{
		Btn_Close->OnClicked.AddDynamic(this, &UPopup_LetterRecv_Widget::Btn_Close_Func);
	}
}


APlayerController* UPopup_LetterRecv_Widget::GetPlayerController()
{

	return PlayerController_obj;

}

void UPopup_LetterRecv_Widget::SetPlayerController(APlayerController* value)
{

	PlayerController_obj = value;

}


void UPopup_LetterRecv_Widget::Letter_Recv_Func()
{
	AUMG_PlayerController* PlayerController_temp = Cast<AUMG_PlayerController>(PlayerController_obj);

	if (PlayerController_temp)
	{
		ClientSocket* ClientSocketTemp = PlayerController_temp->GetClientSocket();

		if (ClientSocketTemp)
		{
			FString recvStr = ClientSocketTemp->GetRecvMsg();

			UTextBlock* TextBlockTemp = Cast< UTextBlock>(ScrollBox_letter->GetChildAt(0));
			if (TextBlockTemp)
			{
				TextBlockTemp->SetText(FText::FromString(recvStr));
			}

			ClientSocketTemp->Send(TEXT("\n\r"));
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

void UPopup_LetterRecv_Widget::Btn_Close_Func()
{
	bOpen = false;
	RemoveFromViewport();
}

bool UPopup_LetterRecv_Widget::GetbOpen()
{
	return bOpen;
}

void UPopup_LetterRecv_Widget::SetbOpen(bool value)
{
	bOpen = value;
}