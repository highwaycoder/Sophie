CC=g++
LDFLAGS=
CXXFLAGS=-Iinclude -I../GPP/include

.PHONY: all
all: ../obj/NLPEngine.o ../obj/NLPState.o

../obj/NLPState.o: NLPState.cpp include/NLPState.hpp
	$(CC) $(CXXFLAGS) -o ../obj/NLPState.o -c NLPState.cpp

../obj/NLPEngine.o: NLPEngine.cpp include/NLPEngine.hpp
	$(CC) $(CXXFLAGS) -o ../obj/NLPEngine.o -c NLPEngine.cpp

