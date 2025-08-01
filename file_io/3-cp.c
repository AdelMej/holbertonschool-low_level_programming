#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

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
	char buffer[BUFFER_SIZE];
	int fdFrom, fdTo;
	ssize_t bytesRead, bytesWritten, totalWritten;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fdFrom = open(argv[1], O_RDONLY);
	if (fdFrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdTo = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		closeFile(fdFrom);
		exit(99);
	}

	while ((bytesRead = read(fdFrom, buffer, BUFFER_SIZE)) > 0)
	{
		totalWritten = 0;
		while (totalWritten < bytesRead)
		{
			bytesWritten = write(fdTo, buffer + totalWritten, bytesRead - totalWritten);
			if (bytesWritten <= 0)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				closeFile(fdFrom);
				closeFile(fdTo);
				exit(99);
			}
			totalWritten += bytesWritten;
		}
	}
	if (bytesRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		closeFile(fdFrom);
		closeFile(fdTo);
		exit(98);
	}

	closeFile(fdFrom);
	closeFile(fdTo);
	return (0);
}

/**
* closeFile - a function to close a file
* @fd: the file descriptor
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
