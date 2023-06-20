#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  * new_dog - Creates new variable of type dog_t
  * @name: Name of dog
  * @age: Age of dog
  * @owner: Name of owner of dog
  *
  * Return: Pointer to new_dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);

	ptr->age = age;
	ptr->name = name;
	ptr->owner = owner;

	return (ptr);
}
