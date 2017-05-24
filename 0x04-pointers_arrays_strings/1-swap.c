#include "holberton.h"
/**
  * swap_int - swaps values a and b
  * @a: pointer type int
  * @b: pointer type int
  * hold <- value of b;value of b <- value of a;
  * value of a <- hold
  */
void swap_int(int *a, int *b)
{
	int hold;

	hold = *b;
	*b = *a;
	*a = hold;
}
