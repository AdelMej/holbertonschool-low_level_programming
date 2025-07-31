#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
* hash_table_print - a function that prints the content of a hash table
* @ht: a hash table
*
* Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	char *separator = "";
	hash_node_t *toPrint;
	unsigned int i;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		toPrint = ht->array[i];
		while (toPrint != NULL)
		{
			printf("%s'%s': '%s'", separator, toPrint->key, toPrint->value);
			toPrint = toPrint->next;
			separator = ", ";
		}
	}
	printf("}\n");
}
