// Fill out your copyright notice in the Description page of Project Settings.


#include "LogIn_UserWidget.h"

#include "GameFramework/PlayerController.h"
#include "Runtime/UMG/Public/Components/EditableTextBox.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Components/TextBlock.h"
#include <string.h>
#include <string>

#include "UMG_PlayerController.h"
#include "UserInfo.h"
#include "ClientSocket.h"


void ULogIn_UserWidget::NativeConstruct()
{
	if (Btn_LogIn != nullptr)
	{
		Btn_LogIn->OnClicked.AddDynamic(this, &ULogIn_UserWidget::Btn_LogIn_Func);
	}
}

void ULogIn_UserWidget::Btn_LogIn_Func()
{

	FString tempUserID = (EditableTextBox_LogIn->GetText()).ToString();
	FString tempSendCommand = TEXT("LOGIN ") + tempUserID;
	FString recvStr = "";

	bool bCanCreateID = true;

	AUMG_PlayerController* PlayerController_temp = Cast<AUMG_PlayerController>(PlayerController_obj);

	if (PlayerController_temp)
	{

		ClientSocket* ClientSocketTemp = PlayerController_temp->GetClientSocket();

		if (ClientSocketTemp)
		{
			if (ClientSocketTemp->Send(tempSendCommand))
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
	else
	{
		return;
	}

	if ( recvStr != L"** 아이디를 이미 사용중입니다.다른 아이디를 사용해주세요.\n\r")
	{
		if (PlayerController_obj)
		{
			AUserInfo* UserInfo_temp = PlayerController_temp->GetUserInfo();

			if (UserInfo_temp)
			{
				UserInfo_temp->SetUserID(tempUserID);
				RemoveFromViewport();
				PlayerController_temp->AddToViewPort_Lobby();

			}
			else
			{

			}

		}
		else
		{
			return;
		}
	}
	else
	{
		Text_Guide->SetText(FText::FromString (*FString(recvStr)));
		return;
	}

}

APlayerController* ULogIn_UserWidget::GetPlayerController()
{
	return PlayerController_obj;
}

void ULogIn_UserWidget::SetPlayerController(APlayerController* value)
{
	PlayerController_obj = value;
}