#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - contains needed info about dog
 * @name: dog name
 * @age: dog age
 * @owner: dogs owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

#endif /*_0_DOG_H_*/
