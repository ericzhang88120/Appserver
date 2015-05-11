#ifndef _LILYCODEC_H_
#define _LILYCODEC_H_
#include <muduo/net/Buffer.h>
#include <muduo/net/TcpConnection.h>

#include <boost/function.hpp>
#include <boost/noncopyable.hpp>
#include <boost/shared_ptr.hpp>

#include <google/protobuf/message.h>
typedef boost::shared_ptr<google::protobuf::Message> MessagePtr;

class lilycodec : boost::noncopyable
{
public:
	enum ErrorCode
	{
	kNoError = 0,
	kInvalidLength,
	kCheckSumError,
	kInvalidNameLen,
	kUnknownMessageType,
	kParseError,
	};
	typedef boost::function<void (const muduo::net::TcpConnectionPtr&,
	                            const MessagePtr&,
	                            muduo::Timestamp)> ProtobufMessageCallback;
	typedef boost::function<void (const muduo::net::TcpConnectionPtr&,
	                            muduo::net::Buffer*,
	                            muduo::Timestamp,
	                            ErrorCode)> ErrorCallback;	
	explicit lilycodec(const ProtobufMessageCallback& messageCb);
	lilycodec(const ProtobufMessageCallback& messageCb, const ErrorCallback& errorCb);
	void onMessage(const muduo::net::TcpConnectionPtr& conn,
	             muduo::net::Buffer* buf,
	             muduo::Timestamp receiveTime);	
	static MessagePtr parse(const char* buf, int len, ErrorCode* errorCode);
private:
	static void defaultErrorCallback(const muduo::net::TcpConnectionPtr& conn,
	                                 muduo::net::Buffer* buf,
	                                 muduo::Timestamp,
	                                 ErrorCode);
	ProtobufMessageCallback messageCallback_;
	ErrorCallback errorCallback_;
	
};
#endif