CC=g++
# will not work with "standard" LD
LD           =g++
LDFLAGS      = 
INCLUDE_DIRS =-Isrc/include/ -INLP/include/ -IGPP/include/
CXXFLAGS     =$(INCLUDE_DIRS) -Llib -lGPP -lNLP -Wall
PROGNAME     =sophie
OBJECTS      =obj/main.o lib/libGPP.a lib/libNLP.a
NLP_TARGET   =release
GPP_TARGET   =release

.PHONY: default
default:
	@echo "Please specify either 'debug' or 'release' target"

.PHONY: debug
debug: CXXFLAGS += -g
debug: NLP_TARGET = debug
debug: GPP_TARGET = debug
debug: debug_file $(PROGNAME)

# if debug_file doesn't exist, the previous build was release
debug_file:
	$(MAKE) clean
	touch debug_file

# pseudo-target for a 'release mode' build
.PHONY: release
release: release_file $(PROGNAME)

release_file:
	$(MAKE) clean
	touch release_file

$(PROGNAME): $(OBJECTS) | bin obj lib
	$(LD) -o bin/$(PROGNAME) $(OBJECTS) $(LDFLAGS)

lib/libGPP.a: GPP/*.cpp GPP/include/*.hpp | lib
	$(MAKE) -C GPP/ $(GPP_TARGET)

lib/libNLP.a: NLP/*.cpp NLP/include/*.hpp | lib
	$(MAKE) -C NLP/ $(NLP_TARGET)
	
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
	rm -f release_file debug_file

.PHONY: clean-bin
clean-bin:
	rm -rf bin

.PHONY: clean-obj
clean-obj:
	rm -rf obj

.PHONY: clean-lib
clean-lib:
	rm -rf lib