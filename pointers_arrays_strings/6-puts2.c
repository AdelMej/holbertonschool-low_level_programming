#include "main.h"

/**
* puts2 - a function that prints every other character
* @str: a string to be printed
*
* Retrun: void
*/

void puts2(char *str)
{
	int i = 0;
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	while (i < length)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
