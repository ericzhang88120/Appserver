#APP SERVER MAKEFILE

Target=Appserver
CXX=g++
CPPFLAG=-g -Werror
SRC=appserver.cc appsvr.cc
INCLUDE = thirdparty/include
OBJ=$(SRC:.cc=.o)

all:$(Target)
$(Target):$(OBJ)
	$(CXX) $(CPPFLAGS) -o $@ $^ -L thirdparty/lib -lmuduo_base -lmuduo_net -lpthread
$(OBJ):%.o:%.cc
	$(CXX) $(CPPFLAGS) -c $< -o $@ -I $(INCLUDE)

.PHONY:clean
clean:
	-rm -f *.o
	-rm $(Target)
