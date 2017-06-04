#include "holberton.h"
/**
 * _islower - returns 1 if lowercase character else 0.
 * @c: first operand
 * Return: 1 if the letter is uppercase else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
