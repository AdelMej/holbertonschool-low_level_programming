#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

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
