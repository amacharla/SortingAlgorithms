#include "holberton.h"
/**
 * times_table - prints the multiplicaiton times table
 * made it so it doesnt print 0 in the tens place
 * made it so it doesnt print ',' ' ' at the end
 */
void times_table(void)
{
	int a, b, times;

	for (a = 0; a < 10 ; a++)
	{
		for (b = 0; b < 10; b++)
		{
			times = a * b;
			if ((times / 10) != 0)
				_putchar((times / 10) + '0');
			else
				_putchar(' ');
			_putchar((times % 10) + '0');
			if (b != 9)
				_putchar(',');
				_putchar(' ');
		}
		_putchar('\n');
	}
}
