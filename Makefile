#APP SERVER MAKEFILE

Target=Appserver
CXX=g++
CPPFLAG=-g -Werror
SRC=appserver.cc appsvr.cc codec.cc protoc/lily.pb.cc
INCLUDE = thirdparty/include  
OBJ=$(SRC:.cc=.o)

all:$(Target)
$(Target):$(OBJ)
	$(CXX) $(CPPFLAGS) -o $@ $^ -L thirdparty/lib -lmuduo_base -lmuduo_net -lpthread -lprotobuf
$(OBJ):%.o:%.cc
	$(CXX) $(CPPFLAGS) -c $< -o $@ -I $(INCLUDE)

.PHONY:clean
clean:
	-rm -f *.o
	-rm $(Target)
