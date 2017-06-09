#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with a call to
 * malloc: malloc(old_size)
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: ptr | NULL if malloc faile or newsize is 0 or ptr null|
 * newpointer with more space
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	/*casting the void ptr to become char * so i can do pointer arithmetic*/
	char *oldptr = ptr;
	char *newptr;
	unsigned int i, size = old_size;

	if (old_size > new_size)
		size = new_size;

	/*dont new to reallocate space cause size is same*/
	if (new_size == size)
		return (ptr);
	/*creating new memory*/
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	/* freeing ptr*/
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	/*expanding memory*/
	if (new_size > size)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);
		/*transfer old content into new*/
		for (i = 0; i < size; i++)
			newptr[i] = oldptr[i];
		free(ptr);
	}
	return (newptr);
}
