#include "client.h"
#include <sstream>


client::client(const char* ip,int port)
:_port(port)
{
    strcpy(_ipaddr,ip);
    buffer.resize(1024);
}

void client::start()
{
    _fd = socket(AF_INET,SOCK_STREAM,0);

    if(_fd == -1)
    {
        perror("SOCKET ERROR\n");
        exit(0);
    }

    struct sockaddr_in sock;
    memset(&sock,0,sizeof(sockaddr_in));

    sock.sin_family = AF_INET;
    sock.sin_addr.s_addr = inet_addr(_ipaddr);
    sock.sin_port = htons(_port);

    int ret = connect(_fd,(struct sockaddr*)&sock,sizeof(sock));

    if(ret == -1)
    {
        perror("CONNECT\n");
        exit(0);
    }
    
    cscodereq.set_phonenum(12345);

    size_t len = 0;

    fillpacket(cscodereq,&buffer,&len);

    std::stringstream oss;
	for(unsigned int i=0;i < buffer.size();i++){ 
	oss<<buffer[i]; 
	} 
	std::string temp=oss.str(); 
	const char * buf=temp.c_str();

	send(_fd,buf,len,0);

}

void client::appenddata(void* data,size_t len,vector<char>::iterator it)
{
    std::copy(static_cast<char*>(data),static_cast<char*>(data)+len,it);
    
}
void client::fillpacket(const google::protobuf::Message& message,vector<char>* buffer,size_t* length)
{
    const std::string& type = message.GetTypeName();
    int32_t name_len = static_cast<int32_t>(type.size()+1);

    int32_t byte_size = message.ByteSize();
    
    char* msg = new char[byte_size];
    message.SerializeToArray(msg,byte_size);
    
    int32_t len = sizeof(name_len)+name_len+byte_size;
    int32_t netlen = htons(len);
    vector<char>::iterator it = (*buffer).begin();

    appenddata(&netlen,sizeof(int32_t),it); 
    int32_t netNamelen = htons(name_len);
    it += sizeof(int32_t);
    appenddata(&netNamelen,sizeof(int32_t),it);
    it += sizeof(int32_t);

    char* msgType = new char[name_len];
    strcpy(msgType,type.c_str());
    appenddata(msgType,name_len,it);
    it += name_len;

   	appenddata(msg,byte_size,it);

	*length = len;
    delete msg;
    delete msgType;
}
