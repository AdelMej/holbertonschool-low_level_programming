#include <stdlib.h>
#include "main.h"

/**
* create_array - a function that creates a string
* @size: the size of the string
* @c: a character for initialization
*
* Return: NULL if it failes else the pointer to the string
*/

char *create_array(unsigned int size, char c)
{
	char *genArr;
	int i;

	if (size == 0)
		return NULL;
	genArr = malloc((sizeof(char) * size) + 1);

	if (genArr == NULL)
		return (NULL);

	for (i = 0; i < (int)size; i++)
	{
		genArr[i] = c;
	}
	genArr[size] = '\0';
	return (genArr);
}
