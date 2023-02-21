// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


class FSocket;


class CHATCLIENT_NEO_API ClientSocket
{

public:

	FSocket* Socket;

	ClientSocket();
	~ClientSocket();

};
