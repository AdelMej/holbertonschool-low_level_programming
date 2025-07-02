#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
/**
* main - a program that prints the minimum number of changes required
* @argc: the number of parameters
* @argv: a string containing all the parameters
* Return: 0 if sucessful otherwise return 1;
*/
int main(int argc, char *argv[])
{
	int i = 0;
	long rest, totalCoins;
	int change[] = {25, 10, 5, 2, 1};
	char *endPtr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-')
		i = 1;
	for (; argv[1][i] != '\0'; i++) /* check if we have a number */
	{
		if (argv[1][i] < '0' || argv[1][i] > '9') /* if not a number */
		{
			printf("Error\n");
			return (1);
		}
	}
	errno = 0;
	rest = strtol(argv[1], &endPtr, 10); /* convert string to long integer */
	if (errno == ERANGE || *endPtr != '\0') /* if number is too long */
	{
		printf("Error\n");
		return (1);
	}
	if (rest < 0)
	{
		printf("0\n");
		return (0);
	}
	totalCoins = 0;
	for (i = 0; i != 5; i++) /* calculating the number of coins */
	{
		totalCoins += (rest / change[i]);
		rest = rest % change[i];
		if (rest == 0)
			break;
	}
	printf("%ld\n", totalCoins); /* printing the minimum coins needed */
	return (0);
}
