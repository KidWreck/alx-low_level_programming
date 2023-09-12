#include <stdlib.h>
#include "main.h"

/**
 * free_dog - free malloc of struct dog
 * @d: pointer to dogs
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
