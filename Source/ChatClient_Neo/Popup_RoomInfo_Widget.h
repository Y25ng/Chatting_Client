// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Popup_RoomInfo_Widget.generated.h"

class APlayerController;
class UButton;
class UEditableTextBox;

UCLASS()
class CHATCLIENT_NEO_API UPopup_RoomInfo_Widget : public UUserWidget
{
	GENERATED_BODY()


private:

	APlayerController* PlayerController_obj = nullptr;

	UPROPERTY(meta = (BindWidget))
		UButton* Btn_OK = nullptr;

	UPROPERTY(meta = (BindWidget))
		UEditableTextBox* EditableTextBox_RoomNum = nullptr;

	UPROPERTY(meta = (BindWidget))
		UButton* Btn_Close = nullptr;

public:

	void NativeConstruct() override;
	APlayerController* GetPlayerController();
	void SetPlayerController(APlayerController* value);

	UFUNCTION()
		void Btn_RoomInfo_Func();

	UFUNCTION()
		void Btn_Close_Func();

};
