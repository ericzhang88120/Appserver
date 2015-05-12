/*************************************************************************
	> File Name: client.h
	> Author: ericzhang 
	> Mail: ericzhang88120@gmail.com
	> Created Time: Tue 12 May 2015 12:29:37 AM PDT
 ************************************************************************/

#ifndef _CLIENT_H
#define _CLIENT_H

#include <iostream>
#include <string.h>
#include <string>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include "protoc/lily.pb.h"

#define MAX_LEN 256

struct message
{
    int32_t len;
    int32_t name_len;
    char typeName[name_len];
    char data[256];
    int32_t checksum;
}

class client
{
public:
    client(const char* ip,int port); 
    void start();
private:
    char _ipaddr[MAX_LEN];
    int _port;
    int _fd;

    lily::CSGetCode cscodereq;

};
#endif
