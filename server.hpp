#ifndef SERVER_hpp
#define SERVER_hpp

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>

namespace WSL
{
    class simpSocket
    {
        private:
        int sock;
        int connection;
        struct sockaddr_in address;

        public:
        //Constructor
        simpSocket(int domain, int typeService, int protocol,
         int port, u_long interface);
         //Virtual function to connect to network
         virtual int networkConnect(int sock, struct sockaddr_in address) = 0;
         void testConnection(int);
         //Getter functions
         struct sockaddr_in getAddress();
         int getSock();
         int getConnection();
    };
} 

#endif