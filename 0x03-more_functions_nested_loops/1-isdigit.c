#include "holberton.h"
/**
 * _isdigit - funciton checks if operator is a number or not
 * @c: takes in type char -> int
 * Return: 1 if number else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
