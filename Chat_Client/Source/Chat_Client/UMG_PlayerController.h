// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UObject/ConstructorHelpers.h"

#include "Blueprint/UserWidget.h"
#include "LogIn_UserWidget.h"
#include "Lobby_UserWidget.h"

#include "UserInfo.h"

#include "UMG_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class CHAT_CLIENT_API AUMG_PlayerController : public APlayerController
{

	GENERATED_BODY()

public:

	AUMG_PlayerController();

	virtual void BeginPlay() override;

	AUserInfo* GetUserInfo();

	void AddToViewPort_Lobby();
	
private:

	TSubclassOf<class UUserWidget>Login_WidgetBPClass;
	UUserWidget* Login_Widget;

	TSubclassOf<class UUserWidget>Lobby_WidgetBPClass;
	UUserWidget* Lobby_Widget;

	AUserInfo* UserInfo_obj;

};
