#include "holberton.h"
/**
 *
 *
 */
void print_number(int n)
{
	int i, j, print;

	if (n < 0)
		_putchar('-');
	for (i = 9; i >= 1; i--)
	{
		if ((n % (10 ^ i)) == 0)
		{
			for (j = i; j > 0; j--)
			{
				print = ((n / (10 ^ j)) % 10);
				_putchar(print + '0');
			}
		}

	}
	if (n % 10)
		_putchar(n + '0');
}
