#include "main.h"

/**
* times_table - prints multiplication tables
*
*
* Return: void
*/

void times_table(void)
{
	int x = 0;
	int y = 1;

	while (x < 10)
	{
		_putchar('0');
		_putchar(',');
		while (y < 10)
		{
			if ((x * y) < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((x * y) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((((x * y) / 10) % 10) + '0');
				_putchar(((x * y) % 10) + '0');
			}
			if (y < 9)
				_putchar(',');
			y++;
		}
		_putchar('\n');
		y = 1;
		x++;
	}
}
