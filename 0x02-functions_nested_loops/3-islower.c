#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 * prints '1' if lowercase alphabets
 * else 0
 * uses _putchar funciton
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
