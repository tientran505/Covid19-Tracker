#ifndef _CLIENT_H_
#define _CLIENT_H_

#define WIN32_LEAN_AND_MEAN
#define DEFAULT_BUFLEN 1024

#include <iostream>
#include <WS2tcpip.h>
#include <string>
#include <msclr/marshal_cppstd.h>
#include <fstream>
#include <sstream>
#pragma comment (lib, "ws2_32.lib")

using namespace std;

static string IP = "";
static int portNum = 2;

SOCKET createSocket(string IPNum, int Port);
bool canCreateSocket(string IPNum, int& Port);
//static SOCKET clientSocket;

bool checkLogin(string username, string pass);

#endif // !_CLIENT_H_
