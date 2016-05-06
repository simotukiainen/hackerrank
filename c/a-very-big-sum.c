#include <stdio.h>

int main()
{
	int n, i;
	long long int a, s;

	scanf("%d", &n);
	s = 0;
	for (i = 0; i < n; ++i) {
		scanf("%lld", &a);
		s += a;
	}
	printf("%lld\n", s);
}
