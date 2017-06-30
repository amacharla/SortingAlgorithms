#include "holberton.h"
/**
  * print_binary_helper - prints binary except num 0
  * @number: base 10 being converted to base 2
  */
void print_binary_helper(unsigned long int number)
{
	char bit = (number & 1) + '0';

	if (number == 0)
		return;
	print_binary_helper(number >> 1);
	_putchar(bit);
}
/**
 * print_binary - print in binary
 * @number: int arguments
 */
void print_binary(unsigned long int number)
{
	if (number == 0)
	{
		_putchar('0');
		return;
	}

	print_binary_helper(number);
}
