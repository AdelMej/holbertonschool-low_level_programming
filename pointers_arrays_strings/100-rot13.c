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
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            str[i] = (str[i] - 'a' + 13) % 26 + 'a';
	}
	return (str);
}
