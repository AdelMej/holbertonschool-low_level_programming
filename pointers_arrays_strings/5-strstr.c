#include "main.h"
#include <stddef.h>

/**
* _strstr - a function that searches for a substring within a string
* @haystack: a string to be searched in
* @needle: the substring to search for
*
* Return: pointer to the beginning of the first occurrence of needle,
* or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	char *h = NULL;
	char *n = NULL;

	if (*needle == '\0')
		return (haystack);
	if (*haystack == '\0')
		return (NULL);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		h = haystack + i;
		n = needle;
		while (*h != '\0' && *n != '\0' && (*h == *n))
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack + i);
	}

	return (NULL);
}
