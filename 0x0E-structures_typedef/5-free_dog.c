#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the memory reserved for copies new_dog funct
 * @d: the copied struct
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return ();
	free(d->owner);
	free(d->name);
	free(d);
}
