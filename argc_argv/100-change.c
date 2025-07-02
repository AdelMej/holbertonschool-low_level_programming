#include <stdio.h>
#include <stdlib.h>
/**
* main - a program that prints the minimum number of changes required
* @argc: the number of parameters
* @argv: a string containing all the parameters
* Return: 0 if sucessful otherwise return 1;
*/

int main(int argc, char **argv)
{
	int i;
	int change[] = {25, 10, 5, 2, 1};
	int rest;
	int totalCoins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if (argv[1][i] < '0' || argv[1][i] > '9')
		{
			printf("Error\n");
			return (1);
		}
	}
	rest = atoi(argv[1]);
	if (rest < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i != 5; i++)
	{
		while (rest >= change[i])
		{
			rest -= change[i];
			totalCoins++;
		}
	}
	printf("%d\n", totalCoins);
	return (0);
}
