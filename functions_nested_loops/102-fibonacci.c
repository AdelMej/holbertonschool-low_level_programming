#include <stdio.h>

int fibonnachi(int n);

/**
 * main - print the first 50 numbers of fibonnachi
 *
 * Return: always zero
*/

int main(void)
{
	long int x = 0;
	long int y = 1;
	long int temp = 0;
	int i = 0;

	while (i <= 50)
	{
		printf("%ld, ", x);
		temp = x;
		x = y;
		y = y + temp;
		i++;
	}
	printf("%ld\n", x);

	return (0);
}
