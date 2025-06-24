#include "main.h"
#include <stdio.h>
/**
* reverse_array - a function that reverse an array to n
* @a: an array of integers
* @n: the number of elements to switch
*
* Return: void
*/

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
