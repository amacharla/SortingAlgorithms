#include "holberton.h"
/**
  * print_rev - prints string in reverse
  * @s: pointer array type char
  * 1 - i so i wont print the null characters.
  */
void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{}
	for (j = (i - 1); j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
