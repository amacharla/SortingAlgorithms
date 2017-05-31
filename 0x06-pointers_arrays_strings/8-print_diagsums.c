#include <stdio.h>
/**
 * print_diagsums -  prints sum of 2 diagonals of square matrix of integers
 * @a: 2dimiational array being casted into pointer
 * @size: size of square matrix
 * ld - left digonal sum
 * rd - right diagonal sum
 */
void print_diagsums(int *a, int size)
{
	int rd = 0;
	int ld = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		ld += *(a + (i * size) + i);
		rd += *(a + (i * size) + size - 1 - i);
	}
	printf("%d, %d\n", ld, rd);
}
