#include "lists.h"
#include <stdlib.h>
#include <string.h>
/* Function declarations */
size_t _strlen(const char *str);

/**
* add_node_end - a function that adds a note to the end of the linked list
* @head: a pointer to the adress of the head of the linked list
* @str: a string to add in the linked list
*
* Return: the head of the linked list
* NULL if malloc fails
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *last;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = _strlen(str);

	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = temp;
		return (*head);
	}
	return (*head);
}

/**
* _strlen - a function tha returns the length of a string
* @str: a string
*
* Return: the length of the given string;
*/
size_t _strlen(const char *str)
{
	size_t length;

	if (str == NULL)
		return (0);

	for (length = 0; str[length] != '\0'; length++)
		;

	return (length);
}
