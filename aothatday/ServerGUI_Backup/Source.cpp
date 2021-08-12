#include "function_Server.h"

// create server socket
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


	// create master socket
	if ((master = socket(AF_INET, SOCK_STREAM, 0)) == 0)
	{
		cout << "Socket failed";
		return 0;
	}

	//set master socket to allow multiple connections
	if (setsockopt(master, SOL_SOCKET, SO_REUSEADDR, (char*)&opt, sizeof(opt)) < 0)
	{
		return 0;
	}

	// type of socket created
	address.sin_family = AF_INET;
	address.sin_addr.S_un.S_addr = INADDR_ANY;
	address.sin_port = htons(8080);

	if (bind(master, (sockaddr*)&address, sizeof(address)) < 0)
	{
		return 0;
	}

	//try to specify maximum of 3 pending connections for the master socket
	if (listen(master, 3) < 0)
	{
		return 0;
	}

	return master;
}

// check existed username
bool checkExistedUsername(string inputname)
{
	fstream fileUsers("Account.txt",ios_base::in);

	if (fileUsers.fail())
	{
		return false;
	}

	string username;
	string user;
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

// check password
bool checkPass(string inputname, string passkey)
{
	fstream fileUsers("Account.txt", ios_base::in);

	if (fileUsers.fail()) return false;

	string user;
	string username;
	string password;
	
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

// Save new user data
void SaveinUserfile(string inputname, string passkey)
{
	std::fstream fileUsers("Account.txt", std::ios_base::out | std::ios_base::app);
	fileUsers << inputname << "," << passkey << endl;
	fileUsers.close();
}
