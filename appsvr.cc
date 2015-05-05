#include "appsvr.h"

server::server(EventLoop * loop,const InetAddress & listenAddr)
:server_(loop, listenAddr, "Appsvr")
{
	server_.setConnectionCallback(boost::bind(&server::onConnection,this,_1));
	server_.setMessageCallback(boost::bind(&server::onMessage,this,_1,_2,_3));
}

void server::start()
{
	server_.start();
}

void server::onConnection(const TcpConnectionPtr & conn)
{
	LOG_INFO<<(conn->connected()?"UP":"DOWN");
}

void server::onMessage(const TcpConnectionPtr & conn,Buffer* buf,Timestamp)
{
	muduo::string msg(buf->retrieveAllAsString());
	LOG_INFO<<msg;

	conn->send(msg);
}
