#include <stdio.h>

/**
* main - Prints all the arguments received
* @argc: the number of command-line arguments (unused)
* @argv: An array of strings containing the arguments
*
* Return: always zero (Success)
*/

int main(int argc, char **argv)
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
