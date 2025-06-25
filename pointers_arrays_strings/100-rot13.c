#include "main.h"

/**
* rot13 - a function that encodes a given string in rot13
* @s: a given string
*
* Return: the encoded string
*/

char *rot13(char *s)
{
	char *p = s;
	char c;
	int i;
	char rotated;
	char from[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char to[]   = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	while (*p)
	{
		c = *p;
		rotated = c;

		for (i = 0; i < 52; i++)
		{
			rotated += (c == from[i]) * (to[i] - c);
		}

		if (rotated != c)
		{
			*p = rotated;
		}

		p++;
	}
	return (s);
}
