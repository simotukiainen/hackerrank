#include <stdio.h>

int
main()
{
	long int t, n, m;
	scanf("%ld", &t);
	while (t-- > 0) {
		scanf("%ld", &n);
		scanf("%ld", &m);
		printf("%ld\n", (n + 1) % 2 + 1);
	}
	return 0;
}

