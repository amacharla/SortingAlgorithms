#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 * returns '1' if alphabets
 * else 0
 * uses _putchar funciton
 * Return: Always 0.
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
