CC=g++
AR=ar
ARFLAGS=
CXXFLAGS=-Iinclude -I../NLP/include -Wall
OBJECTS=../obj/GPPEngine.o ../obj/GPPEmotionalState.o

debug: CXXFLAGS += -g
debug: debug_file ../lib/libGPP.a

debug_file:
	$(MAKE) clean
	touch debug_file

release: release_file ../lib/libGPP.a

release_file:
	$(MAKE) clean
	touch release_file

../lib/libGPP.a: $(OBJECTS)
	$(AR) rcs ../lib/libGPP.a $(OBJECTS) $(ARFLAGS)

../obj/GPPEngine.o: GPPEngine.cpp include/GPPEngine.hpp
	$(CC) $(CXXFLAGS) -o ../obj/GPPEngine.o -c GPPEngine.cpp

../obj/GPPEmotionalState.o: GPPEmotionalState.cpp include/GPPEmotionalState.hpp
	$(CC) $(CXXFLAGS) -o ../obj/GPPEmotionalState.o -c GPPEmotionalState.cpp

clean:
	rm -f ../lib/libNLP.a
	rm -f $(OBJECTS)
	rm -f release_file debug_file