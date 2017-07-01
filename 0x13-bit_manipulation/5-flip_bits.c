#include "holberton.h"
/**
 * flip_bit - that returns the number of bits you would need
 *to flip to get from one number to another
 *@n: number
 *@m: number 2
 *Return: number of bits shifted
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
  unsigned int i, count = 0;
  unsigned long int r;
  
  r = n ^ m;
  for (i = 0; i < 63; i++)
  {
    if (((r >> i) & 1) == '1')
      count++;
  }
  return (count);
}
