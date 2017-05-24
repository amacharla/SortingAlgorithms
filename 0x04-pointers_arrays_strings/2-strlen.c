#include "holberton.h"
/**
  * _strlen - returns length of string
  * @s: pointer array type char
  * Return: i which is length of array
  * will increment untill it reaches null value
  * which is at the end of the element
  */
int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
		i++;
	return (i);
}
