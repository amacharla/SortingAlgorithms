#include "holberton.h"
/**
 * _abs - finds the absolute value
 * @a: number thats type int
 * Return: a
 */
int _abs(int a)
{
	if (a < 0)
		return (a * -1);
	else
		return (a);
}
