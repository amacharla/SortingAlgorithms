#include "holberton.h"
#include <stdio.h>

int _atoi(char *s)
{
	int i, num;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 45)
			num = s[i-1];
		if (('0' >= s[i]) && ('9' <= s[i]))
		{	putchar(s[i]);	
			num = (num * 10) + s[i];
		}
	}
	return (0);
}
