#include "main.h"
/**
* print_alphabet_x10 - print the alphabet 10 times
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

void print_alphabet_x10(void)
{
	char x = 'a';
	int it = 0;

	while (it < 10)
	{
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
	_putchar('\n');
	x = 'a';
	it++;
	}
}
