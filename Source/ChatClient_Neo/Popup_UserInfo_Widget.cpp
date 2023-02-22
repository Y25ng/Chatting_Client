// Fill out your copyright notice in the Description page of Project Settings.


#include "Popup_UserInfo_Widget.h"

#include "UMG_PlayerController.h"

#include "GameFramework/PlayerController.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/EditableTextBox.h"
#include "Components/ScrollBox.h"
#include "Components/TextBlock.h"

#include "ClientSocket.h"

void UPopup_UserInfo_Widget::NativeConstruct()
{

	if (Btn_OK != nullptr)
	{

		Btn_OK->OnClicked.AddDynamic(this, &UPopup_UserInfo_Widget::Btn_UserInfo_Func);

	}

	if (Btn_Close != nullptr)
	{

		Btn_Close->OnClicked.AddDynamic(this, &UPopup_UserInfo_Widget::Btn_Close_Func);

	}

}

APlayerController* UPopup_UserInfo_Widget::GetPlayerController()
{

	return PlayerController_obj;

}

void UPopup_UserInfo_Widget::SetPlayerController(APlayerController* value)
{

	PlayerController_obj = value;

}

void UPopup_UserInfo_Widget::Btn_UserInfo_Func()
{

	FString tempInputID = (EditableTextBox_ID->GetText()).ToString();
	FString tempSendCommand = TEXT("PF ") + tempInputID;

	bool bExsistRoom = true;

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

				UTextBlock* TextBlockTemp = Cast< UTextBlock>(ScrollBox_Text->GetChildAt(0));

				if (TextBlockTemp)
				{
					TextBlockTemp->SetText(FText::FromString(recvStr));
				}

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

void UPopup_UserInfo_Widget::Btn_Close_Func()
{

	RemoveFromViewport();

}