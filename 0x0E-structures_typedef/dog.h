#ifndef DOG_H
#define DOG_H

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

#endif
