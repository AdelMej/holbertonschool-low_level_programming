#include "main.h"

/**
* _puts - a function that prints a string
* @str: a string to be printed
*
* Return: void
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
