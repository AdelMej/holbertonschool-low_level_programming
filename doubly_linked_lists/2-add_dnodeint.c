#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint - a function to add a new node
* at the start of the doubled linked list
* @head: a pointer to the head fo the doubled linked list
* @n: the value to store in the doubled linked list
*
* Return: the new node
* NULL if malloc fails
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = *head;
	new_node->prev = NULL;
	if (new_node->next != NULL)
		new_node->next->prev = NULL;
	*head = new_node;

	return (new_node);
}
