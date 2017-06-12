#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to address of my_dog of type struct dog
 * @name: name
 * @age: age
 * @owner: owner
 * Memory has allready been allocated in main
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
