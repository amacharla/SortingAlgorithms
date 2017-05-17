#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers
 * @n: first operator of type int and starting point
 */
void print_to_98(int n)
{
	int a;

	if (n == 98)
	{	printf("%d", n);
		putchar('\n');
	}
	if (n < 98)
	{
		for (a = n; a < 98; a++)
			printf("%d, ", a);
		printf("%d", a);
		putchar('\n');
	}
	if (n > 98)
	{
		for (a = n; a > 98; a--)
			printf("%d, ", a);
		printf("%d", a);
		putchar('\n');
	}
}
