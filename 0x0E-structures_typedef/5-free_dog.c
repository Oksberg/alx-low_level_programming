#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - Frees dog_t
  * @d: Pointer to dog_t
  *
  * Return: Nothing
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
