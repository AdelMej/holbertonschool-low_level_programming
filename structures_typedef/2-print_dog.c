#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_dog - a function that prints a dog structure
* @d: a structure to be printed
*
* Return: void
*/

void print_dog(struct dog *d)
{
	char *name, *owner;

	if (d != NULL)
	{
		if (d->name == NULL)
			name = "(nil)";
		else
			name = d->name;
		if (d->owner == NULL)
			owner = "(nil)";
		else
			owner = d->owner;

		printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
	}
}
