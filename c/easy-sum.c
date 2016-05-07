#include <stdio.h>

int main()
{
	int t;
	long long int n, m, k, r, a;
	scanf("%d", &t);
	while (t-- > 0) {
		scanf("%lld", &n);
		scanf("%lld", &m);
		k = n / m;
		r = n % m;
		a = m*(m-1)/2 * k + r * (r + 1) / 2;
		printf("%lld\n", a);
	}
}
