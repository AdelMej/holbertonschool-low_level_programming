#ifndef MY_MAIN_H
#define MY_MAIN_H
#include <stddef.h>
#include <unistd.h>

/* a function that prints a string in the stdout */
int _putchar(char c);

/* a function reads a file given in arguments */
ssize_t read_textfile(const char *filename, size_t letters);

/* a function to create a file with content */
int create_file(const char *filename, char *text_content);

/* a function that append test to a file */
int append_text_to_file(const char *filename, char *text_content);

#endif
