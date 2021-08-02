#include "Server_Source.h"


int main()
{
	// Initialize Winsock
	WSADATA wsData;
	WORD ver = MAKEWORD(2, 2);

	if (WSAStartup(ver, &wsData) != 0)
	{
		cout << "Can't Initialize Winsock! Quitting..." << endl;
		return 1;
	}

	int opt = true;

	SOCKET master;

	struct sockaddr_in address;

	timeval  time_out = { 0 };
	time_out.tv_sec = 5;
	time_out.tv_usec = 0;

	char buffer[1025];

	// set of socket 
	fd_set readfds;

	const char* message = "hello";

	int max_clients = 30;
	SOCKET clientSocket[30];

	for (int i = 0; i < 30; i++) {
		clientSocket[i] = 0;
	}

	// create master socket
	if ((master = socket(AF_INET, SOCK_STREAM, 0)) == 0)
	{
		cout << "Socket failed";
		exit(EXIT_FAILURE);
	}

	//set master socket to allow multiple connections
	if (setsockopt(master, SOL_SOCKET, SO_REUSEADDR, (char*)&opt, sizeof(opt)) < 0)
	{
		cout << "setockopt";
		exit(EXIT_FAILURE);
	}

	// type of socket created
	address.sin_family = AF_INET;
	address.sin_addr.S_un.S_addr = INADDR_ANY;
	address.sin_port = htons(8080);

	if (bind(master, (sockaddr*)&address, sizeof(address)) < 0)
	{
		cout << "bind failed";
		exit(EXIT_FAILURE);
	}

	//try to specify maximum of 3 pending connections for the master socket
	if (listen(master, 3) < 0)
	{
		cout << "Listen";
		exit(EXIT_FAILURE);
	}

	while (true)
	{
		SOCKET new_socket;
		int addrlen = sizeof(address);
		FD_ZERO(&readfds);

		// add master to set
		FD_SET(master, &readfds);
		SOCKET max = master;

		for (int i = 0; i < max_clients; i++)
		{
			SOCKET sock = clientSocket[i];
			if (sock > 0)
			{
				FD_SET(sock, &readfds);
			}

			if (sock > max) {
				max = sock;
			}
		}

		cout << "Selecting..." << endl;
		int sockCount = select(max + 1, &readfds, nullptr, nullptr, nullptr);

		if (sockCount < 0 && (errno != EINTR))
		{
			cout << "select error" << endl;
		}

		if (FD_ISSET(master, &readfds))
		{
			if ((new_socket = accept(master, (sockaddr*)&address, (socklen_t*)&addrlen)) < 0)
			{
				perror("accept");
				exit(EXIT_FAILURE);
			}

			cout << "New connection: socket fd is " << new_socket;
			cout << " , ip is: " << inet_ntoa(address.sin_addr);
			cout << ", port is: " << ntohs(address.sin_port) << endl;
			puts("Welcome message sent successfully");

			// add new socket to array of sockets
			for (int i = 0; i < max_clients; i++)
			{
				if (clientSocket[i] == 0)
				{
					clientSocket[i] = new_socket;
					cout << clientSocket[i] << endl;
					cout << "Adding to list of sockets as " << i << endl;
					break;
				}
			}
		}

		for (int i = 0; i < max_clients; i++)
		{
			SOCKET sd = clientSocket[i];
			char buf[1024];
			ZeroMemory(buf, 1024);
			if (FD_ISSET(sd, &readfds))
			{
				char message[DEFAULT_BUFFLEN];
				ZeroMemory(message, DEFAULT_BUFFLEN);

				if (recv(sd, message, DEFAULT_BUFFLEN, 0) < 0)
				{
					getpeername(sd, (sockaddr*)&address, &addrlen);
					cout << "host disconnected, ip: " << inet_ntoa(address.sin_addr);
					cout << " , port: " << ntohs(address.sin_port) << endl;

					closesocket(sd);
					clientSocket[i] = 0;
					FD_CLR(clientSocket[i], &readfds);
				}

				else {
					string tmp = message;

					stringstream ss(tmp);

					int index = tmp[0] - 48;

					if (index == 1) // login signal
					{

						string username, password;
						getline(ss, tmp, '-');
						getline(ss, username, '|');
						getline(ss, password);

						cout << "username: " << username << endl;
						cout << "password: " << password << endl;


						if (checkExistedUsername(username))
						{
							if (checkPass(username, password))
							{
								cout << "Login successfully" << endl;
								send(sd, "100", 4, 0); // 100: Login successfully
							}
							else {
								cout << "Wrong Password! Pls try again." << endl;
								send(sd, "101", 4, 0); // 101: Wrong pass
							}
						}

						else {
							cout << "Account does not existed!" << endl;
							send(sd, "102", 4, 0); // 101: not existed account
						}
					}

					else if (index == 2) // register signal
					{
						string username, password;
						getline(ss, tmp, '-');
						getline(ss, username, '|');
						getline(ss, password);

						cout << "username: " << username << endl;
						cout << "password: " << password << endl;

						if (checkExistedUsername(username)) {
							cout << "Username has already existed!" << endl;
							send(sd, "200", 4, 0);
						}
						else {
							SaveinUserfile(username, password);
							send(sd, "201", 4, 0);
						}
					}
				}

			}
		}
	}

	WSACleanup();
	closesocket(master);

	return 0;
}

