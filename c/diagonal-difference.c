#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, r, c, s, a, b, e;

	scanf("%d", &n);

	s = 0;
	for (r = 1; r <= n; ++r) {
		for (c = 1; c <= n; ++c) {
			scanf("%d", &e);
			/* Read the main diagonal on this row to a */
			if (r == c)
				a = e;
			/* and the secondary diagonal to b */
			if (n - r + 1 == c)
				b = e;
			/* and ignore other values. */
		}
		s += a - b;
	}
	printf("%d\n", abs(s));
}
