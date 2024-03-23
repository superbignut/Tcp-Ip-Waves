
#include "socket.hh"

Socket::Socket(int domain, int type, int protocol)
    :
{
    
}

/// \brief construct from file descriptor
/// \param domain is fd's domain, throw error if wrong value is supplied
/// \param type is fd's type, throw error if wrong value
/// \param protocol is fd's protocol, throw error if wrong value
Socket::Socket(FileDescriptor &&fd, int domain, int type, int protocol)
    : FileDescriptor(std::move(fd))
{
    int actual_value{};
    socklen_t len{};
    len = get_socket_opt(SOL_SOCKET, SO_DOMAIN, actual_value);
}