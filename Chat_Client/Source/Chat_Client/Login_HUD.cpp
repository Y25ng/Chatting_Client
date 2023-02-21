// Fill out your copyright notice in the Description page of Project Settings.


#include "Login_HUD.h"


ALogin_HUD::ALogin_HUD()
{
	static ConstructorHelpers::FClassFinder<UUserWidget>ui(TEXT("/Game/StarterContent/Blueprints/Login_WidgetBP"));
	if (ui.Succeeded())
	{
		uiBPClass = ui.Class; // 게임 시작 위젯을 가져옴
	}
}

void ALogin_HUD::BeginPlay()
{
	Super::BeginPlay();

	if (uiBPClass)
	{
		uiWidget = CreateWidget<UUserWidget>(GetWorld(), uiBPClass);
		if (uiWidget)
		{
			uiWidget->AddToViewport(); // 게임 시작 위젯을 화면에 출력
		}
	}
}