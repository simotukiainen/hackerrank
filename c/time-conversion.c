#include <stdio.h>

int main()
{
	int h, min, s;
	char suf[2];

	scanf("%2d:%2d:%2d%2c", &h, &min, &s, suf);

	if (suf[0] == 'A' && suf[1] == 'M') {
		if (h == 12)
			h = 0;
	} else {
		if (h != 12)
			h = h + 12;
	}
	printf("%.2d:%.2d:%.2d\n", h, min, s);
}
