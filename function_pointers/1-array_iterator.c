#include "function_pointers.h"

/**
* array_iterator - a function that prints an array
* depending on a given function pointer
* @array: an array to print
* @size: the size of the array
* @action: a pointer to a function to use
*
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
