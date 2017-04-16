CC=c++
CFLAGS=-std=c++11 -Wall -Wextra -Wpedantic

TARGETS=camelcase two-characters

.PHONY: all clean

all: $(TARGETS)

camelcase: camelcase.cc
	$(CC) $(CFLAGS) -o $@ camelcase.cc

two-characters: two-characters.cc
	$(CC) $(CFLAGS) -o $@ two-characters.cc

clean:
	rm -f $(TARGETS)

