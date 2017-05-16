#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 * print_last_digit and takes in parameter int 'n'
 * computes last digit via %
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int lastn = (n % 10);

	if (n >= 0)
		return (lastn);
	else
		return (lastn * -1);
}
