#include <stdio.h>

int main()
{
	int n, k, i, positive, negative;

	scanf("%d", &n);

	positive = negative = 0;

	for (k = 0; k < n; ++k) {
		scanf("%d", &i);
		if (i < 0)
			++negative;
		else if (i > 0)
			++positive;
	}
	printf("%.6f\n", (float) positive / n);
	printf("%.6f\n", (float) negative / n);
	printf("%.6f\n", 1.0 - (float) (positive + negative) / n);
}
