#include "main.h"

/**
* print_number - a
* @n: a number to print
*
*
*/

void print_number(int n)
{
	unsigned int toPrint;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	toPrint = n;
	if (toPrint == 0)
	{
		_putchar('0');
	}
	else
	{
		if (toPrint / 10)
		{
			print_number(toPrint / 10);
		}
		_putchar(toPrint % 10 + '0');
	}
}
