#include "main.h"
#include <stdio.h>

#define DEBUG_MODE
/**
* _atoi - a function that returns an integer found in a string
* @s: a string to analyse
*
* Return: the value found in the string
*/

int _atoi(char *s)
{
	int i = 0;
	unsigned int number = 0;
	int negative = 0;
	int positive = 0;

	/* placing myself where the number starts */
	while ((s[i] != '\0') && ((s[i] < '0') || (s[i] > '9')))
	{
		if (s[i] == '-')
		{
			negative++;
		}
		else if (s[i] == '+')
		{
			positive++;
		}
		i++;
	}

	/* creating an integer using arithmetic operations */
	while ((s[i] >= '0') && (s[i] <= '9'))
	{
		number = number * 10 + (s[i] - '0');
		i++;
	}

	if (negative > positive)
		number *= -1;

	return (number);
}
