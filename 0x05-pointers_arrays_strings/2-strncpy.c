#include "holberton.h"
/**
  * _strncpy - copies string and replaces rest of src with null
  * @src: text thats being copied
  * @dest: copies and output text
  * @n: amount of text to copy
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int h, i;

	for (h = 0; src[h]; h++)
		;
	for (i = 0; i != n; i++)
	{
		if (i <= h)
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}
	return (dest);
}
