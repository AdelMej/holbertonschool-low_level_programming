#include <stdio.h>

/**
* main - prints the first 98 fibonnachi numbers
*
* Return: always zero
*/

int main(void)
{
	long double x = 1;
	long double y = 2;
	long double temp = 0;
	int i;

	for (i = 1; i < 98; i++)
	{
		printf("%.Lf, ", x);
		temp = x;
		x = y;
		y = x + temp;
	}
	printf("%.Lf\n", x);
	return (0);
}
