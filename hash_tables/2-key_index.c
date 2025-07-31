#include "hash_tables.h"
#include <limits.h>
#include <stdlib.h>
/**
* key_index - a function that return an index
* @key: the key that will be indexed
* @size: the size of the hash table
*
* Return: ULONG_MAX if it fails
* the index if success
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0 || key == NULL)
		return (ULONG_MAX);

	return (hash_djb2(key) % size);
}
