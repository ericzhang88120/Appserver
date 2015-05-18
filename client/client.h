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
#include <google/protobuf/descriptor.h>
#include <google/protobuf/message.h>

#include <vector>

#define MAX_LEN 256

using namespace std;
/*
struct message
{
    int32_t len;
    int32_t name_len;
    char typeName[name_len];
    char data[256];
    int32_t checksum;
}
*/

class client
{
public:
    client(const char* ip,int port); 
    void start();
private:
    char _ipaddr[MAX_LEN];
    int _port;
    int _fd;
    vector<char> buffer;

    void fillpacket(const google::protobuf::Message& message,vector<char>* buffer,size_t* length);
    void appenddata(void* data,size_t len,vector<char>::iterator it);
    //void appenddata32(int32_t* data,size_t len,vector<char>::iterator* it);
    

    lily::CSGetCode cscodereq;

};
#endif