SOCKET createSocket(string IP, int portNum)
{
	WSADATA wsData;
	WORD ver = MAKEWORD(2, 2);

	if (WSAStartup(ver, &wsData) != 0)
	{
		cout << "Can't Initialize Winsock! Quitting..." << endl;
		return 0;
	}

	int opt = true;

	SOCKET master;

	struct sockaddr_in address;
	char buffer[1025];

	// set of socket 
	fd_set readfds;
	int max_clients = 30;
	SOCKET clientSocket[30];

	for (int i = 0; i < 30; i++) {
		clientSocket[i] = 0;
	}

	// create master socket
	if ((master = socket(AF_INET, SOCK_STREAM, 0)) == 0)
	{
		cout << "Socket failed";
		return 0;
	}

	//set master socket to allow multiple connections
	if (setsockopt(master, SOL_SOCKET, SO_REUSEADDR, (char*)&opt, sizeof(opt)) < 0)
	{
		cout << "setockopt";
		return 0;
	}

	// type of socket created
	address.sin_family = AF_INET;
	address.sin_addr.S_un.S_addr = INADDR_ANY;
	address.sin_port = htons(8080);

	if (bind(master, (sockaddr*)&address, sizeof(address)) < 0)
	{
		cout << "bind failed";
		return 0;
	}

	//try to specify maximum of 3 pending connections for the master socket
	if (listen(master, 3) < 0)
	{
		cout << "Listen";
		return 0;
	}

	return master;
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

bool checkExistedUsername(std::string inputname)
{
	std::fstream fileUsers("Account.txt", std::ios_base::in);

	if (fileUsers.fail())
	{
		return false;
	}

	std::string username;
	std::string user;
	while (!fileUsers.eof())
	{
		getline(fileUsers, username, ',');
		if (username.compare(inputname) == 0)
		{
			fileUsers.close();
			return true;
		}
		else
		{
			getline(fileUsers, user);
		}
	}
	fileUsers.close();
	return false;
}

bool checkPass(std::string inputname, std::string passkey)
{
	std::fstream fileUsers("Account.txt", std::ios_base::in);

	if (fileUsers.fail()) return false;

	std::string user;
	std::string username;
	std::string password;

	while (!fileUsers.eof())
	{
		getline(fileUsers, username, ',');
		if (username.compare(inputname) == 0)
		{
			getline(fileUsers, password);
			if (password.compare(passkey) == 0)
			{
				fileUsers.close();
				return true;
			}
			else
			{
				fileUsers.close();
				return false;
			}
		}
		else
		{
			getline(fileUsers, user);
		}
	}
	fileUsers.close();
	return false;
}

void SaveinUserfile(std::string inputname, std::string passkey)
{
	std::fstream fileUsers("Account.txt", std::ios_base::out | std::ios_base::app);
	fileUsers << endl << inputname << "," << passkey;
	fileUsers.close();
}
