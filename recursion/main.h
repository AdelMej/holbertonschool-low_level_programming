#ifndef MAIN_H
#define MAIN_H
/**
* File: main.h
* Description: Header file containing declarations for recursion-related functions.
*/

/* Prints a single character in the standard output */
int _putchar(char c);

/* Prints a string recursively */
void _puts_recursion(char *s);

/* Prints a string in reverse recursively */
void _print_rev_recursion(char *s);

/* Returns the length of s */
int _strlen_recursion(char *s);

/* Returns the factorial of n */
int factorial(int n);

/* Returns the value of x to the power of y */
int _pow_recursion(int x, int y);

/* Returns the square root of n */
int _sqrt_recursion(int n);

/* Returns if n is prime, else 0 */
int is_prime_number(int n);

/* Sets the value of a pointer to a char */
void set_string(char **s, char *to);

/* Returns 1 if a string is a palindrome, else 0 */
int is_palindrome(char *s);

/* Compares two strings and returns 1 if they can be considered identical (with wildcard support) */
int wildcmp(char *s1, char *s2);

#endif
