#ifndef MAIN_H
#define MAIN_H

/* prints a single character in the standard output */
int _putchar(char c);

/* prints a sring in recursion */
void _puts_recursion(char *s);

/* prints a string in revers recursively */
void _print_rev_recursion(char *s);

/* a function that returns the length of a string */
int _strlen_recursion(char *s);

/* a function that returns the factorial of a given value */
int factorial(int n);

/* a function that prints the power to the power of y */
int _pow_recursion(int x, int y);

/* a function that return the square root of a number */
int _sqrt_recursion(int n);

/* a funcion that returns if a number is prime or not */
int is_prime_number(int n);

/* a function that sets the value of a poiner to a char */
void set_string(char **s, char *to);

/* a function that returns if a string is a palindrome or not */
int is_palindrome(char *s);

#endif
