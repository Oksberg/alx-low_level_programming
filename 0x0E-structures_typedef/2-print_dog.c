#include "dog.h"
#include <stdio.h>

/**
  * print_dog - Print a struct dog
  * @d: Pointer to struct dog
  *
  * Return: Nothing
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	else if (d->name == NULL)
	{
		printf("Name: (nil)");
	}

	else if (d->owner == NULL)
	{
		printf("(nil)");
	}

	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
