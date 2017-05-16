#include "holberton.h"
/**
 * print_last_digit - returns last digit only
 * @n: takes number of type int
 * Return: lastn (postive value)
 */
int print_last_digit(int n)
{
	int lastn = (n % 10);

	if (n >= 0)
		return (lastn);
	else
		return (lastn * -1);
}
