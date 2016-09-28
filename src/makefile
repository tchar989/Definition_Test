OPTS = -g -c -Wall -Werror

all: DefTestEXE clean

DefTestEXE: deftest_DRIVER.o deftest.o 
	g++ -o DefTestEXE deftest_D.o deftest.o 

deftest.o: deftest.cc deftest.h
	g++ $(OPTS) deftest.cc

deftest_DRIVER.o: deftest_DRIVER.cc
	g++ $(OPTS) deftest_DRIVER.cc

clean: rm *.o *~
