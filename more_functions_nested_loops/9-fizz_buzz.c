#include <stdio.h>

/**
* main - a program that prints all numbers
* and fizz and buzz for multiples of 3 and 5
*
* Return: always zero
*/

int main(void)
{
	int i = 1;

	do {
		if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		if (((i % 3) != 0) && ((i % 5 != 0)))
		{
			printf("%d", i);
		}
		if (i != 100)
			printf(" ");
		i++;
	} while (i <= 100);
	printf("\n");
	return (0);
}
