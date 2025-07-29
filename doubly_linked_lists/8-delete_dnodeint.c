#include "lists.h"
#include <stdlib.h>

/**
* delete_dnodeint_at_index - a function that delete a node from index
* @head: the head of the double linked list
* @index: an index to find the node
* Return: 1 if success -1 if failed (incorrect index or malloc failed)
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *indexed_node, *next = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			(*head)->next->prev = NULL;
			next = (*head)->next;
		}
		free(*head);
		*head = next;
		return (1);
	}

	indexed_node = *head;
	while (index > 0 && indexed_node->next != NULL)
	{
		indexed_node = indexed_node->next;
		index--;
	}

	if (index == 0 && indexed_node->next == NULL)
	{
		indexed_node->prev->next = NULL;
		free(indexed_node);
		return (1);
	}
	else if (index > 0)
	{
		return (-1);
	}

	indexed_node->next->prev = indexed_node->prev;
	indexed_node->prev->next = indexed_node->next;
	free(indexed_node);

	return (1);
}
