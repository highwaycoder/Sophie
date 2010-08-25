CFLAGS := -Wall -Wextra -pedantic -std=c99
LDFLAGS := 
PROGNAME := sophie

OBJS := $(PROGNAME).o
$(PROGNAME): $(OBJS)
	gcc -o $(PROGNAME) $(OBJS) $(LDFLAGS)

$(PROGNAME).o: $(PROGNAME).c $(PROGNAME).h
	gcc -o $(PROGNAME).o -c $(PROGNAME).c $(CFLAGS)

clean:
	rm -f $(OBJS) $(PROGNAME)

debug:
	$(MAKE) "CFLAGS=-g -DDEBUG"
