#include "main.h"
#include <stdio.h>

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
		printf("we are looping\n");
		if ((str[i] <= 'z') && (str[i] >= 'a'))
		{
			printf("%c\n", str[i]);
			str[i] -= 32;
		}
	}

	return (str);
}

