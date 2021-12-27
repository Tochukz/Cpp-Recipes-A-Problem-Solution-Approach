#include <iostream>
#include <winsock2.h>
#include <WS2tcpip.h>

using namespace std;

int main(int argc, char* argv[])
{
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2, ), &wsaData) != 0) {
        return 1;
    }

    addrinfo hints{};
    hints.ai_family = AF_UNSPEC;        // IPv4 or IPv6
    hints.ai_socktype = SOCK_STREAM;   // TCP/IP transport mechanism 

    addrinfo* servinfo{};  
    const char* url { "www.google.com" };
    getaddrinfo(url, "80", &hints, &servinfo);

    SOCKET sockfd{ socket(servinfo->ai_family, servinfo->ai_socktype, servinfo->ai_protocol) };
    int connectionResult{ connect(sockfd, servinfo->ai_addr, servinfo->ai_addrlen) };
    if (connectionResult == -1) {
        cout << "Conection failed!" << endl;
    }
    else 
    {
        cout << "Connection successful!" << endl;
    }
    freeaddrinfo(servinfo);

    WSACleanup();

    return 0;
}

