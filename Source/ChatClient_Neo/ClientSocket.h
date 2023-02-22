// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

enum eConnectServer
{

	MAX_BUFFERSIZE = 512,

};

class FSocket;

class CHATCLIENT_NEO_API ClientSocket
{

private:

	FString RecvMsg;


public:

	FSocket* Socket;

	ClientSocket();
	~ClientSocket();

	void ConnectServer();
	bool Send(const FString& packet);
	bool ReceivePacket();

	FString& GetRecvMsg();

};