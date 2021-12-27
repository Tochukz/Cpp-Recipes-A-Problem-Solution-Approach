#include <iostream>

using namespace std;

#ifdef _MSC_VER 

#pragma comment(lib, "Ws2_32.lib")

#include <WinSock2.h>
#include <WS2tcpip.h>

#define UsingWinsock 1
using ssize_t = SSIZE_T;

#else 

#define UsingWinsock 0 

#endif


class WinsockWrapper 
{
    public:  
        WinsockWrapper() 
        {
#if UsingWinsock 
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        exit(1);
    }
    #ifndef NDEBUG
        cout << "Winsock started!" << endl;
    #endif 
#endif
        }

        ~WinsockWrapper()
        {
#if UsingWinsock 
    WSACleanup();

    #ifdef NDEBUG 
        cout << "Winsock shut down!" << endl;
    #endif
#endif

        }
}; 
    
    
    
 int main(int argc, char* argv[])
{
     WinsockWrapper myWinsockWrapper;
     return 0;
}

/**
  The Winsock2 library is included using pragma only when Visual Studio is beingused to build 
  The necessary Winsock header files are also included. 
*/