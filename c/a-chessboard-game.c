#include <stdio.h>

int simulate(int m, int n);

#define MAX 15

static int board[MAX][MAX];

int
main()
{
	int t, m, n;
	scanf("%d", &t);
	while (t-- > 0) {
		scanf("%d %d", &m, &n);
		if (simulate(m - 1, n - 1) == 1)
			printf("First\n");
		else
			printf("Second\n");
	}
	return 0;
}

int simulate(int m, int n) {
	int r;
	if (board[m][n])
		return board[m][n];
	if (m - 2 >= 0 && n - 1 >= 0
			&& simulate(m - 2, n - 1) == 2)
		r = 1;
	else if (m - 2 >= 0 && n + 1 < MAX
			&& simulate(m - 2, n + 1) == 2)
		r = 1;
	else if (m - 1 >= 0 && n - 2 >= 0
			&& simulate(m - 1, n - 2) == 2)
		r = 1;
	else if (m + 1 < MAX && n - 2 >= 0
			&& simulate(m + 1, n - 2) == 2)
		r = 1;
	else
		r = 2;
	board[m][n] = r;
	return r;
}
