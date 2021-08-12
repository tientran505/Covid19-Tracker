#ifndef _SERVER_SOURCE_H_
#define _SERVER_SOURCE_H_H

#include <iostream>
using namespace std;

#define CURL_STATICLIB
#define WIN32_LEAN_AND_MEAN
#define _WINSOCK_DEPRECATED_NO_WARNINGS

#define DEFAULT_PORT 8080
#define DEFAULT_BUFFLEN 512

#include <iostream>
#include <string>
#include <fstream>
#include <WS2tcpip.h>
#include "curl/curl.h"
#include <sstream>
#pragma comment (lib, "ws2_32.lib")

using namespace std;

SOCKET createSocket(string IP, int portNum);
#endif // !_SERVER_SOURCE_H_

