// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG_PlayerController.h"

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

	UserInfo_obj = CreateDefaultSubobject<AUserInfo>(TEXT("UserInfo_obj"));

}

void AUMG_PlayerController::BeginPlay()
{

	Super::BeginPlay();

	if (Login_WidgetBPClass)
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
