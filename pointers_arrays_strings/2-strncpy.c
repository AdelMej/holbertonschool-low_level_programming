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
	int length = 0;

	/* calcule de la taille de source */
	while (src[length] != '\0')
		length++;


	for (i = 0; i < n; i++)
	{
		/* si on depasse remplacer par des null */
		if (i > length)
		{
			dest[i] = '\0';
		}
		else /* sinon remplacer par source */
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
