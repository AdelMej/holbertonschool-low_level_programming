#include "lists.h"
#include <stddef.h>

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t nbNodes;

	if (h == NULL)
		return (0);

	temp = h;
	do {
		nbNodes++;
		temp = temp->next;
	} while (temp != NULL);

	return (nbNodes);
}

