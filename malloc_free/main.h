#ifndef MAIN_H
#define MAIN_H

/* a function that prints a character */
int _putchar(char c);

/* a function that creates a string and initialize it's value */
char *create_array(unsigned int size, char c);

/* a function that returns a pointer to a new allocaed memory with a copy of thr string */
char *_strdup(char *str);

/* a function that concatenate 2 strings */
char *str_concat(char *s1, char *s2);

#endif
