#ifndef MAIN_H
#define MAIN_H

/* a function that changes n to 98 */
void reset_to_98(int *n);

/* a function that swap the value of 2 integers */
void swap_int(int *a, int *b);

/* a function that returns the length of a string */
int _strlen(char *s);

/* a function that prints a given string */
void _puts(char *str);

/* a function that prints a character */
int _putchar(char c);

/* a function that prints a string in reverse */
void print_rev(char *s);

/* a function that reverse a string */
void rev_string(char *s);

/* a function that prints every other character of a given string */
void puts2(char *str);

/* a function that prints half of a string */
void puts_half(char *str);

/* a function that prints n elements of a given array */
void print_array(int *a, int n);

/* a function that copies a string in another one */
char *_strcpy(char *dest, char *src);

/* a function that return a number */
int _atoi(char *s);

/* a function that concatenates two strings */
char *_strcat(char *dest, char *src);

/* a function that concatenates n characters */
char *_strncat(char *dest, char *src, int n);

/* a function that copies a string */
char *_strncpy(char *dest, char *src, int n);

/* a function that compare 2 given string */
int _strcmp(char *s1, char *s2);

/* a function that reverse a given array of integer */
void reverse_array(int *a, int n);

/* a function that changes all the lowercase string to uppercase */
char *string_toupper(char *);

/* a function that capitalize all strings in a word */
char *cap_string(char *);

/* a function that encodes a string in 1337 */
char *leet(char *);

/* a function that encodes a string in rot13 */
char *rot13(char *);

/* a function that prints a given number */
void print_number(int n);

/* a function that infinitely adds to given number stored in a string */
char *infinite_add(char *n1, char *n2, char *r, int size_r);

#endif
