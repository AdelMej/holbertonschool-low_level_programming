#include "main.h"
#include <stdio.h>

/**
* print_diagsums - a function that prints the sum of each diagonals
* @a: a pointer to a double array
* @size: the size of the cube
*
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int i;
	int sumDiag1 = 0;
	int sumDiag2 = 0;

	for (i = 0; i < size; i++)
	{
		sumDiag1 += *(a + i * size + i);
		sumDiag2 += *(a + i * size + (size - 1 - i));
	}

	printf("%d, %d\n", sumDiag1, sumDiag2);
}
