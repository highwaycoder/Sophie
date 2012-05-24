CC=g++
# will not work with "standard" LD
LD=g++
LDFLAGS=
INCLUDE_DIRS=-Isrc/include/ -INLP/include/ -IGPP/include/
CXXFLAGS=$(INCLUDE_DIRS) -Llib -lGPP -lNLP
PROGNAME=sophie
OBJECTS=obj/main.o lib/libGPP.a lib/libNLP.a

.PHONY: all
# add the 'test' dependancy when we've written a test-case
#all: build test
all: build

# pseudo-target so tools that rely on a "build" target can work
.PHONY: build
build: $(PROGNAME)

$(PROGNAME): $(OBJECTS) | bin obj lib
	$(LD) -o bin/$(PROGNAME) $(OBJECTS) $(LDFLAGS)

lib/libGPP.a: | lib
	$(MAKE) -C GPP/

lib/libNLP.a: | lib
	$(MAKE) -C NLP/
	
obj/main.o: src/main.cpp | bin obj
	$(CC) $(CXXFLAGS) -o obj/main.o -c src/main.cpp
	
.PHONY: test	
test: test.input $(PROGNAME)
	$(PROGNAME) < test.input
	
# directory-making targets
obj:
	mkdir -p obj

bin:
	mkdir -p bin

lib:
	mkdir -p lib

NLP:
	mkdir -p NLP

GPP:
	mkdir -p GPP

NLP/bin: NLP
	mkdir -p NLP/bin

GPP/bin: GPP
	mkdir -p GPP/bin

# cleanup targets
.PHONY: clean
clean: clean-bin clean-obj clean-lib

.PHONY: clean-bin
clean-bin:
	rm -rf bin

.PHONY: clean-obj
clean-obj:
	rm -rf obj

.PHONY: clean-lib
clean-lib:
	rm -rf lib