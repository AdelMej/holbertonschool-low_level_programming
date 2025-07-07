#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - a function that allocate memory
* @b: the size to be allocated
*
* Return: a pointer to the newly allocated memory
* otherwise fails and return 98
* Note: the user is responsible for freeing memory
*/
void *malloc_checked(unsigned int b)
{
	void *res;

	if (b == 0)
		return (NULL);

	res = malloc(b);
	if (res == NULL)
		exit(98);

	/* returns a void * */
	return (res);
}
