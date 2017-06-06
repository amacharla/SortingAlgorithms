#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes it with char c
 * @size: number of elements to allocate
 * @c: char to be initialized with.
 * Return: Null if size is 0 and returns char array.
 */
char *create_array(unsigned int size, char c)
{
	char *a = (char *) malloc(size * sizeof(char));
	unsigned int i;

	if (size == NULL)
		return (NULL);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	a[i] = '\0';
	return (a);
}
