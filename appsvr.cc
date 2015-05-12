#include "appsvr.h"

server::server(EventLoop *loop,const InetAddress & listenAddr)
:server_(loop, listenAddr, "Appsvr"),
 dispatcher_(boost::bind(&server::onUnknownMessage,this,_1,_2,_3)),
 codec_(boost::bind(&ProtobufDispatcher::onProtobufMessage, &dispatcher_, _1, _2, _3))
{
	server_.setConnectionCallback(boost::bind(&server::onConnection,this,_1));
	server_.setMessageCallback(boost::bind(&ProtobufCodec::onMessage, &codec_, _1, _2, _3));

	//register callback func
	dispatcher_.registerMessageCallback<lily::CSGetCode>(boost::bind(&server::onGetAuthCode,this,_1,_2,_3));

}

void server::start()
{
	server_.start();
}
//onConnecton
void server::onConnection(const TcpConnectionPtr & conn)
{
	LOG_INFO<<(conn->connected()?"UP":"DOWN");
}


void server::onUnknownMessage(const TcpConnectionPtr& conn,const MessagePtr& buf,muduo::Timestamp)
{
	LOG_INFO<<"Unknow msg discard";
}

void server::onGetAuthCode(const TcpConnectionPtr& conn,const CSGetCodePtr& message,muduo::Timestamp)
{
    LOG_INFO<<"phone num "<<message->phonenum();
}
