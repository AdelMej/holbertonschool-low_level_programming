#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table and frees all memory.
 * @ht: Pointer to the hash table.
 *
 * Description: This function frees each node, including their
 * keys and values, then frees the array and finally the hash table itself.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *toDel, *node;
	unsigned int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				toDel = node;
				free(toDel->key);
				free(toDel->value);
				free(toDel);
				node = node->next;
			}
		}
	}
	free(ht->array);
	free(ht);
}
