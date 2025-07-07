#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - concatenate n bytes of s2 to s1
* @s1:a string
* @s2: a string to concatenate
* @n: the n bytes to concatenate
* Return: a pointer to the concatenated string
* NULL if fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ccString;
	int sizeS1, sizeS2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (sizeS1 = 0; s1[sizeS1] != '\0'; sizeS1++)
		;
	for (sizeS2 = 0; s2[sizeS2] != '\0'; sizeS2++)
		;
	if (n >= sizeS2)
		n = sizeS2;

	ccString = malloc(sizeS1 + n + 1);
	if (ccString == NULL)
		return (NULL);

	for (i = 0; i < sizeS1; i++)
	{
		ccString[i] = s1[i];
	}
	if (n == 0)
	{
		ccString[sizeS1] = '\0';
		return (ccString);
	}

	for (j = 0; j < n; j++)
	{
		ccString[i + j] = s2[j];
	}
	ccString[sizeS1 + n] = '\0';
	return (ccString);
}
