#include "server.hpp"

WSL::simpSocket::simpSocket(int domain, int typeService,
 int protocol, int port, u_long interface)
{
    //Defining address structure
    address.sin_family = domain; //Socket in Address family
    address.sin_addr.s_addr = htonl(interface);
    address.sin_port = htons(port);

    //Starting the connection
    connection = (domain, typeService, protocol);
}