#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog structure
 * @name: the dog's name
 * @age: the dog age
 * @owner: the dog owner
 *
 * Description: the structure of a dog containing it's name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* a function used to initialize a dog structure */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
