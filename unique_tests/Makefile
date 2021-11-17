CC = g++
CFLAGS = -Wall -Wextra -O2
LDLIBS = -lm

build: algo1_test.o algo2_test.o algo3_test.o

run-best:
	./test1

run-p1:
	./test2

run-p2:
	./test3

algo1.o: algo1.cpp
	g++ algo1.cpp -c $(CFLAGS)

algo1_test.o: algo_test.cpp algo1.o
	g++ algo1.o algo_test.cpp -o test1 $(CFLAGS)

algo2.o: algo2.cpp
	g++ algo2.cpp -c $(CFLAGS)

algo2_test.o: algo_test.cpp algo2.o
	g++ algo2.o algo_test.cpp -o test2 $(CFLAGS)

algo3.o: algo3.cpp
	g++ algo3.cpp -c $(CFLAGS)

algo3_test.o: algo_test.cpp algo3.o
	g++ algo3.o algo_test.cpp -o test3 $(CFLAGS)

.PHONY: clean

clean:
	rm -rf *.o test1 test2 test3 test.in test.out

