#include <stdio.h>
#include "main.h"
/*
* print_alphabet - a function that print the print_alphabet
*
* Return: void
*/

void print_alphabet(void)
{
	char x = 'a';
	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
