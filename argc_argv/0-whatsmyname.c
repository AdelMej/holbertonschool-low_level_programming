#include <stdio.h>

/**
* main - return the name given in arguments
* @argc: the number of command-line arguments (unused)
* @argv: An array of strings containing the arguments
*
* Return: always zero (Success)
*/

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
