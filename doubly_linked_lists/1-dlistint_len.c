#include "lists.h"
#include <stddef.h>

/**
* dlistint_len - a function that returns the length of a doubled linked list
* @h: the head of the linked list
*
* Return: the length of the doubled linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t nbNodes = 0;

	if (h == NULL)
		return (0);

	temp = h;
	while (temp != NULL)
	{
		nbNodes++;
		temp = temp->next;
	}

	return (nbNodes);
}
