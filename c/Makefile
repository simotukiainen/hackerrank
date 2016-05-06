CC=cc
CFLAGS=-std=c90

PROGRAMS=simple-array-sum time-conversion absolute-element-sums \
		 a-very-big-sum diagonal-difference

TARGETS=$(PROGRAMS)

.PHONY: all clean

all: $(TARGETS)

$(TARGETS): %: %.c
	$(CC) $(CFLAGS) -o $@ $@.c

clean:
	rm $(TARGETS)

