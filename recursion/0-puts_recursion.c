#include "main.h"

/**
* _puts_recursion - a function that recursively prints a string
* @s: a given string
*
* Return: void
*/

void _puts_recursion(char *s)
{
	_putchar(*(s));
	if (*(s + 1) != '\0')
		_puts_recursion((s + 1));
	else
		_putchar('\n');
}
