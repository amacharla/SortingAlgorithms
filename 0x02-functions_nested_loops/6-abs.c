#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 * absolute value funcition _abs takes int a anr returns abs
 * Return: Always 0.
 */
int _abs(int a)
{
	if (a < 0)
		return (a * -1);
	else
		return (a);
}
