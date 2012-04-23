CC=g++
LDFLAGS=
CXXFLAGS=-Iinclude -I../NLP/include

.PHONY: all
all: ../obj/GPPEngine.o

../obj/GPPEngine.o: GPPEngine.cpp include/GPPEngine.hpp
	$(CC) $(CXXFLAGS) -o ../obj/GPPEngine.o -c GPPEngine.cpp
