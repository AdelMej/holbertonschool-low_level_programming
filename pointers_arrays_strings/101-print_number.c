#include "main.h"

/**
* print_number - a function that  prints a given number
* @number: an integer to be printed
*
* Return: void
*/

void print_number(int number)
{
	unsigned int n = number;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}
