#include "main.h"

/**
* _strcpy - a function that copies a string in another one
* @dest: a receiving string
* @src: the string to be copied
*
* Return: the pointer of an array
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];

	return (dest);
}
