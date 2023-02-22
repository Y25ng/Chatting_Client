// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Popup_LetterRecv_Widget.generated.h"

class APlayerController;
class UButton;
class UScrollBox;
/**
 * 
 */
UCLASS()
class CHATCLIENT_NEO_API UPopup_LetterRecv_Widget : public UUserWidget
{
	GENERATED_BODY()

private:

	UPROPERTY(meta = (BindWidget))
		UButton* Btn_Close = nullptr;

	UPROPERTY(meta = (BindWidget))
		UScrollBox* ScrollBox_letter = nullptr;

	APlayerController* PlayerController_obj = nullptr;

	bool bOpen = false;
	
public:

	void NativeConstruct() override;

	UFUNCTION()
		void Btn_Close_Func();

	void Letter_Recv_Func();

	APlayerController* GetPlayerController();
	void SetPlayerController(APlayerController* value);

	bool GetbOpen();
	void SetbOpen(bool value);
};
