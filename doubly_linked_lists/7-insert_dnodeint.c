#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *indexed_node;

	if (idx == 0) /* add at the start of the node */
		return (add_dnodeint(h, n));

	indexed_node = *h;
	while (idx > 0 && indexed_node != NULL)
	{
		indexed_node = indexed_node->next;
		idx--;
	}
	if (indexed_node == NULL && idx != 0)
		return (NULL);

	/* add at the end of the node */
	if (indexed_node == NULL && idx == 0)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	
	new_node->next = indexed_node;
	new_node->prev = indexed_node->prev;
	indexed_node->prev = new_node;

	if (new_node->prev != NULL)
		new_node->prev->next = new_node;
	else
		*h = new_node;
	
	return (new_node);
}
