#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
