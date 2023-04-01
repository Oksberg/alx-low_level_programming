#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
/**
  * struct dog - takes attributes of a dog
  * @name: Name of dog
  * @age: How old the dog is
  * @owner: Specifies the name of the owner of the dog
  *
  * Description: This is stores attributes of a dog that help identify it
  * with it's name, age and owner.
  */


struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
