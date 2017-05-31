#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum = 0;
	for (i = 0; i <= size; i++)
	{
		for (j = 0; j <= size; j++)
		{
			if (i == j)
			{
				printf("i = %d and J = %d\n", i, j);
				printf("a[i][j] = %d\n", *(a + i * size));
				sum = a[i + j] + sum;
			}
		}
	}
	printf("%d, ", sum);
}
