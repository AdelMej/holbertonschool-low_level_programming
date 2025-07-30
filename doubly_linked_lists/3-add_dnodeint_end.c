#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint_end - a function that adds a node
* at the end of double linked list
* @head: a pointer to the head of the doubled linked list
* @n: the number to give the new node
*
* Return: the new node
* NULL if malloc fails
*/
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
		temp->prev = NULL;
		*head = temp;
		return (temp);
	}

	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	temp->prev = last;
	last->next = temp;

	return (temp);
}
