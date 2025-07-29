#include "lists.h"

/**
* sum_dlistint - a function that sums all of the doubled linked list content
* @head: the head of the linked list
*
* Return: the sum of everything in the linked list
* 0 if the list is empty
*/
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
