#include "main.h"
#include <stdlib.h>

/**
* print_last_digit - prints the last digit of a given number
* @n: the value that will be used to print it's last digit
*
* Return: the last digit of n
*/

int print_last_digit(int n)
{
	_putchar((abs(n) % 10) + '0');
	return (abs(n) % 10);
}
