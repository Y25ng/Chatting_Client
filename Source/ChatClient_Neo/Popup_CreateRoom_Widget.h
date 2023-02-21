// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Popup_CreateRoom_Widget.generated.h"

class APlayerController;
class UButton;
class UEditableTextBox;

UCLASS()
class CHATCLIENT_NEO_API UPopup_CreateRoom_Widget : public UUserWidget
{

	GENERATED_BODY()

private:

	APlayerController* PlayerController_obj = nullptr;

	UPROPERTY(meta = (BindWidget))
		UButton* Btn_CreateRoom = nullptr;

	UPROPERTY(meta = (BindWidget))
		UEditableTextBox* EditableTextBox_Num = nullptr;

	UPROPERTY(meta = (BindWidget))
		UEditableTextBox* EditableTextBox_Title = nullptr;

	UPROPERTY(meta = (BindWidget))
		UButton* Btn_Close = nullptr;

public:

	void NativeConstruct() override;

	UFUNCTION()
		void Btn_CreateRoom_Func(); // 인벤토리 닫기 버튼 누를 시 호출 될 함수

	UFUNCTION()
		void Btn_Close_Func(); // 인벤토리 닫기 버튼 누를 시 호출 될 함수

	APlayerController* GetPlayerController();
	void SetPlayerController(APlayerController* value);

};
