#include "main.h"
#include <stdlib.h>
/**
* array_range - a function that returns an array in a range
* @min: the minimum range
* @max: the maximum range
*
* Return: the newly created array within the range
*/

int *array_range(int min, int max)
{
	int *arrRange;
	int i;

	if (min > max)
		return (NULL);

	arrRange = malloc(sizeof(int) * (max - min + 1));
	if (arrRange == NULL)
		return (NULL);

	for (i = 0; i < max - min + 1; i++)
	{
		arrRange[i] = min + i;
	}

	return (arrRange);
}
