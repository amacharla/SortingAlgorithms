#include "holberton.h"
/**
  * *_strcpy - copies array
  * @dest: pointer array type char
  * @src: string to be copied into array
  * Return: dest array type car
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
