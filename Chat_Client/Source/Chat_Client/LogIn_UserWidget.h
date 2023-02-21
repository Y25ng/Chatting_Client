// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "Runtime/UMG/Public/Components/EditableTextBox.h"
#include "Runtime/UMG/Public/Components/Button.h"

#include "UMG_PlayerController.h"
#include "UserInfo.h"

#include "LogIn_UserWidget.generated.h"

/**
 * 
 */
UCLASS()
class CHAT_CLIENT_API ULogIn_UserWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	void NativeConstruct() override;

	UFUNCTION()
		void Btn_LogIn_Func(); // �κ��丮 �ݱ� ��ư ���� �� ȣ�� �� �Լ�

	APlayerController* GetPlayerController();
	void SetPlayerController(APlayerController* value);

private:

	// �α��� ��ư
	UPROPERTY(meta = (BindWidget))
		UButton* Btn_LogIn = nullptr;

	// �α��� �Է�â
	UPROPERTY(meta = (BindWidget))
		UEditableTextBox* EditableTextBox_LogIn = nullptr;

	APlayerController* PlayerController_obj = nullptr;
};
