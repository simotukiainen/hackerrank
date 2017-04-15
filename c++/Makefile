CC=c++
CFLAGS=-std=c++11 -Wall -Wextra -Wpedantic

TARGETS=camelcase

.PHONY: all clean

all: $(TARGETS)

camelcase: camelcase.cc
	$(CC) $(CFLAGS) -o $@ camelcase.cc

clean:
	rm $(TARGETS)

