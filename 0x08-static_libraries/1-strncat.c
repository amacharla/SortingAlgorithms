#include "holberton.h"
/**
  * _strncat - concatenates two strings
  * @dest: pointer type char "Hello "
  * @src: pointer type char "World!\n"
  * @n: how much to copy over
  * This funciton adds concatenates two strings to the n amount.
  * Return: dest pointer array
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; j < n; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';

	return (dest);
}
