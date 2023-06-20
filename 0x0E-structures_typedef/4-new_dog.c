#include "dog.h"
#include <stdlib.h>

/**
  * _strlen - Counts the length of str
  * @str: String
  *
  * Return: Length of string
  */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
  * _strcpy - Copies contents of src to dest
  * @dest: Destination string
  * @src: Source string
  *
  * Return: Pointer to destination string
  */

char *_strcpy(char *dest, char *src)
{
	int i = 0, len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
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

	ptr->name = malloc(_strlen(name) + 1);
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	_strcpy(ptr->name, name);

	ptr->owner = malloc(_strlen(owner) + 1);
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	_strcpy(ptr->owner, owner);

	ptr->age = age;

	return (ptr);
}
