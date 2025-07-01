#include "main.h"

/**
* wildcmp - a function thar returns if 2 characters are the same with wildcards
* @s1: a string to be compared
* @s2: a string to compare to
*
* Return: 1 if s1 is the same as s2 with wild card, else 0
*/

int wildcmp(char *s1, char *s2)
{
	if(!(*s1 || *s2))
		return (1);

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 && wildcmp(s1 + 1, s2)));
	
	if(*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return(0);
}
