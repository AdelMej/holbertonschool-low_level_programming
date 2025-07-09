#include "main.h"
#include <stdlib.h>
/**
* _realloc - a function replicating realloc
* @ptr: a pointer to the previous allocation
* @old_size: the size of the old allocation
* @new_size: the size of the new allocation
*
* Return: void * pointer
* Note: if new size is 0 the pointer will be freed a NULL will be returned
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, bytes_to_copy;
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
		newPtr = malloc(new_size);
		if (newPtr == NULL)
			return (NULL);
		return (newPtr);
	}

	newPtr = malloc(new_size);
	if (newPtr == NULL)
		return (NULL);

	if (new_size < old_size)
		bytes_to_copy = new_size;
	else
		bytes_to_copy = old_size;

	for (i = 0; i < bytes_to_copy; i++)
		((char *)newPtr)[i] = ((char *)ptr)[i];

	free(ptr);
	return (newPtr);
}
