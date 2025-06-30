#include "main.h"
#include <stddef.h>

/**
* _strchr - a function that returns a pointer
* to the first occurence of a character
* @s: a given string
* @c: a given character
*
* Return: a pointer to the first occurence of c
*/

char *_strchr(char *s, char c)
{
	int i;
	if (c == '\0')
		return (Null);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*(s + i) == c)
			return (&*(s + i));
	}

	return (NULL);
}
