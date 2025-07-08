#ifndef dog_h
#define dog_h

/**
 * struct dog - a dog structure
 * @name: the dog's name
 * @age: the dog age
 * @owner: the dog owner
 *
 * description: the structure of a dog containing it's name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/* a function used to initialize a dog structure */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* a function that prints a given dog */
void print_dog(struct dog *d);

/* a function that create a new dog*/
dog_t *new_dog(char *name, float age, char *owner);

#endif
