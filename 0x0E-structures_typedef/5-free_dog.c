#include "dog.h"

/**
  * free_dog - free dog after function is executed
  * @d: - pointer to the struct dog_t
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
