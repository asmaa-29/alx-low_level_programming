#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees yo dawgs
 * @d: yo dawg
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
