#include <stdio.h>

int main()
{
	int t;
	long int n, a, sum, ones, twos, mores;
	scanf("%d", &t);
	while (t-- > 0) {
		scanf("%ld", &n);
		ones = twos = mores = 0;
		while (n-- > 0) {
			scanf("%ld", &a);
			if (a == 1)
				++ones;
			else if (a == 2)
				++twos;
			else
				++mores;
		}
		sum = ones * (ones - 1)
			+ ones * twos
			+ ones * mores
			+ twos * (twos - 1) / 2;
		printf("%ld\n", sum);
	}
}
