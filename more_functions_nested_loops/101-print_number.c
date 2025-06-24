#include "main.h"

/**
*
*
*
*
*/

void print_number(int n)
{
	int multi = 1;
	
	if(n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	while (multi < n)
		multi *= 10;
	multi /= 10;

	if(n < 10)
	{
		_putchar(n + '0');
	}
	else 
	{
		while(multi > 0)
		{
			_putchar(((n / multi) % 10) + '0');
			multi /= 10;
		}
	}
}
