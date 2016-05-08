#include <stdio.h>

static void quicksort(int [], int, int, int);
static int partition(int [], int, int);
static void print(int [], int, int);

int
main()
{
	int i, n;
	scanf("%d", &n);
	int A[n];
	for (i = 0; i < n; ++i)
		scanf("%d", &A[i]);
	quicksort(A, 0, n, n);
	return 0;
}

void
quicksort(int A[], int off, int len, int total)
{
	int p;
	if (len > 1) {
		p = partition(A, off, len);
		print(A, 0, total);
		quicksort(A, off, p - off, total);
		quicksort(A, p + 1, len - (p - off) - 1, total);
	}
}

int
partition(int A[], int off, int len)
{
	int i, end, j, p, a;
	end = off + len;
	p = A[end - 1];
	j = off;
	for (i = off; i < end - 1; ++i) {
		if (A[i] < p) {
			a = A[j];
			A[j++] = A[i];
			A[i] = a;
		}
	}
	A[end - 1] = A[j];
	A[j] = p;
	return j;
}

void
print(int A[], int off, int len) {
	int i, end;
	end = off + len;
	for (i = off; i < end; ++i) {
		if (i > off)
			putchar(' ');
		printf("%d", A[i]);
	}
	putchar('\n');
}

