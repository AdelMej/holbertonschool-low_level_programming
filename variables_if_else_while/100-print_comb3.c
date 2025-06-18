#include <stdio.h>
/*
* main - print numbers in a specific order
*
* Return: always zero
*/

int main(void)
{
	int x = 0;
	int y = 0;
	
	while (x < 10)
	{
		while (y < 10)
		{
			if(x < y){
				putchar(x + '0');
				putchar(y + '0');
				if(!(x==8 && y == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		y = 0;
		x++;
	}
	putchar('\n');
	return(0);
}
