#include "holberton.h"
/**
 * puts_half - prints second half of string
 * @str: takes in array type char
 */
void puts_half(char *str)
{
	int i, j, half;

	for (i = 0; str[i] != '\0'; i++)
	{}
	half = (i / 2);
	for (j = i - half; j <= i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
