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

}

ClientSocket::~ClientSocket()
{

}

void ClientSocket::ConnectServer()
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

	if (Socket_temp)
	{

		bIsConnetcted = Socket_temp->Connect(*addr);
		Socket = Socket_temp;

	}

	Socket_temp->SetNonBlocking();
	Socket_temp->SetNoDelay();

}

bool ClientSocket::Send(const FString& packet)
{
	
	if (Socket)
	{

		FString packetEnd = packet;
		packetEnd += "\r\n";

		char message[eConnectServer::MAX_BUFFERSIZE];
		const wchar_t* encode = *packetEnd;
		char defaultSetting = '?';

		int32 len = WideCharToMultiByte(CP_ACP, 0, encode, -1, NULL, 0, NULL, NULL);
		WideCharToMultiByte(CP_ACP, 0, encode, -1, message, len, &defaultSetting, NULL);
		int32 bytesSents = 0;

		return Socket->Send((uint8*)(message), len, bytesSents);

	}
	else
	{

		return false;

	}

}

bool ClientSocket::ReceivePacket()
{

	if (Socket)
	{

		char buf[eConnectServer::MAX_BUFFERSIZE] = { NULL, };
		int32 bytesSents = 0;
		FString encode;

		bool returnValue = Socket->Recv((uint8*)(buf), eConnectServer::MAX_BUFFERSIZE - 1, bytesSents);
		if (!returnValue)
		{
			return false;
		}
		else if (bytesSents == 0)
		{
			return true;
		}

		wchar_t encodebuf[eConnectServer::MAX_BUFFERSIZE] = { NULL, };
		int32 len = MultiByteToWideChar(CP_ACP, 0, buf, strlen(buf), NULL, NULL);
		MultiByteToWideChar(CP_ACP, 0, buf, strlen(buf), encodebuf, len);

		RecvMsg = encodebuf;

		return true;

	}

	return false;

}

FString& ClientSocket::GetRecvMsg()
{

	return RecvMsg;

}

