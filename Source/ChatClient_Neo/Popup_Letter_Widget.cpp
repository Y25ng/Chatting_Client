// Fill out your copyright notice in the Description page of Project Settings.


#include "Popup_Letter_Widget.h"

#include "GameFramework/PlayerController.h"
#include "Runtime/UMG/Public/Components/EditableTextBox.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include <string.h>
#include <string>

#include "UMG_PlayerController.h"
#include "UserInfo.h"
#include "ClientSocket.h"

void UPopup_Letter_Widget::NativeConstruct()
{
	if (Btn_Send != nullptr)
	{
		Btn_Send->OnClicked.AddDynamic(this, &UPopup_Letter_Widget::Btn_Send_Func);
	}

	if (Btn_Close != nullptr)
	{
		Btn_Close->OnClicked.AddDynamic(this, &UPopup_Letter_Widget::Btn_Close_Func);
	}
}

APlayerController* UPopup_Letter_Widget::GetPlayerController()
{

	return PlayerController_obj;

}

void UPopup_Letter_Widget::SetPlayerController(APlayerController* value)
{

	PlayerController_obj = value;

}


void UPopup_Letter_Widget::Btn_Send_Func()
{

	FString tempInputID = (EditableTextBox_ID->GetText()).ToString();
	FString tempInputMsg = (EditableTextBox_Msg->GetText()).ToString();
	FString tempSendCommand = TEXT("TO ") + tempInputID + TEXT(" ") + tempInputMsg;


	AUMG_PlayerController* PlayerController_temp = Cast<AUMG_PlayerController>(PlayerController_obj);

	if (PlayerController_temp)
	{
		ClientSocket* ClientSocketTemp = PlayerController_temp->GetClientSocket();

		if (ClientSocketTemp)
		{
			FString recvStrTemp1 = "1";

			if (ClientSocketTemp->ReceivePacket())
			{
				recvStrTemp1 = ClientSocketTemp->GetRecvMsg();
			}

			if (ClientSocketTemp->Send(tempSendCommand))
			{
				while (true)
				{

					FString recvStrTemp2 = "1";

					if (ClientSocketTemp->ReceivePacket())
					{
						recvStrTemp2 = ClientSocketTemp->GetRecvMsg();
					}

					if (recvStrTemp1 != recvStrTemp2)
						break;
					else
						continue;

				}

				FString recvStr = ClientSocketTemp->GetRecvMsg();

			}

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

void UPopup_Letter_Widget::Btn_Close_Func()
{

	RemoveFromViewport();

}