#include "holberton.h"
/**
 * print_binary - print in binary
 * @arg: int arguments
 * Return: number of arguments outputted
 */
int print_binary(unsigned long int number)
{
	unsigned int i = 0;
	unsigned int j;
	unsigned long int counter = number;
	unsigned int *remainder;

	/* count number of characters (1 or 0) */
	for (i = 1; counter != 0; i++)
		counter /= 2;

	/* allocating space to hold binary values + null check*/
	remainder = malloc(i * sizeof(unsigned int));
	if (remainder == NULL)
		return (0);

	/* adding remainders (binary into array backwards) */
	for (i = 0; number != 0; i++)
	{
		remainder[i] = number % 2;
		number /= 2;
	}
	remainder[i] = number; /*last binary added*/
	/* printing remainders array starting from last number*/
	for (j = i - 1; j > 0; j--)
		_putchar(remainder[j] + '0');
	_putchar(remainder[j] + '0'); /*print remainder[0]*/
	free(remainder);
	return (i);
}
