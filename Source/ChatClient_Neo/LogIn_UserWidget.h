// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LogIn_UserWidget.generated.h"

class APlayerController;
class UButton;
class UEditableTextBox;

/**
 *
 */
UCLASS()
class CHATCLIENT_NEO_API ULogIn_UserWidget : public UUserWidget
{
	GENERATED_BODY()


private:

	// �α��� ��ư
	UPROPERTY(meta = (BindWidget))
		UButton* Btn_LogIn = nullptr;

	// �α��� �Է�â
	UPROPERTY(meta = (BindWidget))
		UEditableTextBox* EditableTextBox_LogIn = nullptr;

	APlayerController* PlayerController_obj = nullptr;


public:

	void NativeConstruct() override;

	UFUNCTION()
		void Btn_LogIn_Func();

	APlayerController* GetPlayerController();
	void SetPlayerController(APlayerController* value);


};
