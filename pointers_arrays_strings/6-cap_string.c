#include "main.h"

/* declaration de fonction */
int isSeparator(char c);

/**
* cap_string - a function that capitalize very wors in a string
* @str: a string
*
* Return: the resulting string with capitalized words
*/

char *cap_string(char *str)
{
	int i, isinWord = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isinWord)
		{
			if (str[i] <= 'z' && str[i] >= 'a')
			{
				str[i] -= 32;
			}
			isinWord = 1;
		}
		else if (isSeparator(str[i]))
		{
			isinWord = 0;
		}
	}
	return (str);
}

/**
* isSeparator - a function that verifies if a given character is a separator
* @c: a character
*
* Return: 1 if c is a separator else 0
*/

int isSeparator(char c)
{
	char separator[] = {' ', '\t', '\n', ',', ';', '.',
						'!', '?', '"', '(', ')', '{', '}'};
	int i;

	for (i = 0; separator[i] != '\0'; i++)
	{
		if (c == separator[i])
		{
			return (1);
		}
	}
	return (0);
}
