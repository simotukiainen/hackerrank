#include <stdio.h>

unsigned long long int findPerfectSquare(unsigned long long int);

/*
 * n = 1+2+3...+b = b * (b + 1) / 2 iff b^2 + b + 2n = 0.
 * Thus Bob will succeed in b steps if b has a positive integer solution.
 * b has a positive integer solution iff 1 - 8b is a perfect square and
 * odd number, in which case the solution is b = (sqrt(1 - 8b)-1) / 2.
 */
int
main()
{
	long int t;
	unsigned long long int n, a, b;
	scanf("%ld", &t);
	while (t-- > 0) {
		scanf("%llu", &n);
		a = 1 + 8*n;
		if (a % 2 != 0) {
			b = findPerfectSquare(a);
			if (b != -1) {
				printf("Go On Bob %llu\n", (b - 1) / 2);
				continue;
			}
		}
		printf("Better Luck Next Time\n");
	}
}

unsigned long long int
findPerfectSquare(unsigned long long int n)
{
	unsigned long long int a, b, c, d;
	if (n == 1)
		return 1;
	if (n < 4)
		return -1;
	a = 2;
	b = n / 2;
	if (b > 0x80000000)
		b = 0x80000000;
	do {
		c = (a + b) / 2;
		d = c * c;
		if (d == n)
			return c;
		if (d < n)
			a = c + 1;
		else
			b = c - 1;
	} while (a <= b);
	return -1;
}
