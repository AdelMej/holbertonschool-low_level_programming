#include "main.h"
#include <stddef.h>

/**
* _strstr - a function that search a given string in contained in a string
* @haystack: a string to be searched in
* @needle: a string to search
*
* Return: a pointer to the start of the found string else NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int isFound = 0;
	char *result;
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[j] == haystack[i])
		{
			if (j == 0)
			{
				isFound = 1;
				result = &haystack[i];
			}
			while (isFound && needle[j] != '\0' && haystack[i] != '\0')
			{
				if (haystack[i] != needle[j])
				{
					isFound = 0;
					break;
				}
				i++;
				j++;
			}
			j = 0;
		}
	}

	if (isFound)
		return (result);
	else
		return (NULL);
}
