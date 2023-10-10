#include "dog.h"

/**
 * init_dog - initializes dog details
 * @d: pointer to the dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
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
