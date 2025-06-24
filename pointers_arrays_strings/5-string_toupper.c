#include "main.h"

/**
* string_toupper - a function that converts lowercase in uppercase
* @str: a string
*
* Return: the string with lowercase modified to uppercase
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] < 'z') && (str[i] > 'a'))
		{
			str[i] -= 32;
		}
	}

	return (str);
}

