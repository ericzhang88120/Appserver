/*
author: ericzhang
date: 2015-5-5
*/
#include "appsvr.h"
#include <muduo/base/Logging.h>


int main(int argc,char* argv[])
{
	LOG_INFO<<"START SERVER! PID:"<<getpid();

	muduo::net::EventLoop loop;
	muduo::net::InetAddress listenAddr(2015);
	server app(&loop, listenAddr);
	app.start();
	loop.loop();
	
	return 0;
}
