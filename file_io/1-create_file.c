#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_WRONLY, S_IRED | S_IWUSR);
}
