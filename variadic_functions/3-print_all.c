#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/* function declaration */
void print_char(va_list *args);
void print_int(va_list *args);
void print_float(va_list *args);
void print_string(va_list *args);

/**
* print_all - a function that prints everything depending on a given format
* @format: the format of the string
*
* Return: void;
*/
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j;
	char *separator = "";
	char *symbol = "cifs";
	void (*funcs[])(va_list *) = {print_char, print_int, print_float, print_string};
	va_list daVa;

	va_start(daVa, format);
	while (format && format[i]) /* parcouring the format */
	{
		j = 0;
		while (symbol[j] != '\0') /* searching for a printable format */
		{
			if (symbol[j] == format[i]) /* printing if a match is found */
			{
				printf("%s", separator);
				funcs[j](&daVa);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(daVa);
}

/**
* print_char - a function to print a char
* @args: a va_list
*
* Return: void
*/
void print_char(va_list *args)
{
	printf("%c", va_arg(*args, int));
}

/**
* print_int - a function to print an int
* @args: a va_list
*
* Return: void
*/
void print_int(va_list *args)
{
	printf("%d", va_arg(*args, int));
}

/**
* print_float - a function to print a float
* @args: a va_list
*
* Return: void
*/
void print_float(va_list *args)
{
	printf("%f", va_arg(*args, double));
}
/**
* print_string - a function to print a string
* @args: a va_list
*
* Return: void
*/
void print_string(va_list *args)
{
	char *str;

	str = va_arg(*args, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
