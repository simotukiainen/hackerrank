#include <stdio.h>

int main()
{
	int i, n, a, sum;

	sum = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		sum += a;
	}

	printf("%d\n", sum);
}
