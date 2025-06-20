#include <stdio.h>

/**
* main - prints the first 98 fibonnachi numbers
*
* Return: always zero
*/

int main(void)
{
	double x = 1;
	double y = 2;
	double temp = 0;
	int i;

	for (i = 1; i < 98; i++)
	{
		printf("%.f, ", x);
		temp = x;
		x = y;
		y = x + temp;
	}
	printf("%.f\n", x);
	return (0);
}
