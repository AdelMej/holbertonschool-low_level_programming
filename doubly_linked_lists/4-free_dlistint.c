#include "lists.h"
#include <stdlib.h>

/**
* free_dlistint - a function that frees a linked list
* @head: the head of the doubled linked list
*
* Description: does not put head to NULL so the responsability
* falls over the user
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *tofree;

	tofree = head;
	while (tofree != NULL)
	{
		temp = tofree->next;
		free(tofree);
		tofree = temp;
	}
}
