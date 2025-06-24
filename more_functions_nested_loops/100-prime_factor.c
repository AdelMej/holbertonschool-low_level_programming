#include <stdio.h>

/**
* main - a program that prints the largest prime number of 612852475143
*
* Return: always zero
*/

int main(void)
{
	long long BiggestPrime = 612852475143;
	int i;

	while (BiggestPrime % 2 == 0)
	{
		BiggestPrime /= 2;
	}

	for (i = 3; i * i <= BiggestPrime; i = i + 2)
	{
		while (BiggestPrime % i == 0)
		{
			BiggestPrime /= i;
		}

	}

	printf("%lld\n", BiggestPrime);
	return (0);
}
