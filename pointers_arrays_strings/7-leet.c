#include "main.h"

/**
* leet - a function tha encodes a string into 1337
* @str: a string to encode
*
* Return: the 1337 string
*/

char *leet(char *str)
{
	char compare[] = {'a', 'e', 'o', 't', 'l'};
	char encode[] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == compare[j] || str[i] == compare[j] - 32)
				str[i] = encode[j];
		}
	}
	return (str);
}
