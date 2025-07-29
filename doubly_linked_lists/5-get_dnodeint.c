#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/*
* get_dnodeint_at_index - returns a node at a fiven index
* @head: the head of the doubled linked lists
* @index: the index of the node
*
* Return: the found node
* NULL if not found
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp;

	temp = head;
	for (i = 0; i < index; i++)
	{
		if (temp == NULL)
			return (NULL);

		temp = temp->next;
	}

	return (temp);
}
