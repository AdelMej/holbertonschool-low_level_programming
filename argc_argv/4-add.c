#include <stdio.h>
#include <stdlib.h>
/**
* main - a function that add numbers given in parameters
* @argc: number of parameters
* @argv: a string containing all the parameters
* Return: 1 if a non number is given,
* return 0 if no arguments are given,
* otherwise return the sum of the parameters
*/
int main(int argc, char **argv)
{
	int i, j;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (sum);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
