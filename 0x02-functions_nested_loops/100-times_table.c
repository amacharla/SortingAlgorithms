#include "holberton.h"
/**
 * times_table - prints the multiplicaiton times table
 * made it so it doesnt print 0 in the tens and hundreds place when single digit
 * made it so it splits tens after max value of 9
 * made it so it doesnt print ',' ' ' at the end
 */
void print_times_table(int max)
{
	int c, r, num, hundreds, tens, ones;

	if (max > 0 && max < 15)
	{
		for (r = 0; r <= max; r++)
		{	
			for (c = 0; c <= max ; c++)
			{
				num = r * c;
				hundreds = num / 100;
				tens = num / 10;
				ones = num % 10;
				
				if (tens > 9) /* makes sure tens is a single digit ex. 123/10=12%10=2*/
					tens = tens % 10;
				if (c == 0) /*Print the first coloum*/
					_putchar('0');
				else if (tens == 0 && hundreds == 0) /*print only single digits and so 101 work*/
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(ones + '0');
				}
				else if (hundreds == 0) /*Print double digits*/
				{
					_putchar(' ');
					_putchar(tens + '0');
					_putchar(ones + '0');

				}
				else /*print everything else*/
				{
					_putchar(hundreds + '0');
					_putchar(tens + '0');
					_putchar(ones + '0');
				}
				if (c != max)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
