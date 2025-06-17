#include <stdio.h>
#include "main.h"
/**
* print_alphabet - a function that print the print_alphabet
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
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
