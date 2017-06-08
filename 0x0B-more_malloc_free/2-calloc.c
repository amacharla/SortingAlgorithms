#include <stdlib.h>
/**
 * calloc - allocates memory for an array,
 * using malloc and initilizes it with zeros
 * @nmemb: number of elements
 * @size: type of variable
 * Return: Null if malloc fails or pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
/* initilizing it with 0 and char takes up same amount of space as a byte*/
	char *memory;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);

	for (i = 0; i < nmemb + size; i++)
		memory[i] = 0;
	return (memory);
}
