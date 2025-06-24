#include "main.h"
#include <stdio.h>
/**
* _strcat - a function that concatenate two given strings
* @dest: the receiving string
* @src: the string to be copied
*
* Return: the concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/* on se place la ou le premier string est fini */
	for (i = 0; dest[i] != '\0'; i++)
		;

	/* on remplace le caractere '\0' par un espace */
	dest[i] = ' ';
	j = 0;

	/* on ecrit src dans dest */
	while ((src[j] != '\0') && (j < n))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	/* rajout du charactere speciale */
	dest[i] = '\0';

	return (dest);
}
