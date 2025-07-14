#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>

/* a function to print a character */
int _putchar(char c);

/* a function that prints a name depending on a function pointer */
void print_name(char *name, void (*f)(char *));

/* a function that prints an array depending on a given function */
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
