#include "function_pointers.h"

/**
* print_name - a function that prints a name
* @name: the name to print
* @f: a function pointer to define how to print the name
*
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
