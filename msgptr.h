#ifndef _MSGPTR_H_
#define _MSGPTR_H_
#include "protoc/lily.pb.pb.h"
#include <muduo/base/Logging.h>
#include <boost/bind.hpp>

typedef boost::share_ptr<lily::CSGetCode> CSGetCodePtr;
typedef boost::share_ptr<lily::SCGetCode> SCGetCodePtr;
typedef boost::share_ptr<lily::CSRegister> CSRegisterPtr;
typedef boost::share_ptr<lily::SCRegister> SCRegisterPtr;


#endif

