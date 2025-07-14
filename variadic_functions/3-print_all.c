#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_all - a function that prints everything depending on a given format
* @format: the format of the string
*
* Return: void;
*/
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *separator = "";
	char *toPrint;

	va_list daVa;

	va_start(daVa, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(daVa, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(daVa, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(daVa, double));
				break;
			case 's':
				toPrint = va_arg(daVa, char *);
				if (toPrint == NULL)
					printf("%s(nil)", separator);
				else
					printf("%s%s", separator, toPrint);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(daVa);
}
