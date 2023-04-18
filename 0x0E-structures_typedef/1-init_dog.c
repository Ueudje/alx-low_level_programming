#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - function that initialize a variable
  * @d: pointer to structure
  * @name: name of the dog
  * @age: pointer to age of the dog
  * @owner: pointer to owner of the dog
  * Return: void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
