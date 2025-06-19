#include <stdio.h>
#include "main.h"

/* declaration de fonction*/
void printNumber(int n);

/**
* print_times_table - prints the multiplication table of a given number
* @n: the multiplication table
*
* Return: void
*/

void print_times_table(int n)
{
	int i, j;
	
	if (n == 0)
	{
		_putchar('0');
	}
	if ((n < 15) && (n > 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
				{
					_putchar('0');
					_putchar(',');
				}
				if ((j != n) && (j != 0))
				{
					printNumber(i * j);
					_putchar(',');
				}
				else if (j == n)
				{
					printNumber(i * j);
				}
			}
			_putchar('\n');
		}
	}
}

/**
* printNumber - print a number in a desired format
* @n: n given number to print a specific format
*
* Return: void
*/
void printNumber(int n)
{
	if (n < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (n < 100)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar((n / 10) %  10 + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar(' ');
		_putchar(((n / 100) % 10) + '0');
		_putchar((n / 10) %  10 + '0');
		_putchar((n % 10) + '0');
	}
}
