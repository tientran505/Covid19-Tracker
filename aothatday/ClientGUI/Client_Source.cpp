#include "Client_Source.h"

bool canCreateSocket(string IPNum, int& Port)
{
	WSAData Data;
	WORD ver = MAKEWORD(2, 2);
	int iResult = WSAStartup(ver, &Data);

	if (iResult != 0) return false; // cant start winsock


	// Create Socket
	SOCKET clntSock = socket(AF_INET, SOCK_STREAM, 0);
	if (clntSock == INVALID_SOCKET) return false; // cant create socket

	return true;
}

SOCKET createSocket(string IPNum, int Port)
{
	WSAData Data;
	WORD ver = MAKEWORD(2, 2);
	int iResult = WSAStartup(ver, &Data);

	if (iResult != 0) return INVALID_SOCKET; // cant start winsock


	// Create Socket
	SOCKET clntSock = socket(AF_INET, SOCK_STREAM, 0);
	if (clntSock == INVALID_SOCKET) return INVALID_SOCKET; // cant create socket

	// Fill in a hint structure
	sockaddr_in hint;
	hint.sin_family = AF_INET;
	hint.sin_port = htons(Port);
	inet_pton(AF_INET, IPNum.c_str(), &hint.sin_addr);

	// Connect to Server
	iResult = connect(clntSock, (sockaddr*)&hint, sizeof(hint));
	if (iResult == SOCKET_ERROR) return 1; // Can't connect to Server
	
	/*closesocket(clientSocket);
	WSACleanup();*/

	return clntSock;
}

bool checkLogin(string username, string pass) {
	ifstream f;
	f.open("account.txt", ios::in);

	string userTmp, passTmp;
	getline(f, userTmp, ',');
	getline(f, passTmp);
	if (userTmp == username && passTmp == pass) return true;
	return false;
}