// Fill out your copyright notice in the Description page of Project Settings.


#include "Room_UserWidget.h"

#include "GameFramework/PlayerController.h"
#include "Runtime/UMG/Public/Components/EditableTextBox.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Components/TextBlock.h"
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
				recvStr = ClientSocketTemp->GetRecvMsg();

				while (recvStr != TEXT("@ ") + PlayerController_temp->GetUserInfo()->GetUserID() + TEXT("> ") + tempUserMsg + "\r\n")
				{
					ClientSocketTemp->ReceivePacket();
					recvStr = ClientSocketTemp->GetRecvMsg();
				}

				recvStr = recvStr.Mid(2, recvStr.Len() - 4);
				UTextBlock* NewTextBlock = NewObject<UTextBlock>();
				NewTextBlock->SetText(FText::FromString(recvStr));
				ScrollBox_Msg->AddChild(NewTextBlock);

				ClientSocketTemp->Send(TEXT("\r"));
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
	AUMG_PlayerController* PlayerController_temp = Cast<AUMG_PlayerController>(PlayerController_obj);
	ClientSocket* ClientSocketTemp = PlayerController_temp->GetClientSocket();;
	if (ClientSocketTemp)
	{
		ClientSocketTemp->Send(TEXT("X"));
	}

	RemoveFromViewport();
}

void URoom_UserWidget::AddTextOnScrollBox(FString Value)
{
	UTextBlock* NewTextBlock = NewObject<UTextBlock>();
	NewTextBlock->SetText(FText::FromString(Value.Mid(0, Value.Len()-2)));
	ScrollBox_Msg->AddChild(NewTextBlock);

	AUMG_PlayerController* PlayerController_temp = Cast<AUMG_PlayerController>(PlayerController_obj);
	ClientSocket* ClientSocketTemp = PlayerController_temp->GetClientSocket();;
	if (ClientSocketTemp)
	{
		ClientSocketTemp->Send(TEXT("\r"));
	}

}

APlayerController* URoom_UserWidget::GetPlayerController()
{
	return PlayerController_obj;
}

void URoom_UserWidget::SetPlayerController(APlayerController* value)
{
	PlayerController_obj = value;
}




