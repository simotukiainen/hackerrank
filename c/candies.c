#include <stdio.h>

int main()
{
	int n, i;
	long int s;
	scanf("%d", &n);
	int r[n];
	int c[n];

	c[0] = 1;
	scanf("%d", &r[0]);
	for (i = 1; i < n; ++i) {
		scanf("%d", &r[i]);
		if (r[i] > r[i - 1])
			c[i] = c[i - 1] + 1;
		else
			c[i] = 1;
	}
	s = c[n - 1];
	for (i = n - 2; i >= 0; --i) {
		if (r[i] > r[i + 1] && c[i + 1] >= c[i])
			c[i] = c[i + 1] + 1;
		s += c[i];
	}
	printf("%ld\n", s);
}
