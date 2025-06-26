#include "main.h"

/**
* print_number - a function that  prints a given number
* @n: an integer to be printed
*
* Return: void
*/

void print_number(int n)
{
	unsigned int toPrint;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	toPrint = n;
	if (toPrint / 10)
		print_number(toPrint / 10);

	_putchar(toPrint % 10 + '0');
}
