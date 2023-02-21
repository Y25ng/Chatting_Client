// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG_PlayerController.h"

#include "UObject/ConstructorHelpers.h"

#include "Blueprint/UserWidget.h"

#include "LogIn_UserWidget.h"
#include "Lobby_UserWidget.h"
#include "Popup_JoinRoom_Widget.h"
#include "Popup_UserInfo_Widget.h"
#include "Popup_RoomInfo_Widget.h"
#include "Popup_CreateRoom_Widget.h"

#include "UserInfo.h"

AUMG_PlayerController::AUMG_PlayerController()
{

	static ConstructorHelpers::FClassFinder<UUserWidget> Login_UI(TEXT("/Game/StarterContent/Blueprints/Login_WidgetBP"));

	if (Login_UI.Succeeded())
	{

		Login_WidgetBPClass = Login_UI.Class;

	}

	static ConstructorHelpers::FClassFinder<UUserWidget> Lobby_UI(TEXT("/Game/StarterContent/Blueprints/Lobby_WidgetBP"));

	if (Lobby_UI.Succeeded())
	{

		Lobby_WidgetBPClass = Lobby_UI.Class;

	}

	static ConstructorHelpers::FClassFinder<UUserWidget> Popup_CreateRoom_UI(TEXT("/Game/StarterContent/Blueprints/Popup_CreateRoom_WidgetBP"));


	if (Popup_CreateRoom_UI.Succeeded())
	{

		Popup_CreateRoom_WidgetBPClass = Popup_CreateRoom_UI.Class;

	}

	static ConstructorHelpers::FClassFinder<UUserWidget> Popup_JoinRoom_UI(TEXT("/Game/StarterContent/Blueprints/Popup_JoinRoom_WidgetBP"));


	if (Popup_JoinRoom_UI.Succeeded())
	{

		Popup_JoinRoom_WidgetBPClass = Popup_JoinRoom_UI.Class;

	}

	static ConstructorHelpers::FClassFinder<UUserWidget> Popup_UserInfo_UI(TEXT("/Game/StarterContent/Blueprints/Popup_UserInfo_WidgetBP"));


	if (Popup_UserInfo_UI.Succeeded())
	{

		Popup_UserInfo_WidgetBPClass = Popup_UserInfo_UI.Class;

	}

	static ConstructorHelpers::FClassFinder<UUserWidget> Popup_RoomInfo_UI(TEXT("/Game/StarterContent/Blueprints/Popup_RoomInfo_WidgetBP"));


	if (Popup_RoomInfo_UI.Succeeded())
	{

		Popup_RoomInfo_WidgetBPClass = Popup_RoomInfo_UI.Class;

	}

	UserInfo_obj = CreateDefaultSubobject<AUserInfo>(TEXT("UserInfo_obj"));

}

void AUMG_PlayerController::BeginPlay()
{

	Super::BeginPlay();


	if (Lobby_WidgetBPClass)
	{
		Login_Widget = CreateWidget<UUserWidget>(GetWorld(), Login_WidgetBPClass);

		if (Login_Widget)
		{

			ULogIn_UserWidget* Login_Widget_temp = Cast<ULogIn_UserWidget>(Login_Widget);

			if (Login_Widget_temp)
			{
				Login_Widget_temp->SetPlayerController(this);
				Login_Widget_temp->AddToViewport();
			}

		}
	}


}


AUserInfo* AUMG_PlayerController::GetUserInfo()
{

	return UserInfo_obj;

}

void AUMG_PlayerController::AddToViewPort_Lobby()
{

	if (Lobby_WidgetBPClass)
	{

		Lobby_Widget = CreateWidget<UUserWidget>(GetWorld(), Lobby_WidgetBPClass);

		if (Lobby_Widget)
		{

			ULobby_UserWidget* Lobby_Widget_temp = Cast<ULobby_UserWidget>(Lobby_Widget);

			if (Lobby_Widget_temp)
			{

				Lobby_Widget_temp->SetPlayerController(this);
				Lobby_Widget_temp->AddToViewport();

			}

		}

	}

}

void AUMG_PlayerController::AddToViewPort_Popup_CreateRoom()
{

	if (Popup_CreateRoom_WidgetBPClass)
	{

		Popup_CreateRoom_Widget = CreateWidget<UUserWidget>(GetWorld(), Popup_CreateRoom_WidgetBPClass);

		UPopup_CreateRoom_Widget* Popup_CreateRoom_Widget_temp = Cast<UPopup_CreateRoom_Widget>(Popup_CreateRoom_Widget);

		if (Popup_CreateRoom_Widget_temp)
		{

			Popup_CreateRoom_Widget_temp->SetPlayerController(this);
			Popup_CreateRoom_Widget_temp->AddToViewport();


		}

	}

}

void AUMG_PlayerController::AddToViewPort_Popup_JoinRoom()
{

	if (Popup_JoinRoom_WidgetBPClass)
	{

		Popup_JoinRoom_Widget = CreateWidget<UUserWidget>(GetWorld(), Popup_JoinRoom_WidgetBPClass);

		UPopup_JoinRoom_Widget* Popup_JoinRoom_Widget_temp = Cast<UPopup_JoinRoom_Widget>(Popup_JoinRoom_Widget);

		if (Popup_JoinRoom_Widget_temp)
		{

			Popup_JoinRoom_Widget_temp->SetPlayerController(this);
			Popup_JoinRoom_Widget_temp->AddToViewport();


		}

	}

}

void AUMG_PlayerController::AddToViewPort_Popup_UserInfo()
{

	if (Popup_UserInfo_WidgetBPClass)
	{

		Popup_UserInfo_Widget = CreateWidget<UUserWidget>(GetWorld(), Popup_UserInfo_WidgetBPClass);

		UPopup_UserInfo_Widget* Popup_UserInfo_Widget_temp = Cast<UPopup_UserInfo_Widget>(Popup_UserInfo_Widget);

		if (Popup_UserInfo_Widget_temp)
		{

			Popup_UserInfo_Widget_temp->SetPlayerController(this);
			Popup_UserInfo_Widget_temp->AddToViewport();

		}

	}

}


void AUMG_PlayerController::AddToViewPort_Popup_RoomInfo()
{

	if (Popup_RoomInfo_WidgetBPClass)
	{

		Popup_RoomInfo_Widget = CreateWidget<UUserWidget>(GetWorld(), Popup_RoomInfo_WidgetBPClass);

		UPopup_RoomInfo_Widget* Popup_RoomInfo_Widget_temp = Cast<UPopup_RoomInfo_Widget>(Popup_RoomInfo_Widget);

		if (Popup_RoomInfo_Widget_temp)
		{

			Popup_RoomInfo_Widget_temp->SetPlayerController(this);
			Popup_RoomInfo_Widget_temp->AddToViewport();

		}

	}

}