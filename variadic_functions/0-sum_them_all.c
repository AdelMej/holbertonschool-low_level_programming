#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - a function to add n given argument
* @n: the number of arguments
*
* Return: the sum of the arguments
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list daVa;
	unsigned int i;
	int sum = 0;

	va_start(daVa, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(daVa, int);
	}

	va_end(daVa);
	return (sum);
}
