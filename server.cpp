#include "server.hpp"

WSL::simpSocket::simpSocket(int domain, int typeService,
 int protocol, int port, u_long interface)
{
    //Defining address structure
    address.sin_family = domain; //Socket in Address family
    address.sin_addr.s_addr = htonl(interface);
    address.sin_port = htons(port);

    //Starting the connection
    sock = (domain, typeService, protocol);
    testConnection(sock);
    //Testing establish connection
    connection = networkConnect(sock, address);
    testConnection(connection);
}


void WSL::simpSocket::testConnection(int testConnectionType)
{
    // Confirms socket/connection has been properly established
    if (testConnectionType < 0)
        {
            std::cerr << "Failed to connect\n";
            exit(1);
        }
}

struct sockaddr_in WSL::simpSocket::getAddress()
{
    return address;
}

int WSL::simpSocket::getSock()
{
    return sock;
}

int WSL::simpSocket::getConnection()
{
    return connection;
}