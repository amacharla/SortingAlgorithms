#include "holberton.h"
/**
 * puts_half - prints second half of string
 * @str: takes in array type char
 */
void puts_half(char *str)
{
	int i, j;
	int size, half;

	for (i = 0; str[i] != '\0'; i++)
	{}
	size = (i - 1);
	if (size % 2 == 0)
		half = size / 2;
	else
		half = (size - 1) / 2;
	for (j = half; j <= size; j++)
		_putchar(str[j]);
	_putchar('\n');
}
