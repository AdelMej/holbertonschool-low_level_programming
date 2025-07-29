#include "lists.h"
#include <stdlib.h>

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *last;
	
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	
	last = *head;
	while (last->next != NULL) {
		last = last->next;
	}
	temp->prev = last;
	last->next = temp;
	return (temp);
}
