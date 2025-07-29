#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, nbCharact = 0;
	char *toWrite;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	toWrite = malloc(letters);
	if (toWrite == NULL)
		return (-1);

	nbCharact = read(fd, toWrite, letters);
	if (nbCharact == -1)
		return (0);
	
	nbCharact = write(1, toWrite, letters);
	if (nbCharact == -1)
		return (0);

	return (nbCharact);
}
