// Fill out your copyright notice in the Description page of Project Settings.


#include "Room_UserWidget.h"

#include "GameFramework/PlayerController.h"
#include "Runtime/UMG/Public/Components/EditableTextBox.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Components/ScrollBox.h"
#include <string.h>
#include <string>

#include "UMG_PlayerController.h"
#include "UserInfo.h"
#include "ClientSocket.h"


void URoom_UserWidget::NativeConstruct()
{
	
	if (Btn_Input != nullptr)
	{
		Btn_Input->OnClicked.AddDynamic(this, &URoom_UserWidget::Btn_Input_Func);
	}

	if (Btn_Close != nullptr)
	{
		Btn_Close->OnClicked.AddDynamic(this, &URoom_UserWidget::Btn_Close_Func);
	}

}


void URoom_UserWidget::Btn_Input_Func()
{

	FString tempUserMsg = (EditableTextBox_Input->GetText()).ToString();
	FString recvStr;

	AUMG_PlayerController* PlayerController_temp = Cast<AUMG_PlayerController>(PlayerController_obj);

	if (PlayerController_temp)
	{
		ClientSocket* ClientSocketTemp = PlayerController_temp->GetClientSocket();

		if (ClientSocketTemp)
		{
			if (ClientSocketTemp->Send(tempUserMsg))
			{
				while (true)
				{
					FString recvStrTemp1 = "1";
					FString recvStrTemp2 = "2";

					if (ClientSocketTemp->ReceivePacket())
					{
						recvStrTemp1 = ClientSocketTemp->GetRecvMsg();
					}

					if (ClientSocketTemp->ReceivePacket())
					{
						recvStrTemp2 = ClientSocketTemp->GetRecvMsg();
					}

					if (recvStrTemp1 == recvStrTemp2)
						break;
					else
						continue;
				}

				recvStr = ClientSocketTemp->GetRecvMsg();

			}
		}
		else
		{
			return;
		}

	}
}

void URoom_UserWidget::Btn_Close_Func()
{
	RemoveFromViewport();
}

APlayerController* URoom_UserWidget::GetPlayerController()
{
	return PlayerController_obj;
}

void URoom_UserWidget::SetPlayerController(APlayerController* value)
{
	PlayerController_obj = value;
}


