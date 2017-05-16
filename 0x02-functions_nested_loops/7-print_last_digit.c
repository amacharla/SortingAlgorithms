#include "holberton.h"
/**
 * print_last_digit - returns last digit only
 * @n: takes number of type int
 * Return: lastn (postive value)
 */
int print_last_digit(int n)
{
	char lastn;
	char lastn2;

	if (n >= 0)
	{
		lastn = (n % 10) + 48;
		_putchar(lastn);
		return (lastn);
	}
	else
	{	lastn = ((n % 10) * -1) + 48;
		_putchar(lastn);
		lastn2 = (n % 10) * -1;
		return (lastn2);
	}
}
