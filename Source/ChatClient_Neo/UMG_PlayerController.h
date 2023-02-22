// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UMG_PlayerController.generated.h"

class ClientSocket;
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

	TSubclassOf<class UUserWidget>Room_WidgetBPClass;
	UUserWidget* Room_Widget;

	TSubclassOf<class UUserWidget>Popup_CreateRoom_WidgetBPClass;
	UUserWidget* Popup_CreateRoom_Widget;

	TSubclassOf<class UUserWidget>Popup_JoinRoom_WidgetBPClass;
	UUserWidget* Popup_JoinRoom_Widget;

	TSubclassOf<class UUserWidget>Popup_UserInfo_WidgetBPClass;
	UUserWidget* Popup_UserInfo_Widget;

	TSubclassOf<class UUserWidget>Popup_RoomInfo_WidgetBPClass;
	UUserWidget* Popup_RoomInfo_Widget;

	TSubclassOf<class UUserWidget>Popup_RoomList_WidgetBPClass;
	UUserWidget* Popup_RoomList_Widget;

	TSubclassOf<class UUserWidget>Popup_UserList_WidgetBPClass;
	UUserWidget* Popup_UserList_Widget;

	TSubclassOf<class UUserWidget>Popup_Letter_WidgetBPClass;
	UUserWidget* Popup_Letter_Widget;

	TSubclassOf<class UUserWidget>Popup_LetterRecv_WidgetBPClass;
	UUserWidget* Popup_LetterRecv_Widget;

	AUserInfo* UserInfo_obj;
	ClientSocket* ClientSocket_Ptr;

public:

	AUMG_PlayerController();

	virtual void BeginPlay() override;

	AUserInfo* GetUserInfo();
	ClientSocket* GetClientSocket();

	void AddToViewPort_Login();
	void AddToViewPort_Lobby();
	void AddToViewPort_Room();
	void AddToViewPort_Popup_CreateRoom();
	void AddToViewPort_Popup_JoinRoom();
	void AddToViewPort_Popup_UserInfo();
	void AddToViewPort_Popup_UserList();
	void AddToViewPort_Popup_RoomInfo();
	void AddToViewPort_Popup_RoomList();
	void AddToViewPort_Popup_Letter();
	void AddToViewPort_Popup_LetterRecv();

	virtual void Tick(float DeltaTime) override;

};
