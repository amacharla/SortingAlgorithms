#include <stdio.h>
/**
  * print_array - prints n number of elements in array
  * @a: array of type int and pointer
  * @n: number of elements to print
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
