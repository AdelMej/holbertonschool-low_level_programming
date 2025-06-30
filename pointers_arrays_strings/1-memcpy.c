#include "main.h"

/**
* _memcpy - a function that copies n content of a given string
* @dest: the receiving string
* @src: the string to be copied
* @n: number of character to be copied
*
* Return: the copied string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{
		*(dest + n - 1) = *(src + n - 1);
		n--;
	}

	return (dest);
}
