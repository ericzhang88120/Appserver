#include "appsvr.h"

server::server(EventLoop * loop,const InetAddress & listenAddr)
:server_(loop, listenAddr, "Appsvr"),
 dispatcher_(boost::bind(&server::onUnknownMessage,this,_1,_2,_3)),
 codec_(boost::bind(&ProtobufDispatcher::onProtobufMessage, &dispatcher_, _1, _2, _3))
{
	server_.setConnectionCallback(boost::bind(&server::onConnection,this,_1));
	server_.setMessageCallback(boost::bind(&lilycodec::onMessage, &codec_, _1, _2, _3)));

	//register callback func
	dispatcher_.registerMessageCallback(boost::bind(&server));

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

void server::onUnknownMessage(const TcpConnectionPtr& conn,Buffer* buf,Timestamp)
{
	LOG_INFO<<"Unknow msg discard";
}