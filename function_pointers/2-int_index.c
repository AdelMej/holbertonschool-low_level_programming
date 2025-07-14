#include "function_pointers.h"

/**
* int_index - a function that compare an array of integer
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

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (-1);
}
