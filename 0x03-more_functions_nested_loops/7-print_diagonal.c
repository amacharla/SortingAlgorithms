#include "holberton.h"
/**
 * print_diagonal - prints 'n' numbers of \
 * @n: determins how many lines to print
 * prints diagonally with right amount of spaces
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
