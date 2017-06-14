#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action && size != 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}

}
