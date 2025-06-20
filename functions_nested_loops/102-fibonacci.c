#include <stdio.h>

int fibonnachi(int n);

/**
 * main - print the first 50 numbers of fibonnachi
 *
 * Return: always zero
*/

int main(void)
{
	int x = 0;
	int y = 1;
	int temp = 0;

	while (y < 50)
	{
		printf("%d, ", x);
		temp = x;
		x = y;
		y = y + temp;
	}
	printf("%d\n", x);

	return (0);
}
