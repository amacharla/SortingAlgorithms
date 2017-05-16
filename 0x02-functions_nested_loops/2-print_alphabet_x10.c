#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 * prints alphabets x10
 * uses _putchar funciton
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char az = 'a';
	int i = 0;

	while (i <= 10)
	{
		while (az <= 'z')
		{
			_putchar(az);
			az++;
		}
		i++;
		az = 'a';
		_putchar('\n');
	}
}
