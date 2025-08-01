#include "dog.h"
#include <stddef.h>
/**
* init_dog - a function to initialize a dog sturcture
* @d: the structure to initialize
* @name: the dog name
* @age: the dog age (float)
* @owner: the dogs owner
*
* Description: a quick way to initialize a dog structure
* with a name, age and owner
* initialize value to "" if NULL is given
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
