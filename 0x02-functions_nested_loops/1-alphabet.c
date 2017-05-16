#include "holberton.h"
/**
 * print_alphabet - prints aplhabet
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
