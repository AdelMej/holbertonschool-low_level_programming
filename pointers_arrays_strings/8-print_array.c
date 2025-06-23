#include "main.h"
#include <stdio.h>
/**
* print_array - a function that prints a given table to a given number
* @a: an array to be displayed
* @n: the number of integer displayed
*
* Return: void
*/

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
	}
	else
	{
		for (i = 0; i <= n - 1; i++)
		{
			if (i != n - 1)
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d\n", a[i]);
			}
		}
	}
}
