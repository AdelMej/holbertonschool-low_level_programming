#include "main.h"

/**
* jack_bauer - prints all of the minutes and hours in this format 00:00
*
* Return: void
*/

void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	while (hour < 24)
	{
		while (minute < 60)
		{
			_putchar(((hour / 10) % 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar(((minute / 10) % 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		minute++;
		}
	minute = 0;
	hour++;
	}
}

