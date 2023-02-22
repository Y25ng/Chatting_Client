// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Popup_Letter_Widget.generated.h"

class APlayerController;
class UButton;
class UEditableTextBox;
class UTextBlock;


UCLASS()
class CHATCLIENT_NEO_API UPopup_Letter_Widget : public UUserWidget
{
	GENERATED_BODY()

private:

	UPROPERTY(meta = (BindWidget))
		UButton* Btn_Send = nullptr;

	UPROPERTY(meta = (BindWidget))
		UButton* Btn_Close = nullptr;

	UPROPERTY(meta = (BindWidget))
		UEditableTextBox* EditableTextBox_Msg = nullptr;

	UPROPERTY(meta = (BindWidget))
		UEditableTextBox* EditableTextBox_ID = nullptr;

	APlayerController* PlayerController_obj = nullptr;

public:

	void NativeConstruct() override;

	UFUNCTION()
		void Btn_Send_Func();

	UFUNCTION()
		void Btn_Close_Func();

	APlayerController* GetPlayerController();
	void SetPlayerController(APlayerController* value);
	
};
