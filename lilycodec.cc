#include "lilycodec.h"

#include <muduo/base/Logging.h>
#include <muduo/net/Endian.h>
#include <muduo/net/protorpc/google-inl.h>

#include <google/protobuf/descriptor.h>

#include <zlib.h>  // adler32

using namespace muduo;
using namespace muduo::net;

lilycodec::lilycodec(const ProtobufMessageCallback & messageCb)
:messageCallback_(messageCb)
,errorCallback_(defaultErrorCallback)
{
}

lilycodec::lilycodec(const ProtobufMessageCallback & messageCb,const ErrorCallback & errorCb)
:messageCallback_(messageCb)
,errorCallback_(errorCb)
{
}

MessagePtr lilycodec::parse(const char * buf,int len,ErrorCode * errorCode)
{
	MessagePtr message;
}

void lilycodec::onMessage(constTcpConnectionPtr & conn,Buffer * buf,muduo :: Timestamp receiveTime)
{
	while(buf->readableBytes())
	{
		ErrorCode errorCode = kNoError;
		LOG_INFO("get pb msg len %d\n",buf->readableBytes());
		MessagePtr message = parse(buf, buf->readableBytes(), &errorCode);
		if (errorCode == kNoError && message)
		{
			messageCallback_(conn, message, receiveTime);
			buf->retrieveAll();
		}
		else
		{
			errorCallback_(conn, buf, receiveTime, errorCode);
			break;
		}
		
	}
}


