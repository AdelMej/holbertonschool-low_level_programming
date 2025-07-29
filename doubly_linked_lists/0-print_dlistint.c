#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t nbNodes = 0;

	if (h == NULL)
		return (0);

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		nbNodes++;
	}

	return (nbNodes);
}
