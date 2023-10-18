CC = g++
CFLAGS = -std=c++11 -Wall -Iinclude

all: CppBench

CppBench: src/main.cpp src/benchmark.cpp src/tasks.cpp
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f CppBench
