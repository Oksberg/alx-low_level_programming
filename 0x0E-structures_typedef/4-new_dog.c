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
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;
	memcpy(new_dog->name, name, strlen(name) + 1);
	memcpy(new_dog->owner, owner, strlen(owner) + 1);

	return (new_dog);
}
