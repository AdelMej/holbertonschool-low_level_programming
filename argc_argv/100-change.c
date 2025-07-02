#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
/* function declaration */
int isValidNumber(char *s);

/**
* main - a program that prints the minimum number of change required
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
	errno = 0;
	rest = strtol(argv[1], &endPtr, 10); /* convert string to long integer */
	/* if number is too big or is invalid print Error return 1 */
	if (errno == ERANGE || *endPtr != '\0' || !isValidNumber(argv[1]))
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

/**
* isValidNumber - check if the input is a valid number
* @s: the string to be tested
*
* Return: 1 if it's a number
* return 0 if it's negative or not a number
*/
int isValidNumber(char *s)
{
	int i = 0;

	if (s[0] == '\0' || s[0] == '-')
		return (0);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9') /* if it's not a number */
			return (0);
	}
	return (1);
}
