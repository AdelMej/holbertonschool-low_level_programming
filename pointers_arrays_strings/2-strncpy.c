#include "main.h"

/**
* _strncpy - a function that copies a string
* @dest: the receiving string
* @src: the string to copy
* @n: number of character to copy
*
* Return: the copied string;
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
