#include "holberton.h"
/*
 * Function prints a-z using costom command
 *
 */
void print_alphabet_x10(void)
{
	char az = 'a';
	int i = 0;

	while (i <= 10)
	{
		while (az <= 'z')
		{
			_putchar(az);
			az++;
		}
		i++;
		az = 'a';
		_putchar('\n');
	}
}
