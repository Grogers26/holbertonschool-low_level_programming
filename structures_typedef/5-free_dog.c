#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - frees dogs
 * @d: the structure to free
 * Return: nothing
 */
void free_dog(dog_h *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
