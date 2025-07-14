#include "function_pointers.h"
#include <stdlib.h>
/**
* int_index - searches for an integer in an array
* @array: the array to be compared
* @size: the size of the array
* @cmp: the function to use for comparaison
*
* Return: the index of the element found
* else -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL) /* incorrect size failure */
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i])) /* returning index if match is found */
			return (i);

	return (-1);
}
