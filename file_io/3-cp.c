#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
/* Function declarations */
void closeFile(int fd);

/**
* main - a program that copies a file
* @argc: the number of arguments
* @argv: an array of arguments
*
* Return: 97 if incorrect number of arguments
* 98 if open From fails
* 99 if open to fails or copy fails
* 100 if closing a file descriptor fails
*/
int main(int argc, char **argv)
{
	char *fileFrom, *fileTo;
	char buffer[1024];
	int fdFrom, fdTo, bytesRead, bytesWritten;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fileFrom = argv[1];
	fileTo = argv[2];

	fdFrom = open(fileFrom, O_RDONLY);
	if (fdFrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fileFrom);
		exit(98);
	}
	fdTo = open(fileTo, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileTo);
		closeFile(fdFrom);
		exit(99);
	}

	do {
		bytesRead = read(fdFrom, buffer, 1024);
		if (bytesRead == -1)
		{
			closeFile(fdFrom);
			closeFile(fdTo);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fileFrom);
			exit(98);
		}
		if (bytesRead == 0)
			break;
		bytesWritten = write(fdTo, buffer, bytesRead);
		if (bytesWritten == -1 || bytesWritten != bytesRead)
		{
			closeFile(fdFrom);
			closeFile(fdTo);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileTo);
			exit(99);
		}
	} while (1);

	closeFile(fdFrom);
	closeFile(fdTo);
	return (0);
}

/**
* closeFile - a function to close a file
* @fd: the file definition
*
* Return: void
* exit with 100 if closing failed
*/
void closeFile(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
