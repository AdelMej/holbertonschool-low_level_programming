#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* _calloc - allocate memory and initialize it to zero
* @nmemb: number of element to initialize
* @size: size of each element
*
* Return: a pointer to the created array
* or NULL if it fails
* Note: the user is responsible for freeing memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *res;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	res = malloc(size * nmemb);
	if (res == NULL)
	 return (NULL);

	memset(res, 0, nmemb * size);
	return ((void *)res);
}
