#include "main.h"

/**
* _isdigit - a function that returns if a given character is a digit or not
* @c: a character to be tested
*
* Return: 1 if a given character is a digit else return 0;
*/

int _isdigit(int c)
{
	if ((c <= '9') && (c >= '0'))
		return (1);
	else
		return (0);
}
