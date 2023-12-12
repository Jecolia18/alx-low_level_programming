#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - a structure to a dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the name of the owner
 *
 * Description: this is related to a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
