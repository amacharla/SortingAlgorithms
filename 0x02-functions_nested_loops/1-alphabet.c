#include "holberton.h"
/*
 * Function prints a-z using costom command
 *
 */
void print_alphabet(void)
{
	char az = 'a';

	while (az <= 'z')
	{
		_putchar(az);
		az++;
	}
	_putchar('\n');
}
