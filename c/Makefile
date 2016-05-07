CC=cc
CFLAGS=-std=c90

PROGRAMS=simple-array-sum time-conversion absolute-element-sums \
		 a-very-big-sum diagonal-difference plus-minus staircase \
		 easy-sum pairwise-sum-and-divide candies stepping-stones-game

TARGETS=$(PROGRAMS)

.PHONY: all clean

all: $(TARGETS)

$(TARGETS): %: %.c
	$(CC) $(CFLAGS) -o $@ $@.c

clean:
	rm $(TARGETS)

