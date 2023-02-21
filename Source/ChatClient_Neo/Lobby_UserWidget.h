// Fill out your copyright notice in the Description page of Project Settings.

/**/
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Lobby_UserWidget.generated.h"

class APlayerController;
class UButton;
class UEditableTextBox;

UCLASS()
class CHATCLIENT_NEO_API ULobby_UserWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	void NativeConstruct() override;

	APlayerController* GetPlayerController();
	void SetPlayerController(APlayerController* value);

	UFUNCTION()
		void Btn_RoomList_Func();

	UFUNCTION()
		void Btn_UserList_Func();

	UFUNCTION()
		void Btn_RoomInfo_Func();

	UFUNCTION()
		void Btn_UserInfo_Func();

	UFUNCTION()
		void Btn_CreateRoom_Func();

	UFUNCTION()
		void Btn_JoinRoom_Func();

	UFUNCTION()
		void Btn_Letter_Func();

private:

	APlayerController* PlayerController_obj = nullptr;

	UPROPERTY(meta = (BindWidget))
		UButton* Btn_RoomList = nullptr;

	UPROPERTY(meta = (BindWidget))
		UButton* Btn_UserList = nullptr;

	UPROPERTY(meta = (BindWidget))
		UButton* Btn_RoomInfo = nullptr;

	UPROPERTY(meta = (BindWidget))
		UButton* Btn_UserInfo = nullptr;

	UPROPERTY(meta = (BindWidget))
		UButton* Btn_CreateRoom = nullptr;

	UPROPERTY(meta = (BindWidget))
		UButton* Btn_JoinRoom = nullptr;

	UPROPERTY(meta = (BindWidget))
		UButton* Btn_Letter = nullptr;

};
