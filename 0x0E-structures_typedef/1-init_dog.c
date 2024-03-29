#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type dog
 * @d: the structure dog
 * @name: the dog name
 * @age: the dog's age
 * @owner: the dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
