#include "Client_Source.h"

int createSocket(string IP, int Port)
{
	WSAData Data;
	WORD ver = MAKEWORD(2, 2);
	int iResult = WSAStartup(ver, &Data);

	if (iResult != 0) return 1; // cant start winsock


	// Create Socket
	SOCKET clientSocket = socket(AF_INET, SOCK_STREAM, 0);
	if (clientSocket == INVALID_SOCKET) return 1; // cant create socket

	// Fill in a hint structure
	sockaddr_in hint;
	hint.sin_family = AF_INET;
	hint.sin_port = htons(Port);
	inet_pton(AF_INET, IP.c_str(), &hint.sin_addr);

	// Connect to Server
	iResult = connect(clientSocket, (sockaddr*)&hint, sizeof(hint));
	if (iResult == SOCKET_ERROR) return 1; // Can't connect to Server

	closesocket(clientSocket);
	WSACleanup();

	return 0;

	// Do-while loop to send and receive data
	char buf[DEFAULT_BUFLEN];
	string userInput;

	do
	{
		// Prompt the user for some text
		getline(cin, userInput); // Useranme

		if (userInput.size() > 0)
		{
			int sendResult = send(clientSocket, userInput.c_str(), userInput.size() + 1, 0);

			getline(cin, userInput); // password

			if (userInput.size() > 0) {
				sendResult = send(clientSocket, userInput.c_str(), userInput.size() + 1, 0);
				if (sendResult != SOCKET_ERROR)
				{
					cout << "Message sent!" << endl;
				}
				else
				{
					cout << "Server has been disconnected! Quitting..." << endl;
					break;
				}
			}
		}
	} while (userInput.size() > 0);

	// Gracefully close down everything
	closesocket(clientSocket);
	WSACleanup();

	return 0;
}