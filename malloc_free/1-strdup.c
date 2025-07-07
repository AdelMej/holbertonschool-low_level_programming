#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* _strdup - a function that copy a string and return it's copy
* @str: a string to be copied
*
* Return: NULL if it fails otherwise return the copied string
*/

char *_strdup(char *str)
{
	char *cpString;
	size_t i;
	
	if(str == NULL)
		return (NULL);

	cpString = malloc(strlen(str) + 1);
	if (cpString == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		cpString[i] = str[i];
	}
	cpString[i] = '\0';
	return (cpString);
}
