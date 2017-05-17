#include "holberton.h"
/**
 * times_table - prints the multiplicaiton times table
 * made it so it doesnt print 0 in the tens place
 * made it so it doesnt print ',' ' ' at the end
 */
void times_table(void)
{
	int c, r, num, tens, ones;

	for (r = 0; r < 10; r++)
	{
		for (c = 0; c < 10 ; c++)
		{
			num = r * c;
			tens = num / 10;
			ones = num % 10;

			if (c == 0) /*Print the first coloum*/
				_putchar('0');
			else if (tens == 0) /*print only single digits*/
			{
				_putchar(' ');
				_putchar(ones + '0');
			}
			else /*print everything else*/
			{
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
			if (c != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
