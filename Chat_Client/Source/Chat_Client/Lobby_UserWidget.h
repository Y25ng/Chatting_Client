// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Lobby_UserWidget.generated.h"

/**
 * 
 */
UCLASS()
class CHAT_CLIENT_API ULobby_UserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	void NativeConstruct() override;

	APlayerController* GetPlayerController();
	void SetPlayerController(APlayerController* value);

private:

	APlayerController* PlayerController_obj = nullptr;

};
