#include "lists.h"
#include <stddef.h>

/**
* dlistint_len - Returns the number of elements in a doubly linked list
* @h: Pointer to the head of the list
*
* Return: Number of nodes in the doubly linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t nbNodes = 0;

	temp = h;
	while (temp != NULL)
	{
		nbNodes++;
		temp = temp->next;
	}

	return (nbNodes);
}
