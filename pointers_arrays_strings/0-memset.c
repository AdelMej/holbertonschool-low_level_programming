#include "main.h"

/**
* _memset - a function that initilize the memory until n is reached
* @s: a given pointer to initilize
* @b: a charater to use as initilize
* @n: the size to initilize
*
* Return: a character pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
	*(s + n - 1) = b;
	n--;
	}
	return (s);
}
