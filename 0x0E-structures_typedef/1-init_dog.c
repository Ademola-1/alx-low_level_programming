#include "dog.h"

/**
  * init_dog - initializes a user defined variable of type stuct dog
  * @d: struct of dog
  * @name: name of the dog
  * @age: Age of the dog
  * @owner: owner of the dog
  * Return: no return.
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
