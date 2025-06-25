#include "main.h"

/**
* rot13 - a function that encodes a given string in rot13
* @str: a given string
*
* Return: the encoded string
*/

char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a') && (str[i] <= 'n'))
			str[i] += 13;
		else if ((str[i] >= 'n') && (str[i] <= 'z'))
			str[i] -= 13;
		else if ((str[i] >= 'A') && (str[i] <= 'N'))
			str[i] += 13;
		else if ((str[i] >= 'N') && (str[i] <= 'Z'))
			str[i] -= 13;
	}

	return (str);
}
