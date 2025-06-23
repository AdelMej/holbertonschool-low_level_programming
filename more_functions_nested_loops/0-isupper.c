#include "main.h"

/**
* _isupper - a function that returs if a given number is huppercase or not
* @c: a given character to be tested
*
* Return: 1 if the character is hupper case else zero
*/

int _isupper(int c)
{
	if ((c <= 'Z') && (c  >= 'A'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
