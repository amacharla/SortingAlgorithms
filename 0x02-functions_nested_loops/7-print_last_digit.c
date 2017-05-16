#include "holberton.h"
/**
 * print_last_digit - returns last digit only
 * @n: takes number of type int
 * Return: lastn (postive value)
 */
int print_last_digit(int n)
{
	char lastn;

	if (n >= 0)
	{
		lastn = n % 10;
		_putchar(lastn + 48);
		return (lastn);
	}
	else
	{	lastn = (n % 10) * -1;
		_putchar(lastn + 48);
		return (lastn);
	}
}
