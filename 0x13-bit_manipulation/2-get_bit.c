#include "holberton.h"
/**
  * get_bit - returns the value of a bit at a given index.
  * @n: number of base 10
  * @index: when converted the value to be returned
  * Return: 1 or 0.
  */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
