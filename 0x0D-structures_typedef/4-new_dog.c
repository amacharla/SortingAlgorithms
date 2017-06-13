#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a new dog
 * @name: new name of dog
 * @age: new age of dog
 * @owner: new owner of dog
 * Return: NULL if malloc fails else return pointer to newdog
 * could return pointers of name and owner if i wanted to but assignment
 * wants to store copies of name and owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, j, k;
	dog_t *newdog;

	if (name == NULL || owner == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		;
	i++;
	for (j = 0; owner[j]; j++)
		;
	j++;
	/*allocating space for structure*/
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	/*allocating space in name segment to fit name*/
	newdog->name = malloc(i * sizeof(char));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	/*allocating space in owner segment to fit owner*/
	newdog->owner = malloc(j * sizeof(char));
	if (newdog->owner == NULL)
	{
		free(newdog);
		return (NULL);
	}
	/*coping name & owner from into struct newdog name segment*/
	for (k = 0; k < i; k++)
		newdog->name[k] = name[k];
	newdog->age = age; /* didnt need to save age */
	for (k = 0; k < j; k++)
		newdog->owner[k] = owner[k];
	return (newdog);
}
