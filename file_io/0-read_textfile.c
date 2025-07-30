#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
* read_textfile - read the content of a given file
* @filename: the name of the file
* @letters: number of letters to read
*
* Return: 0 if fails
* number of read characters if success
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, nbRead, nbWrite;
	char *toWrite;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	toWrite = malloc(letters);
	if (toWrite == NULL)
	{
		close(fd);
		return (0);
	}

	nbRead = read(fd, toWrite, letters);
	if (nbRead == -1)
	{
		close(fd);
		free(toWrite);
		return (0);
	}

	nbWrite = write(STDOUT_FILENO, toWrite, nbRead);
	if (nbWrite == -1 || nbWrite != nbRead)
	{
		close(fd);
		free(toWrite);
		return (0);
	}

	close(fd);
	free(toWrite);
	return (nbWrite);
}
