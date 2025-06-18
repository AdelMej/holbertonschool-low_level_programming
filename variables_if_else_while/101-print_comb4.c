#include <stdio.h>

/**
* main - prints the combination of 3 digit
*
* Return: always zero
*/

int main(void)
{
	int x = 0;
	int y = 0;
	int z = 0;

	while (z < 10)
	{
		while (y < 10)
		{
			while (x < 10)
			{
				if ((z < y) && (y < x))
				{
					putchar(z + '0');
					putchar(y + '0');
					putchar(x + '0');
					if (!((z == 7) && (y == 8) && (x == 9)))
					{
						putchar(',');
						putchar(' ');
					}
				}
			x++;
			}
			x = 0;
			y++;
		}
		y = 0;
		z++;
	}
	putchar('\n');
	return (0);
}
