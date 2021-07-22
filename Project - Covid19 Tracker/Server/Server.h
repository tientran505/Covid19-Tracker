#ifndef _SERVER_H_
#define _SERVER_H_

#define CURL_STATICLIB
#define WIN32_LEAN_AND_MEAN
#define _WINSOCK_DEPRECATED_NO_WARNINGS

#define DEFAULT_PORT 8080
#define DEFAULT_BUFFLEN 4096

#include <iostream>
#include <string>
#include <fstream>
#include <WS2tcpip.h>
#include "curl/curl.h"

#pragma comment (lib, "ws2_32.lib")

using namespace std;

string getWorldData();

#endif