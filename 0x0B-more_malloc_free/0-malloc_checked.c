#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: unsigned int that repesents size of elements
 * Return: exit 98 if failed ot allocate memory or void pointer.
 */
void *malloc_checked(unsigned int b)
{
	void *allocatedmemory = malloc(b * sizeof(int));

	if (allocatedmemory == NULL)
		exit(98);
	return (allocatedmemory);
}
