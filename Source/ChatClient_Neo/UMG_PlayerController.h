// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UMG_PlayerController.generated.h"

class AUserInfo;
class UUserWidget;

UCLASS()
class CHATCLIENT_NEO_API AUMG_PlayerController : public APlayerController
{

	GENERATED_BODY()

private:

	TSubclassOf<class UUserWidget>Login_WidgetBPClass;
	UUserWidget* Login_Widget;

	TSubclassOf<class UUserWidget>Lobby_WidgetBPClass;
	UUserWidget* Lobby_Widget;

	TSubclassOf<class UUserWidget>Popup_CreateRoom_WidgetBPClass;
	UUserWidget* Popup_CreateRoom_Widget;

	TSubclassOf<class UUserWidget>Popup_JoinRoom_WidgetBPClass;
	UUserWidget* Popup_JoinRoom_Widget;

	TSubclassOf<class UUserWidget>Popup_UserInfo_WidgetBPClass;
	UUserWidget* Popup_UserInfo_Widget;

	TSubclassOf<class UUserWidget>Popup_RoomInfo_WidgetBPClass;
	UUserWidget* Popup_RoomInfo_Widget;

	AUserInfo* UserInfo_obj;

public:

	AUMG_PlayerController();

	virtual void BeginPlay() override;

	AUserInfo* GetUserInfo();

	void AddToViewPort_Lobby();
	void AddToViewPort_Popup_CreateRoom();
	void AddToViewPort_Popup_JoinRoom();
	void AddToViewPort_Popup_UserInfo();
	void AddToViewPort_Popup_RoomInfo();

};
