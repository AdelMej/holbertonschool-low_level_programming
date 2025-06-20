#include <stdio.h>

/**
* main - prints the sum of all fibbonachi numbers of each even numbers
* before 4 000 000
*
* Return: always zero
*/

int main(void)
{
	long int x = 0, temp = 0;
	long int y = 1;
	long int sum = 0;

	while (y < 4000000)
	{
		if (y % 2 == 0)
		{
			sum = sum + y;
		}

		temp = x;
		x = y;
		y = y + temp;
	}

	printf("%ld\n", sum);
	return (0);
}
