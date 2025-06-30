#include "main.h"

/**
* _strlen_recursion - a function that counts the length of a string recursively
* @s: a string to be counts
*
* Return: the length of s
*/

int _strlen_recursion(char *s)
{
	static int length;

	if (*(s + 1) != '\0')
	{
		length++;
		_strlen_recursion(s + 1);
	}
	return (length + 1);
}
