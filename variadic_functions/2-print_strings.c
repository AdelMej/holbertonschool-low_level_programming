#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - a function that prints a string with a separator
* @separator: a seperator to print between each strings
* @n: the number of arguments
*
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list daVa;
	unsigned int i;
	char *toPrint;
	va_start(daVa, n);

	for (i = 0; i < n; i++)
	{
		toPrint = va_arg(daVa, char *);

		if (toPrint != NULL)
			printf("%s", toPrint);
		else
			printf("(nil)");

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(daVa);
}

