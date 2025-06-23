#include "main.h"

/**
* swap_int - a function that swaps the value of 2 numbers
* @a: an integer to be swapped by b
* @b: an integer to be swapped by a
*
* Return: void
*/

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
