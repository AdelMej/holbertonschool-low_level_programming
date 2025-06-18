#include <stdio.h>

/**
* main - print the combination of 4 digit
*
* Return: always zero
*/

int main(void)
{
	int x = 0;
	int y = 0;
	while (x < 100){
		while (y < 100)
		{
			if(y > x){
				putchar((x / 10) + '0');
				putchar(x % 10 + '0');
				putchar(' ');
				putchar((y / 10) + '0');
				putchar((y % 10) + '0');
				if(!((x == 98) && (y == 99)))
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		y=0;
		x++;
	}
	putchar('\n');
	return (0);
}
