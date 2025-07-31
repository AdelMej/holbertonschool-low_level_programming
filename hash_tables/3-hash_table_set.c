#include "hash_tables.h"
#include <limits.h>
#include <stdlib.h>
/* Function declarations */
char *_strdup(const char *str);
int _strlen(const char *str);
int _strcmp(const char *str1, const char *str2);
int update_node_value(hash_node_t *head, const char *key, const char *value);

/**
* hash_table_set - set a value in the hash table
* @ht: the hash table
* @key: new key for the hash table
* @value: the content of the new node
*
* Return: 0 if it fails
* 1 if success
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *toCheck;
	unsigned long index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (index == ULONG_MAX)
		return (0);

	if (update_node_value(ht->array[index], key, value))
		return (1);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = _strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = _strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = NULL;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}
	toCheck = ht->array[index];
	while (toCheck->next != NULL)
		toCheck = toCheck->next;

	toCheck->next = new_node;
	return (1);
}
/**
* _strdup - a function that that create a malloced copy of a string
* @str: a string to copy
*
* Return: a malloc-ed copy of the string
* NULL if it fails
*/
char *_strdup(const char *str)
{
	char *strcpy;
	int i;

	strcpy = malloc(_strlen(str) + 1);
	if (strcpy == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		strcpy[i] = str[i];

	strcpy[i] = '\0';
	return (strcpy);
}

/**
* _strlen - a function that calculate the length of a string
* @str: a string
*
* Return: the length of a string
* 0 if str is NULL
*/
int _strlen(const char *str)
{
	int len;

	if (str == NULL)
		return (0);

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}
/**
* _strcmp - a function that compare 2 string
* @str1: the first tring to compare
* @str2: a string to compare with
*
* Return: 0 if equal
* a negative or positive depending on ascii values
*/
int _strcmp(const char *str1, const char *str2)
{
	unsigned int i;

	for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
		if ((unsigned char)str1[i] != (unsigned char)str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);

	return (0);
}

/**
* update_node_value - a function that update a node in a linked list
* @head: the head if the linked list
* @key: the key of the node
* @value: the value to update
*
* Return: 0 if it fails
* 1 if it succeed
*/
int update_node_value(hash_node_t *head, const char *key, const char *value)
{
	hash_node_t *toCheck = head;

	while (toCheck != NULL)
	{
		if (_strcmp(toCheck->key, key) == 0)
		{
			free(toCheck->value);
			toCheck->value = _strdup(value);
			if (toCheck->value == NULL)
				return (0);
			return (1);
		}
		toCheck = toCheck->next;
	}

	return (0);
}
