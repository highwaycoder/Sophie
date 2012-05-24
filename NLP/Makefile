CC=g++
AR=ar
ARFLAGS=
CXXFLAGS=-Iinclude -I../GPP/include
OBJECTS=../obj/NLPState.o ../obj/NLPEngine.o

../lib/libNLP.a: $(OBJECTS)
	$(AR) rcs ../lib/libNLP.a $(OBJECTS) $(ARFLAGS)

../obj/NLPState.o: NLPState.cpp include/NLPState.hpp
	$(CC) $(CXXFLAGS) -o ../obj/NLPState.o -c NLPState.cpp

../obj/NLPEngine.o: NLPEngine.cpp include/NLPEngine.hpp
	$(CC) $(CXXFLAGS) -o ../obj/NLPEngine.o -c NLPEngine.cpp

