// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UObject/ConstructorHelpers.h"

#include "Blueprint/UserWidget.h"


#include "Login_HUD.generated.h"

/**
 * 
 */
UCLASS()
class CHAT_CLIENT_API ALogin_HUD : public AHUD
{

	GENERATED_BODY()

private:

	TSubclassOf<class UUserWidget>uiBPClass;
	UUserWidget* uiWidget;

public:

	ALogin_HUD();
	virtual void BeginPlay()override;

};
