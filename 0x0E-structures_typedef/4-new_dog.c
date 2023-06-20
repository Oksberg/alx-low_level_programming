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

	ptr = (dog_t *)malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);

	ptr->name = malloc(strlen(name) + 1);
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->owner = malloc(strlen(owner) + 1);
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	ptr->age = age;
	memcpy(ptr->name, name, strlen(name) + 1);
	memcpy(ptr->owner, owner, strlen(owner) + 1);

	return (ptr);
}
