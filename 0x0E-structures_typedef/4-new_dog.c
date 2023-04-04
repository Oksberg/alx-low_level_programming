#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @str:  string to be ckecked
 *
 * Return: 0;
 */

int _strlen(char *str)
{
	int a = 0; /*start counting here*/

	for (; *str++;)
		a++;
	return (a);
}

/**
 * *_strcpy - copies string pointed to by src
 * @dest: copy to
 * @str: copy from
 *
 * Return: string
 */

char *_strcpy(char *dest, char *str)
{
	int i = 0;
	int j = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	for (; j < i; j++)
	{
		dest[j] = str[j];
	}
	dest[i] = '\0';
	return (dest);
}

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
	int nlen, olen;
	dog_t *some_dog;

	nlen = _strlen(name);
	olen = _strlen(owner);

	some_dog = malloc(sizeof(dog_t));

	if (some_dog == NULL)
		return (NULL);

	some_dog->owner = malloc(sizeof(char) * (olen + 1));
	if (some_dog->owner == NULL)
		return (NULL);

	some_dog->name = malloc(sizeof(char) * (nlen + 1));
	if (some_dog->owner == NULL)
		return (NULL);


	_strcpy(some_dog->owner, owner);
	_strcpy(some_dog->name, name);
	some_dog->age = age;

	if (some_dog->owner == NULL || some_dog->name == NULL)
	{
		free(some_dog->owner);
		free(some_dog->name);
		free(some_dog);
		return (NULL);
	}

	return (some_dog);
}
