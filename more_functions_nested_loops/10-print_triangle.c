#include "main.h"

/**
* print_triangle - a function that prints a triangle depending on size
* @size: the size of the triagle
*
* Return: void
*/

void print_triangle(int size)
{
	int i, j, temp;

	temp = size - 1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < temp)
					_putchar(' ');
				else
					_putchar('#');
			}
			temp--;
			_putchar('\n');
		}
	}
}
