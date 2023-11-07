#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees dogs
 * @d: the dpgs to be freed
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
