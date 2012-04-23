CC=g++
# will not work with "standard" LD
LD=g++
LDFLAGS=
INCLUDE_DIRS=-Isrc/include/ -INLP/include/ -IGPP/include/
CXXFLAGS=$(INCLUDE_DIRS)
PROGNAME=sophie

.PHONY: all
# add the 'test' dependancy when we've written a test-case
#all: build test
all: build

# pseudo-target so tools that rely on a "build" target can work
.PHONY: build
build: $(PROGNAME)

$(PROGNAME): src/main.cpp | bin obj
	$(CC) $(CXXFLAGS) -o obj/main.o -c src/main.cpp
	$(MAKE) -C NLP/
	$(MAKE) -C GPP/
	$(LD) -o bin/$(PROGNAME) obj/main.o obj/GPPEngine.o obj/NLPEngine.o obj/NLPState.o

.PHONY: test	
test: test.input $(PROGNAME)
	$(PROGNAME) < test.input
	
# directory-making targets
obj:
	mkdir -p obj

bin:
	mkdir -p bin

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
clean: clean-bin clean-obj

.PHONY: clean-bin
clean-bin:
	rm -rf bin

.PHONY: clean-obj
clean-obj:
	rm -rf obj
