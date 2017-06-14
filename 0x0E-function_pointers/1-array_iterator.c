#include <stdlib.h>
/**
 * array_iterator - executes a function given as a parameter on
 * each element of an array
 * @array: list of ints
 * @size: size of array of size_t (output of sizeof() and part of the stdlib.h)
 * @action: pointer to function that prints int base 10 and base 16
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action && size != 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}

}
