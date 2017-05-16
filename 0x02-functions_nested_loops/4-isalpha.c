#include "holberton.h"
/*
 * Function returns 1 if uppercase
 * returns 0 if anything else
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
