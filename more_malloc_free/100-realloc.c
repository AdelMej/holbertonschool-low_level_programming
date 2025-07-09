#include "main.h"
#include <stdlib.h>
/**
* _realloc - a function replicating realloc
* @ptr: a pointer to the previous allocation
* @old_size: the size of the old allocation
* @new_size: the size of the new allocation
*
* Return: void;
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *newPtr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	newPtr = malloc(new_size);
	if (newPtr == NULL)
		return (ptr);

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			((char *)newPtr)[i] = ((char *)ptr)[i];
		}
	}
	else
	{

		for (i = 0; i < new_size; i++)
		{
			((char *)newPtr)[i] = ((char *)ptr)[i];
		}
	}
	free(ptr);
	return (newPtr);
}
