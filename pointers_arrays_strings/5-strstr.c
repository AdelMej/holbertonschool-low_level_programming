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
	char *h = NULL;
	char *n = NULL;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		h = haystack;
		n = needle;
		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}

	return (NULL);
}
