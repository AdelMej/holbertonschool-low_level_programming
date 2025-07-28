#include "lists.h"
#include <stdio.h>

/**
* print_list - a function that prints a linked list_t
* @h: the linked list to print
* Description: print the length and the string
* print [0] (nil) if the string is null
*
* Return: number of Nodes;
*/
size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t nbNodes = 0;

	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
			temp = temp->next;
			nbNodes++;
			continue;
		}
		printf("[%u] %s\n", temp->len, temp->str);
		nbNodes++;
		temp = temp->next;
	}

	return (nbNodes);
}
