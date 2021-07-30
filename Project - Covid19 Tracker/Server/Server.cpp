#include "Server.h"
#include "rapidjson/document.h"
#include <conio.h>
#include <ctime>

using namespace rapidjson;

int main()
{
	ifstream f;
	f.open("VirusWorld.json", ios::in);



	// Initialize Winsock
	WSADATA wsData;
	WORD ver = MAKEWORD(2, 2);

	if (WSAStartup(ver, &wsData) != 0)
	{
		cout << "Can't Initialize Winsock! Quitting..." << endl;
		return 1;
	}

	// Create a socket
	cout << "Listening... " << endl;
	SOCKET listening = socket(AF_INET, SOCK_STREAM, 0);
	if (listening == INVALID_SOCKET)
	{
		cout << "Can't create a socket! Quitting..." << endl;
		return 1;
	}

	// Bind the IP Address and Port to a Socket
	sockaddr_in hint;
	hint.sin_family = AF_INET;
	hint.sin_port = htons(DEFAULT_PORT);
	hint.sin_addr.S_un.S_addr = INADDR_ANY;

	bind(listening, (sockaddr*)&hint, sizeof(hint));

	// Tell Winsock the socket is for listening
	listen(listening, SOMAXCONN);

	fd_set master;

	FD_ZERO(&master);
	FD_SET(listening, &master);

	while (true)
	{
		fd_set copy = master;

		int socketCount = select(0, &copy, nullptr, nullptr, nullptr);

		for (int i = 0; i < socketCount; i++)
		{
			SOCKET sock = copy.fd_array[i];
			if (sock == listening)
			{
				sockaddr_in client_info = { 0 };
				int addrSize = sizeof(client_info);

				// Accept a new connection
				SOCKET client = accept(listening, nullptr, nullptr);

				// Add the new connection to the list of connected clients
				FD_SET(client, &master);

				getpeername(client, (sockaddr*)&client_info, &addrSize);
				char* ip = inet_ntoa(client_info.sin_addr);

				cout << ip << " connected on port " << ntohs(client) << endl;

				// Send a welcome message to the connected client
				string welcomeMsg = "CORONAVIRUS PANDEMIC NEWS";
				send(client, welcomeMsg.c_str(), welcomeMsg.size() + 1, 0);

			}
			else
			{
				char mess1[DEFAULT_BUFFLEN];
				ZeroMemory(mess1, DEFAULT_BUFFLEN);

				char mess2[DEFAULT_BUFFLEN];
				ZeroMemory(mess2, DEFAULT_BUFFLEN);

				//int iResult = getnameinfo((sockaddr*)&sock, sizeof(sock), host, NI_MAXHOST, service, NI_MAXSERV, 0);

				sockaddr_in sock_info = { 0 };
				int addrSize = sizeof(sock_info);

				// Receive Message
				int bytesIn = recv(sock, mess1, DEFAULT_BUFFLEN, 0);
				int bytesIn_2 = recv(sock, mess2, DEFAULT_BUFFLEN, 0);

				getpeername(sock, (sockaddr*)&sock_info, &addrSize);
				char* ip = inet_ntoa(sock_info.sin_addr);

				if (bytesIn > 0 && bytesIn_2 > 0)
				{
					cout << "Information entered by " << ip << " - Port: " << ntohs(sock) << endl;
					cout << "Username: " << mess1 << endl;
					cout << "password: " << mess2 << endl;
				}

				else if (bytesIn <= 0 || bytesIn_2 <= 0)
				{
					cout << ip << " disconnected on port " << ntohs(sock) << endl;
					// Drop the Client
					closesocket(sock);
					FD_CLR(sock, &master);
				}

				else
				{
					cout << bytesIn << endl;
					cout << "Error in receiving message" << endl;
					closesocket(sock);
					FD_CLR(sock, &master);
				}
			}

		}
	}
	
	

	//shutdown all client
	fd_set copy = master;
	int socketCount = select(0, &copy, nullptr, nullptr, nullptr);
	for (int i = 0; i < socketCount; i++)
	{
		SOCKET sock = copy.fd_array[i];
		int iResult = shutdown(sock, SD_SEND);
		if (iResult == SOCKET_ERROR)
		{
			cout << "Shutdown failed" << WSAGetLastError();
			closesocket(sock);
			return 1;
		}
	}

	// Cleanup Winsock
	WSACleanup();

	std::system("PAUSE");
	return 0;
    return 0;
}

void savefileJson()
{
	// current date/time based on current system
	time_t now = time(0);

	tm* ltm = localtime(&now);

	string savefileName;
	savefileName = to_string(ltm->tm_mday) + "-" + to_string(1 + ltm->tm_mon) + "-" + to_string(1900+ltm->tm_year)+".txt";
	fstream fileSave(savefileName, ios_base::out);
	fileSave << getWorldData();
}

//withdraw an account
void eraseAccount(string inputname)
{
	fstream fileUsers("abc.txt", ios_base::in);
	fstream fileSave("bcd.txt", ios_base::in);
	std::string username;
    std::string password;
    while (!fileUsers.eof())
    {
        getline(fileUsers, username, ',');
        if (username.compare(inputname) == 0)
        {
			getline(fileUsers, password);
			getline(fileUsers, username, ',');
			fileSave << username << ',';
			getline(fileUsers, password);
			fileSave << password << '\n';
        }
        else
        {
			fileSave << username << ',';
            getline(fileUsers, password);
			fileSave << password << '\n';
        }
    }
	fileUsers.close();
	fileSave.close();
	remove("abc.txt");
	rename("bcd.txt", "abc.txt");
}

void closeport(u_short portnum, fd_set clientlist, int &socketCount)
{
	for (int i = 0; i < socketCount; i++)
	{
		if (portnum == ntohs(clientlist.fd_array[i]))
		{
			send(clientlist.fd_array[i], "You have been disconnected from server", 39, 0);
			closesocket(clientlist.fd_array[i]);
			socketCount--;
		}
	}
}