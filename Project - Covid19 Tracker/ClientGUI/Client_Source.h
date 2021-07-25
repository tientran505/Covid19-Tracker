#ifndef _CLIENT_H_
#define _CLIENT_H_

#define WIN32_LEAN_AND_MEAN
#define DEFAULT_BUFLEN 1024

#include <iostream>
#include <WS2tcpip.h>
#include <string>
#pragma comment (lib, "ws2_32.lib")

using namespace std;

int createSocket(string IP, int Port);

#endif // !_CLIENT_H_
