#include "holberton.h"
/**
 * _isalpha - returns 1 if c is part of the alphabet.
 * @c: first opperand type int
 * Return: 1 if alphabet else 0.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
