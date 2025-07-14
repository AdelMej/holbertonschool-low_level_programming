#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - a function that prints number wiht a separator
* @separator: a string to print between each numbers
* @n: the number of arguments
*
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list daVa;
	unsigned int i;

	va_start(daVa, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(daVa, int)); /* printing number */

		/* printing seperator if not NULL or we didn't reach the end */
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(daVa);
}
