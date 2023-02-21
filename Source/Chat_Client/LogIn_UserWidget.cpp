// Fill out your copyright notice in the Description page of Project Settings.


#include "LogIn_UserWidget.h"

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
	bool bCanCreateID = true;

	if (bCanCreateID)
	{
		UE_LOG(LogTemp, Log, TEXT("Create ID"));

		if (PlayerController_obj)
		{
			AUMG_PlayerController* PlayerController_temp = Cast<AUMG_PlayerController>(PlayerController_obj);

			if (PlayerController_temp)
			{

				AUserInfo* UserInfo_temp = PlayerController_temp->GetUserInfo();

				if (UserInfo_temp)
				{

					UserInfo_temp->SetUserID(tempUserID);
					RemoveFromViewport();
					PlayerController_temp->AddToViewPort_Lobby();
				}

			}

		}
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("이미 존재하는 ID"));
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
