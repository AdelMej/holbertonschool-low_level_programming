#include <stdio.h>
#include <stdlib.h>
/**
* main - Prints the multiplication of two numbers
* @argc: the number of command-line arguments
* @argv: An array of strings containing the arguments
*
* Return: zero if successful,
* return 1 if numbers are too long
* or incorrect number of arguments
*/

int main(int argc, char **argv)
{
	unsigned long a, b;
	char *endptr;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = strtol(argv[1], &endptr, 10);
	if (endptr == argv[1] || *endptr != '\0')
	{
		printf("Error\n");
		return (1);
	}

	b = strtol(argv[2], &endptr, 10);
	if (endptr == argv[2] || *endptr != '\0')
	{
		printf("Error\n");
		return (1);
	}

	printf("%ld\n", a * b);
	return (0);
}
