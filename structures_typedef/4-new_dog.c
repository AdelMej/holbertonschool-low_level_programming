#include "dog.h"
#include <stdlib.h>

/**
* new_dog - a function that creates a new dog
* @name: the dog's name
* @age: the dog's age
* @owner: the dog's owner
*
* Return: a newly created dog_t
* return NULL if it fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	unsigned int nameSize, ownerSize, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	for (nameSize = 0; name[nameSize] != '\0'; nameSize++)
		;
	for (ownerSize = 0; owner[ownerSize] != '\0'; ownerSize++)
		;
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	newDog->name = malloc(sizeof(char) * (nameSize + 1));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	newDog->age = age;
	newDog->owner = malloc(sizeof(char) * (ownerSize + 1));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		newDog->name[i] = name[i];
	}
	newDog->name[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
	{
		newDog->owner[i] = owner[i];
	}
	newDog->owner[i] = '\0';
	return (newDog);
}
