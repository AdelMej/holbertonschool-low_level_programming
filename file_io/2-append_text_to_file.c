#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
/* Function declarations */
int _strlen(char *str);

/**
* append_text_to_file - write at the end of a file
* @filename: the name of the file
* @text_content: the text to append to the file
*
* Return: -1 if it fails (can't open incorrect reads or writes)
* 1 if it suceed
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nbChar;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	nbChar = write(fd, text_content, _strlen(text_content));
	if (nbChar == -1 || nbChar < _strlen(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

/**
* _strlen - a function that returns the length of a string
* @str: a string
*
* Return: 0 if the string is NUKK
* otherwise the length of the string
*/
int _strlen(char *str)
{
	int len;

	if (str == NULL)
		return (0);

	for (len = 0; str[len] != '\0'; len++)
		;

	return (len);
}
