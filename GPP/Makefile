CC=g++
AR=ar
ARFLAGS=
CXXFLAGS=-Iinclude -I../NLP/include
OBJECTS=../obj/GPPEngine.o ../obj/GPPEmotionalState.o

../lib/libGPP.a: $(OBJECTS)
	$(AR) rcs ../lib/libGPP.a $(OBJECTS) $(ARFLAGS)

../obj/GPPEngine.o: GPPEngine.cpp include/GPPEngine.hpp
	$(CC) $(CXXFLAGS) -o ../obj/GPPEngine.o -c GPPEngine.cpp

../obj/GPPEmotionalState.o: GPPEmotionalState.cpp include/GPPEmotionalState.hpp
	$(CC) $(CXXFLAGS) -o ../obj/GPPEmotionalState.o -c GPPEmotionalState.cpp