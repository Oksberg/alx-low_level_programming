#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * init_dog - initializes the members of struct dog
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of the dog
  * @d: a pointer to the members of struct dog
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	while (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
