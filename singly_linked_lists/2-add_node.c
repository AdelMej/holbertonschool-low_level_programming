#include "lists.h"
#include <stdlib.h>
#include <string.h>
/* Function declarations */
size_t _strlen(const char *str);

/**
* add_node - a function that adds a node at the start of the head;
* @head: a pointer to the head of the linked list
* @str: a string to be added in the list
*
* Return: the new head
* null if malloc failed;
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
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
