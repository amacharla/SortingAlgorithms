#include "holberton.h"
/**
 * print_binary - print in binary
 * @number: int arguments
 */
void print_binary(unsigned long int number)
{
	char bit;

	if (number == 0)
	{
		_putchar('0');
		return;
	}
	if (number == 1)
	{
		_putchar('1');
		return;
	}
	bit = (number & 1) + '0';
	print_binary(number >> 1);
	_putchar(bit);
}
