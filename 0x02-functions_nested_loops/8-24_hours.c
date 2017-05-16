#include "holberton.h"
/**
 * jack_bauer - its a countdown
 * Learned to user the limits of intergers to my advantage
 * Used '/' to get the first digit
 * used '%' to get the last digit
 */
void jack_bauer(void)
{
	int inner = 00;
	int outter = 00;

	while (outter <= 23)
	{
		while (inner <= 59)
		{
			_putchar((outter / 10) + '0');
			_putchar((outter % 10) + '0');
			_putchar(':');
			_putchar((inner / 10) + '0');
			_putchar((inner % 10) + '0');
			_putchar('\n');
			inner++;
		}
		inner = 00;
		outter++;
	}

}
