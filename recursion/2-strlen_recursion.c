#include "main.h"

/**
* _strlen_recursion - a function that counts the length of a string recursively
* @s: a string to be counts
*
* Return: the length of s
*/

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s +1));
}
