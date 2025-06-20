#include <stdio.h>

/**
 * main - print the multiple of 3 and 5 under 1024
 *
 * Return: always zero
*/

int main(void)
{
	const int MAX_VALUE = 1024;
	int i = 0;

	while(i <= MAX_VALUE)
	{
		if(i == 1023)
		{
			printf("%d\n", i);
			break;
		}
		if ((i % 3) == 0)
		{
			printf("%d, ", i);
		}
		else if ((i % 5) == 0)
		{
			printf("%d, ", i);
		}
		i++;
	}
}
