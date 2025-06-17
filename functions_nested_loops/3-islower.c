#include "main.h"
#include <ctype.h>
/**
* _islower - a function that return 1 if c is lowercase or 0 otherwise
* @c: a character to be compared
*
* Return: 1 if c is lowercase else return 0
*/

int _islower(int c)
{
	if (islower (c))
		return (1);
	
	return (0);
}
