// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UserInfo.generated.h"

UCLASS()
class CHATCLIENT_NEO_API AUserInfo : public AActor
{

	GENERATED_BODY()

public:

	// Sets default values for this actor's properties
	AUserInfo();

	FString GetUserID();
	void SetUserID(FString value);

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	FString UserID;

};
