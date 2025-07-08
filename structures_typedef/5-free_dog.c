#include "dog.h"
#include <stdlib.h>
/**
* free_dog - a function to free the memory allocated for a dog
* @d: a dog structure
*
* Return: void
* Note: use this to free a dog structure
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
