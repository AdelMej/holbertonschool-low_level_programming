#include "lists.h"
#include <stdlib.h>

/**
* free_list - a function that free the linked list and it's content
* @head: the head of the linked list
*
* Return: void
*/
void free_list(list_t *head)
{
	list_t *next, *temp;

	if (head == NULL)
		return;

	temp = head;
	do {
		free(temp->str);
		next = temp->next;
		free(temp);
		temp = next;
	} while (next != NULL);
}
