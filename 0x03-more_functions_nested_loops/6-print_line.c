#include "holberton.h"
/**
 * print_line - prints 'n' numbers of lines
 * @n: determins how many lines to print
 * prints newline if less than 0
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
