// Fill out your copyright notice in the Description page of Project Settings.


#include "UserInfo.h"

// Sets default values
AUserInfo::AUserInfo()
{
	UserID = TEXT("");
}

// Called when the game starts or when spawned
void AUserInfo::BeginPlay()
{
	Super::BeginPlay();
	
}

FString AUserInfo::GetUserID()
{
	return UserID;
}

void AUserInfo::SetUserID(FString value)
{
	UserID = value;
}


