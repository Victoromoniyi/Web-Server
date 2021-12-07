#ifndef SERVER_hpp
#define SERVER_hpp

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>

namespace WSL
{
    class simpSocket
    {
        private:
        int connection;
        struct sockaddr_in address;

        public:
        simpSocket(int domain, int typeService, int protocol,
         int port, u_long interface);
    };
} 

#endif