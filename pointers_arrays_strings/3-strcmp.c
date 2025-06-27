#include "main.h"

/**
* _strcmp - a function that compare 2 strings
* @s1: a string to be compared with
* @s2: a string to be compared with
*
* Return: 1 if s1 equal s2 else return 0;
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	return (0);
}
