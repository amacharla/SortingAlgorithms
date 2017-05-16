#include "holberton.h"
/*
 * This function will check if its lowercase then return 1
 * if its uppercase it will return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
