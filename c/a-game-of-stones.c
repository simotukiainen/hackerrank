/*
 * 5 Days of Game Theory
 * Day 1: Game of Stones
 *
 * With induction one can prove that with n stones left on board,
 * the player whose turn it is NOT has a winning strategy iff n = 0 (mod 7) or
 * n = 1 (mod 7).
 *
 * Hence player 1 has a winning strategy in a game where N is not such a
 * number.
 */

#include <stdio.h>

int
main()
{
	int t, n;
	scanf("%d", &t);
	while (t-- > 0) {
		scanf("%d", &n);
		n %= 7;
		if (n != 0 && n != 1)
			printf("First\n");
		else
			printf("Second\n");
	}

	return 0;
}
