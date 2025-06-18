#include "main.h"
#include <stdlib.h>
/**
* print_to_98 - print until 98 is reached starting from a given number
* @n: the starting number
*
* Return: void
*/

/* declaration */
void printNumber(int n);
void printNumber100(int n);


void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			if (n < 0)
			{
				_putchar('-');
				printNumber(n);
			}
			else
			{
				printNumber(n);
			}
			n++;
		}
		else
		{
			if (n >= 100)
			{
				printNumber100(n);
			}
			else if (n < 100)
			{
				printNumber(n);
			}
			n--;
		}
	}
	_putchar(((n / 10) % 10) + '0');
	_putchar((n % 10) + '0');
	_putchar('\n');
}

/**
* printNumber - the number given with a specific format
* @n: given number to print
*
* Return: void
*/

void printNumber(int n)
{
	if (abs(n) < 10)
	{
		_putchar(abs(n % 10) + '0');
	}
	else
	{
		_putchar(abs((n / 10) % 10) + '0');
		_putchar(abs(n % 10) + '0');
	}
	_putchar(',');
	_putchar(' ');
}

/**
* printNumber100 - print the value of integer that are between 10 and 0
* @n: number to print
*
* Return: void
*/

void printNumber100(int n)
{
	_putchar(abs((n / 100) % 10) + '0');
	_putchar(abs((n / 10) % 10) + '0');
	_putchar(abs(n % 10) + '0');
	_putchar(',');
	_putchar(' ');
}
