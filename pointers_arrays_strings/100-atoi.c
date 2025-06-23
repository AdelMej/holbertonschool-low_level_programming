#include "main.h"
#ifdef DEBUG_MODE
	#include <stdio.h>
#endif

/**
* _atoi - a function that returns an integer found in a string
* @s: a string to analyse
*
* Return: the value found in the string
*/

int _atoi(char *s)
{
	int i = 0;
	int negative = 0;
	int positive = 0;
	int number = 0;
	int nbsize = 0;
	int multiplier = 1;
  /* placing myself where the number starts */
	while ((s[i] != '\0') && ((s[i] < '0') || (s[i] > '9')))
	  i++;

  /* calculating how many numbers needs are in the array */
	while ((s[i + nbsize] != '\0') && ((s[i + nbsize] >= '0')
		&& (s[i + nbsize] <= '9')))
    nbsize++;

  /* creating an integer using arithmetic operations */
	while ((i + nbsize) > i)
	{
		number += (s[i - 1 + nbsize] - '0') * multiplier;
		multiplier *= 10;
		nbsize--;
	}
	if (negative > positive)
	{
		number *= -1;
	}

	return (number);
}
