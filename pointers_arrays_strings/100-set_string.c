#include "main.h"

/**
* set_string - a function that sets the value of a pointer to a char
* @s: a string
* @to: a pointer to a char
*
* Return: void
*/

void set_string(char **s, char *to)
{
	*s = to;
}
