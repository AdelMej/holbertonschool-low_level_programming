#include "main.h"

/**
* print_sign - print the sign of the given number
* @n: the number which sign will be used for printing
*
* Return: 1 if the number is postivie 0 if it's zero and -1 if it's negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
