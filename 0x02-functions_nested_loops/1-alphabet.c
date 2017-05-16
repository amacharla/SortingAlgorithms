#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 * Function prints a-z using costom command
 * Return: Always 0.
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
