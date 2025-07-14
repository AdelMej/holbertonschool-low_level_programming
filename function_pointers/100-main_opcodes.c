#include <stdio.h>
#include <stdlib.h>
/**
* main - a program that prints a given number of it's own opcode
* @argc: number of arguments
* @argv: an array of string containing the arguments
*
* Return: 1 if incorrect number of arguments
* 2 if a negative is passed
* 0 if suceed
*/
int main(int argc, char **argv)
{
	int iteration, i;
	const unsigned char *ptr = (const unsigned char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	iteration = atoi(argv[1]);
	if (iteration < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < iteration; i++)
	{
		if (i != iteration - 1)
			printf("%02x ", ptr[i]);
		else
			printf("%02x\n", ptr[i]);

	}

	return (0);
}
