#ifndef VARIADIC_H
#define VARIADIC_H

/* a function that prints a character */
int _putchar(char c);

/* a funnction that adds all the parameters */
int sum_them_all(const unsigned int n, ...);

/* a function that prints numbers separated with a separator */
void print_numbers(const char *separator, const unsigned int n, ...);

/* a function that prints a string with a given separator */
void print_strings(const char *separator, const unsigned int n, ...);

/* a function that prints every given argument depending on a format */
void print_all(const char * const format, ...);

#endif
