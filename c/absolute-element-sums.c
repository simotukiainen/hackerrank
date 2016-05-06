#include <stdio.h>
#include <stdlib.h>

#define MAX_ABS 2000

int main()
{
	int n, a, i, k, cr, cl;
	long b;
	unsigned long int values[2 * MAX_ABS + 1];
	unsigned long int left[2 * MAX_ABS + 1], right[2 * MAX_ABS + 1];

	unsigned long int sum;

	for (i = 0; i < 2 * MAX_ABS + 1; ++i)
		values[i] = 0;

	scanf("%d", &n);
	for (i = 0; i < n; ++i) {
		scanf("%d", &a);
		++values[a + MAX_ABS];
	}
	scanf("%d", &n);
	left[0] = values[0];
	right[2 * MAX_ABS] = values[2 * MAX_ABS];
	cl = values[0]; cr = values[2 * MAX_ABS];
	for (i = 1; i < 2 * MAX_ABS + 1; ++i) {
		k = 2 * MAX_ABS - i;
		cl += values[i];
		cr += values[k];
		left[i] = left[i - 1] + cl;
		right[k] = right[k + 1] + cr;
	}
	b = 0;
	for (i = 0; i < n; ++i) {
		scanf("%d", &a);
		b += a;
		if (b > MAX_ABS)
			sum = right[0] + (b - MAX_ABS - 1) * cl;
		else if (b < -MAX_ABS)
			sum = left[2 * MAX_ABS] + (-b - MAX_ABS - 1) * cl;
		else
			sum = left[MAX_ABS + -b - 1] + right[MAX_ABS + -b + 1];
		printf("%lu\n", sum);
	}
}
