// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Room_UserWidget.generated.h"


class APlayerController;
class UButton;
class UEditableTextBox;
class UScrollBox;


UCLASS()
class CHATCLIENT_NEO_API URoom_UserWidget : public UUserWidget
{
	GENERATED_BODY()

private:


	UPROPERTY(meta = (BindWidget))
		UButton* Btn_Input = nullptr;

	UPROPERTY(meta = (BindWidget))
		UButton* Btn_Close = nullptr;

	UPROPERTY(meta = (BindWidget))
		UEditableTextBox* EditableTextBox_Input = nullptr;

	UPROPERTY(meta = (BindWidget))
		UScrollBox* ScrollBox_Msg;


	APlayerController* PlayerController_obj = nullptr;

public:

	void NativeConstruct() override;


	UFUNCTION()
		void Btn_Input_Func();

	UFUNCTION()
		void Btn_Close_Func();

	APlayerController* GetPlayerController();
	void AddTextOnScrollBox(FString Value);
	void SetPlayerController(APlayerController* value);

};
