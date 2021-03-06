/*
author:ericzhang
date:2015-05-05
*/
#ifndef _APPSVR_H_
#define _APPSVR_H_

#include <muduo/base/Logging.h>
#include <muduo/base/Mutex.h>
#include <muduo/net/EventLoop.h>
#include <muduo/net/TcpServer.h>

#include "dispatcher.h"
#include "msgptr.h"
#include "codec.h"

#include <boost/bind.hpp>

using namespace muduo;
using namespace muduo::net;


class server :boost::noncopyable
{
public:
	server(EventLoop* loop,const InetAddress& listenAddr);
	void start();
private:
	void onConnection(const TcpConnectionPtr& conn);//set connect callback
	void onUnknownMessage(const TcpConnectionPtr& conn,const MessagePtr& buf,Timestamp);

    void onGetAuthCode(const TcpConnectionPtr& conn,const CSGetCodePtr& message,muduo::Timestamp);

	TcpServer server_;
	ProtobufCodec codec_;
	ProtobufDispatcher dispatcher_;
};
#endif
