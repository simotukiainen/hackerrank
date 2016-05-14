CC=cc
CFLAGS=-std=c90 -Wall

PROGRAMS=simple-array-sum time-conversion absolute-element-sums \
		 a-very-big-sum diagonal-difference plus-minus staircase \
		 easy-sum pairwise-sum-and-divide candies stepping-stones-game \
		 quicksort3 bigger-is-greater maximizing-xor a-game-of-stones \
		 tower-breakers a-chessboard-game

TARGETS=$(PROGRAMS)

.PHONY: all clean

all: $(TARGETS)

$(TARGETS): %: %.c
	$(CC) $(CFLAGS) -o $@ $@.c

clean:
	rm $(TARGETS)

