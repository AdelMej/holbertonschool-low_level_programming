#include "main.h"
#include <stdlib.h>
/**
* str_concat - a function that return a pointer
* to a newly allocated string
* @s1: a string to concatenate
* @s2: a string to concatenate
*
* Return: a char
*/

char *str_concat(char *s1, char *s2)
{
	int sizeS1, sizeS2, i;
	char *concString;

	if(s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	for (sizeS1 = 0; s1[sizeS1] != '\0'; sizeS1++)
		;
	for	(sizeS2 = 0; s2[sizeS2] != '\0'; sizeS2++)
		;

	concString = malloc(sizeS1 + sizeS2 + 1);

	if (concString == NULL)
		return NULL;

	for (i = 0; i < sizeS1; i++)
	{
		concString[i] = s1[i];
	}
	for (i = 0; i < sizeS2; i++)
	{
		concString[sizeS1 + i] = s2[i];
	}
	concString[sizeS1 + i] = '\0';
	return (concString);
}
