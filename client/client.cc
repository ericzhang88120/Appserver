#include "client.h"


client::client(const char* ip,int port)
:_port(port)
{
    strcpy(_ipaddr,ip);
}

void client:;start()
{
    _fd = socket(AF_INET,SOCK_STREAM,0);

    if(_fd == -1)
    {
        perror("SOCKET ERROR\n");
        exit(0);
    }

    struct sockaddr_in sock;
    memset(sock,0,sizeof(sockaddr_in));

    sock.sa_family = AF_INET;
    sock.sin_addr.s_addr = inet_addr(_ipaddr);
    sock.sin_port = htons(_port);

    int ret = connect(_fd,(struct sockaddr*)&sock,sizeof(sock));

    if(ret == -1)
    {
        perror("CONNECT\n");
        exit(0);
    }
    
    cscodereq.set_phonenum(12345);
    const std::string& typeName = cscodereq.GetTypeName();
    int32_t namelen = static_cast<int32_t>(typeName.size()+1);


    


}
