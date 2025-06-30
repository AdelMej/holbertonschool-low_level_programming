#include "main.h"

/**
* _strspn - a funtion that counts the
* number of apparition of characters given by a string
* in it's first section
* @s: a string that will be counted
* @accept: a string that contains the comparator
*
* Return: the number of apparition of accept in s
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != ' ' && s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
		}
	}
	return (count);
}
