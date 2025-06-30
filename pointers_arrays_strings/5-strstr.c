#include "main.h"
#include <stddef.h>

/**
* _strstr - a function that search a given string contained in a string
* @haystack: a string to be searched in
* @needle: a string to search
*
* Return: a pointer to the start of the found string else NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;
	if (*needle == '\0')
		return (haystack);
	if (*haystack == '\0')
		return (NULL);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if(haystack[i + j] != needle[j])
				break;
		}
		if(needle[j] == '\0')
			return (haystack + i);
	}

	return (NULL);
}
