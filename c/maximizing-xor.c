#include <stdio.h>

int
main()
{
	int L, R;
	unsigned int i;

	scanf("%d", &L);
	scanf("%d", &R);

	i = 0x1ul << (sizeof(unsigned int) * 8 - 1);
	while (i > 0 && (i & L) == (i & R))
		i >>= 1;
	if (i == 0)
		printf("0\n");
	else
		printf("%d\n", (i << 1) - 1);

	return 0;
}

