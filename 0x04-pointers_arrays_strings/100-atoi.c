#include "holberton.h"
#include <stdio.h>
/**
  * _atoi - turns string into interger
  *@s: char array pointer
  *Return: num which is only intergers
  */
int _atoi(char *s)
{
	int i, j, num, sign;
	sign = 1;

	while ((s[i] <= '0' || s[i] >= '9') && (s[i] != '\0'))
	{
		putchar(i);
		if (s[i] == '-')
			sign = sign * -1;
		i++;
	}

	for (j = i; s[j] >= '0' && s[j] <= '9'; j++)
	{
		putchar(j);
		num = (num * 10) + (sign * (s[j] - '0'));
	}
	return (num);

}
