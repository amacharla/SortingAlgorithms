#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum = a[i + j] + sum;
				printf("%d, ", sum);
			}
		}
		printf("\n");
	}
}
