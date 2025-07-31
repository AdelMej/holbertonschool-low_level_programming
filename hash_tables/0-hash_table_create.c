#include "hash_tables.h"
#include <stdlib.h>

/**
* hash_table_create - create an empty hash table
* @size: the size of the new hash table
*
* Return: NULL if it fails
* a pointer to the newly allocated hash table
* Note: the user is responsible for freeing memory
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned int i;

	if (size == 0)
		return (NULL);

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);

	hash->size = size;

	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (hash->array == NULL)
	{
		free(hash);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		hash->array[i] = NULL;
	}

	return (hash);
}
