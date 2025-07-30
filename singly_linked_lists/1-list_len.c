#include "lists.h"
#include <stdlib.h>

/**
* list_len - function that returns the length of the linked list
* @h: a linked list
*
* Return: the length of h
*/
size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t nbNodes = 0;

	if (h == NULL)
		return (0);

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		nbNodes++;
	}

	return (nbNodes);
}
