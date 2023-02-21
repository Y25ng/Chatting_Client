// Fill out your copyright notice in the Description page of Project Settings.


#include "ClientSocket.h"

#include "Windows/AllowWindowsPlatformTypes.h"
#include "Networking/Public/Interfaces/IPv4/IPv4Address.h"
#include "Engine.h"
#include "Networking.h"
#include "Sockets.h"
#include "SocketSubsystem.h"


ClientSocket::ClientSocket()
{

	FSocket* Socket_temp = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(TEXT("Stream"), TEXT("Client Socket"));
	FString address = TEXT("127.0.0.1");
	FIPv4Address ip;

	int32 port = 9000;

	FIPv4Address::Parse(address, ip);
	bool bIsConnetcted = false;

	TSharedRef<FInternetAddr> addr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
	addr->SetIp(ip.Value);
	addr->SetPort(port);

	bIsConnetcted = Socket_temp->Connect(*addr);
	Socket = Socket_temp;

}

ClientSocket::~ClientSocket()
{
}




