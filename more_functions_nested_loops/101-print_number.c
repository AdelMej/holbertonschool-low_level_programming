#include "main.h"

/**
* print_number - a
*
*
*
*/

void print_number(int n)
{
	int multi = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	/* if n is under 10 print n */
	if (n < 10)
	{
		_putchar(n + '0');
	}
	else
	{
		/* finding out the multiple of 10 that can divide n */
		while (multi < n)
			multi *= 10;
		/* dividing by 10 to decrease multiple so that it fit n */
		multi /= 10;

		/* printing the number */
		while (multi > 0)
		{
			_putchar(((n / multi) % 10) + '0');
			multi /= 10;
		}
	}
}
