#include "main.h"
#include <stdio.h>
#include <fcntl.h> /* flags like O_WRONLY */
#include <unistd.h> /* write, read, close */
#include <sys/types.h> /* syze_t, mode_t etc..*/
#include <sys/stat.h> /* file permission macros like 0600 */

/* Function declarations */
unsigned int _strlen(char *str);

/**
* create_file - a function that creates a file with content
* @filename: the name of the file
* @text_content: the content to write in the file
*
* Return: -1 if it fails (file failed to open or read or write)
* 1 success
*/
int create_file(const char *filename, char *text_content)
{
	int fd, length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	length = write(fd, text_content, _strlen(text_content));
	if (length == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

/**
* _strlen - a function to count the length of a given string
* @str: a string
*
* Return: the length of the string
* 0 if the the string is NULL
*/
unsigned int _strlen(char *str)
{
	int len = 0;

	for (len = 0; str[len] != '\0'; len++)
		;

	return (len);
}
