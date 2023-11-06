#include "dog.h"

/**
 * init_dog: a function that initializes the variable type struct dog
 * @d: the pointer to the dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: The name of the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
