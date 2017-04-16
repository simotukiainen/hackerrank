CC=c++
CFLAGS=-std=c++11 -Wall -Wextra -Wpedantic

TARGETS=camelcase two-characters sherlock-and-valid-string

.PHONY: all clean

all: $(TARGETS)

camelcase: camelcase.cc
	$(CC) $(CFLAGS) -o $@ camelcase.cc

two-characters: two-characters.cc
	$(CC) $(CFLAGS) -o $@ two-characters.cc

sherlock-and-valid-string: sherlock-and-valid-string.cc
	$(CC) $(CFLAGS) -o $@ sherlock-and-valid-string.cc

clean:
	rm -f $(TARGETS)

