#include "lists.h"
#include <stdlib.h>

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
