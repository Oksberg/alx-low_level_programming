#include "dog.h"
#include <string.h>

/**
  * new_dog - creates a new dog
  * @name: name of dog
  * @age: age of dog
  * @owner: name of owner of dog
  *
  * Return: pointer or NULL
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->owner = strdup(owner);
	new_dog->name = strdup(name);
	new_dog->age = age;

	return (new_dog);
}
