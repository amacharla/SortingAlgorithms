#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free allocated memory
 * @d: pointer to my_dog which has the address of to my newdog pointer
 */
void free_dog(dog_t *d)
{
	free(d);
}
