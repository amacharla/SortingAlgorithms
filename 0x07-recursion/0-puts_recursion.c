#include "holberton.h"
/**
 * _puts_recursion - prints string followed by newline
 * @s: pointer to string
 * Prints then recursious
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
