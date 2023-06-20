#ifndef DOG_H
#define DOG_H

/**
  * struct dog - A composite data on dog
  * @name: First member
  * @age: Second member
  * @owner: Third member
  *
  * Description: This data type identies a dog by 3 attributes,
  * its name, its age and its owner.
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

#endif
