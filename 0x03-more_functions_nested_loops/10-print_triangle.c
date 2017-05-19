#include "holberton.h"
/**
 * print_triangle - prints triangle based on size
 * @size: determins right angles size
 */
void print_triangle(int size)
{
	int i, j, k, space, hashtag;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			space = size - i;
			hashtag = size - space;

			for (j = 1; j <= space; j++)
				_putchar(' ');
			for (k = 1; k <= hashtag; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
