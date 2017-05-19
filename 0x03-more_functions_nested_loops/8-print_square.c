#include "holberton.h"
/**
 * print_square - prints 'n' numbers of \
 * @n: determins how many lines to print
 * prints diagonally with right amount of spaces
 */
void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
