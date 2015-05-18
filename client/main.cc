#include "client.h"


int main(int agrc,char* argv[])
{
    const char* ip = "127.0.0.1";
    int port = 1234;
    client cli(ip,port);
    cli.start();
    return 0;
}
