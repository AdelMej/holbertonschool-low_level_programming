#include "main.h"
#include <stdio.h>
/* declaration de fonction */
int is_palindrome_helper(char *s1, char *s2);
int _sizeof(char *);

/**
* is_palindrome - a function that returns if a string is a palindrome
* @s: a string to be tested
*
* Return: 1 if s is a palindrome
* else return 0
*/
int is_palindrome(char *s)
{
	int length = 0;

	if (*s == '\0')
		return (1);
	length = _sizeof(s);
	return (is_palindrome_helper(s, s + length - 1));
}

/**
* is_palindrome_helper - a function that test 2 characters
* is a palindrome or not
* @s1: point to the current left character
* @s2: point to the current right character
*
* Return: 1 if it's a palindrome, 0 otherwise
*/
int is_palindrome_helper(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		if (s1 >= s2)
			return (1);
		return (is_palindrome_helper(s1 + 1, s2 - 1));
	}
	else
	{
		return (0);
	}
}
/**
* _sizeof - a function that returns the size of a string
* @s: a string
*
* Return: the size of n
*/
int _sizeof(char *s)
{
	if (!*s)
		return (0);
	return (1 + _sizeof(s + 1));
}

