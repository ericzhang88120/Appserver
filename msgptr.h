#ifndef _MSGPTR_H_
#define _MSGPTR_H_
#include "protoc/lily.pb.h"
#include <muduo/base/Logging.h>
#include <boost/bind.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/noncopyable.hpp>
#include <boost/function.hpp>


typedef boost::shared_ptr<lily::CSGetCode> CSGetCodePtr;
typedef boost::shared_ptr<lily::SCGetCode> SCGetCodePtr;
typedef boost::shared_ptr<lily::CSRegister> CSRegisterPtr;
typedef boost::shared_ptr<lily::SCRegister> SCRegisterPtr;


#endif

