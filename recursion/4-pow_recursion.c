#include "main.h"

/**
* _pow_recursion - a function that does the power of x
* @x: a number to be powered
* @y: the number of powering
*
* Return: the result of the powering
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x *= _pow_recursion(x, y - 1));
}
