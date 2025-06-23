#include "main.h"

/**
* _strlen - a function that retrns the length of a given string
* @s: a string
*
* Return: a string length
*/

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}
