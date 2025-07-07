#include "main.h"
#include <stdlib.h>
/**
* _strdup - a function that copy a string and return it's copy
* @str: a string to be copied
*
* Return: NULL if it fails otherwise return the copied string
*/

char *_strdup(char *str)
{
	char *cpString;
	size_t i, size;

	for (size = 0; str[size] != '\0'; size++)
		;
	
	if(str == NULL)
		return (NULL);

	cpString = malloc(size + 1);
	if (cpString == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		cpString[i] = str[i];
	}
	cpString[i] = '\0';
	return (cpString);
}
