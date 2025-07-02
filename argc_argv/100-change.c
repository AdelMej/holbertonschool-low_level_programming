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
	int i, rest;
	/* creating an array sorted by highest to lowest value */
	int change[] = {25, 10, 5, 2, 1};
	int totalCoins = 0;

	if (argc != 2) /* if we have more than 1 argument print Error and return 1 */
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; argv[1][i] != '\0'; i++) /* check if we have a number */
	{
		if (argv[1][i] < '0' || argv[1][i] > '9') /* if not a number */
		{
			printf("Error\n");
			return (1);
		}
	}
	/**
	 * convert the number in argument to int using atoi
	 * Note: atoi doesn't handle errors well
	 */
	rest = atoi(argv[1]);
	if (rest < 0) /* check if negative */
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i != 5; i++) /* calculating the number of coins */
	{
		while (rest >= change[i]) /* starting with the largest coin to the lowest */
		{
			rest -= change[i];
			totalCoins++;
		}
		if (rest == 0)
			break;
	}
	printf("%d\n", totalCoins); /* printing the minimum coins needed */
	return (0);
}
