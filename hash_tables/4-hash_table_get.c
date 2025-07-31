#include "hash_tables.h"
#include <limits.h>
#include <stdlib.h>

/* Function declarations */
int _strcmp(const char *str1, const char *str2);

/**
* hash_table_get - a function that gets the value of a node based on key
* @ht: a hash table
* @key: a key to get the index
*
* Return: the value if found
* NULL if it fails
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	hash_node_t *indexedNode;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index == ULONG_MAX)
		return (NULL);

	indexedNode = ht->array[index];
	while (indexedNode != NULL)
	{
		if (_strcmp(indexedNode->key, key) == 0)
			return (indexedNode->value);

		indexedNode = indexedNode->next;
	}

	return (NULL);
}
