#include "main.h"
#include <ctype.h>

/**
* _isalpha - return if the value c is an alphanumeric value
* @c: a character to be tested
*
* Return: 1 if c is lowercase or uppercase otherwise return 0
*/

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	return (0);
}

