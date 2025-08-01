#ifndef MAIN_H
#define MAIN_H

/* a function to print a character */
int _putchar(char c);

/* a function that allocate memory */
void *malloc_checked(unsigned int b);

/* a function that concatenate 2 strings */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/* a function that allocate and initialize an array with a size */
void *_calloc(unsigned int nmemb, unsigned int size);

/* creaes an array from min to max */
int *array_range(int min, int max);

/* a function to realloc previously sized memory */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
