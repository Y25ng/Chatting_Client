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
		void Btn_LogIn_Func(); // 인벤토리 닫기 버튼 누를 시 호출 될 함수

	APlayerController* GetPlayerController();
	void SetPlayerController(APlayerController* value);

private:

	// 로그인 버튼
	UPROPERTY(meta = (BindWidget))
		UButton* Btn_LogIn = nullptr;

	// 로그인 입력창
	UPROPERTY(meta = (BindWidget))
		UEditableTextBox* EditableTextBox_LogIn = nullptr;

	APlayerController* PlayerController_obj = nullptr;
};
