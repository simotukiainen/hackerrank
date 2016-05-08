#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 100
#define NOT_POSSIBLE -1

static int readline(char [], int);
static int find_greater(char [], int);

int
main()
{
	int t, n;
	char w[MAX_LEN];
	scanf("%d ", &t);
	while (t-- > 0) {
		n = readline(w, MAX_LEN);
		if (find_greater(w, n) == NOT_POSSIBLE)
			printf("no answer\n");
		else
			printf("%.*s\n", n, w);
	}
	return 0;
}

/*
   Finds the smallest permutation of the word such that it is greater than the
   word.
   This is possible iff w is not (non-strictly) descending.
   The algorithm finds the greatest index such that the tail is descending
   and swaps the element at the index with the least greater element in the
   tail. The tail is then sorted to ensure that the result is least such word.
   The sorting may be performed by just inverting the order of the tail
   as it is already descending.
*/
int
find_greater(char w[], int l)
{
	if (l < 2)
		return NOT_POSSIBLE;

	int i, j, k;
	char a;

	/* Find the largest i such that the sequence beginning from i is not
	   descending. */
	i = l - 2;
	while (i >=0 && w[i] >= w[i + 1])
		--i;

	/* If we got to -1, the whole sequence was descending and thus
	   the desired permutation does not exist. */
	if (i == -1)
		return NOT_POSSIBLE;

	/* Sort the tail by inverting the descending sequence. */
	k = (l - i - 1) / 2;
	for (j = 0; j < k; ++j) {
		a = w[i + 1 + j];
		w[i + 1 + j] = w[l - j - 1];
		w[l - j - 1] = a;
	}

	/* Not we just swap the element at i with the smallest element
	   greater than it in the tail. The tail will still be sorted
	   and now w is as desired. */
	for (j = i + 1; w[j] <= w[i]; ++j)
		;
	a = w[i];
	w[i] = w[j];
	w[j] = a;

	return i;
}

int
readline(char w[], int l)
{
	int c, n;
	n = 0;
	c = getchar();
	while (c != EOF && !isspace(c)) {
		if (n < l)
			w[n++] = c;
		c = getchar();
	}
	return n;
}
