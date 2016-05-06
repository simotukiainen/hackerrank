#include <stdio.h>

int main()
{
	int n, k, i;

	scanf("%d", &n);
	for (k = 0; k < n; ++k) {
		for (i = 0; i < n - k - 1; ++i)
			putchar(' ');
		for (i = 0; i < k + 1; ++i)
			putchar('#');
		putchar('\n');
	}
}
