#include "main.h"

/**
* puts_half - a function that prints half of a given string
* @str: a sring to be printed
*
* Return: void
*/

void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
		length++;

	for (i = ((length + 1) / 2); i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
