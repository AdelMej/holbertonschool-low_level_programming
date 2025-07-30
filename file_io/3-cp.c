#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
/* Function declarations */
int _strlen(char *str);
void _writeError(char *message, char *file_name);
void closeFile(int fd);

/**
* main - a program that copies a file
* @argc: the number of arguments
* @argv: an array of arguments
*
* Return: 97 if incorrect number of arguments
* 98 if open From fails
* 99 if open to fails or copy fails
* 100 if
*/
int main(int argc, char **argv)
{
	char *fileFrom, *fileTo;
	char buffer[1024];
	int fdFrom, fdTo, lenFrom, lenTo;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fileFrom = argv[1];
	fileTo = argv[2];

	fdFrom = open(fileFrom, O_RDONLY);
	if (fdFrom == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", fileFrom);
		exit(98);
	}
	fdTo = open(fileTo, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdTo == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", fileTo);
		closeFile(fdFrom);
		exit(99);
	}

	do {
		lenFrom = read(fdFrom, buffer, 1024);
		if (lenFrom == -1)
		{
			closeFile(fdFrom);
			closeFile(fdTo);
			dprintf(2, "Error: Can't write to %s\n", fileTo);
			exit(99);
		}
		if (lenFrom == 0)
			break;
		lenTo = write(fdTo, buffer, lenFrom);
		if (lenTo == -1)
		{
			closeFile(fdFrom);
			closeFile(fdTo);
			dprintf(2, "Error: Can't write to %s\n", fileTo);
			exit(99);
		}
		if (lenTo != lenFrom)
		{
			closeFile(fdFrom);
			closeFile(fdTo);
			dprintf(2, "Error: Can't write to %s\n", fileTo);
			exit(99);
		}
	} while (1);

	closeFile(fdFrom);
	closeFile(fdTo);
	return (0);
}

/**
* _strlen - a function that return the length of a string
* @str: a string
*
* Return: 0 if string is NULL
* otherwise return the string length
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

/**
* closeFile - a function to close a file
* @fd: the file definition
*
* Return: void
* exit with 98 if closing failed
*/
void closeFile(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close %d", fd);
		exit(100);
	}
}
