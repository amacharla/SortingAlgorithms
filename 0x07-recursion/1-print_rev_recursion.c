#include "holberton.h"
/**
 * _print_rev_recursion - prints string in reverse
 * @s: pointer to a string
 * recurses then prints thus comes backwards.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
