#include "holberton.h"
/**
 * set_bit -sets the value of a bit to 1 at a given index.
 * @n: pointer to long
 * @index: bit thats being shifted
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
  if (index > 63)
      return (-1);
  *n = *n | (1L << index);
  return (1);
}
