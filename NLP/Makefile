CC=g++
AR=ar
ARFLAGS=
CXXFLAGS=-Iinclude -I../GPP/include -Wall
OBJECTS=../obj/NLPState.o ../obj/NLPEngine.o

debug: CXXFLAGS += -g
debug: debug_file ../lib/libNLP.a

debug_file:
	$(MAKE) clean
	touch debug_file

release: release_file ../lib/libNLP.a

release_file:
	$(MAKE) clean
	touch release_file

../lib/libNLP.a: $(OBJECTS)
	$(AR) rcs ../lib/libNLP.a $(OBJECTS) $(ARFLAGS)

../obj/NLPState.o: NLPState.cpp include/NLPState.hpp
	$(CC) $(CXXFLAGS) -o ../obj/NLPState.o -c NLPState.cpp

../obj/NLPEngine.o: NLPEngine.cpp include/NLPEngine.hpp
	$(CC) $(CXXFLAGS) -o ../obj/NLPEngine.o -c NLPEngine.cpp

clean:
	rm -f ../lib/libNLP.a
	rm -f $(OBJECTS)
	rm -f release_file debug_file