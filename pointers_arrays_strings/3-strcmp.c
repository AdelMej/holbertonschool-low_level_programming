#include "main.h"

/**
* _strcmp - a function that compare 2 strings
* @s1: a string to be compared with
* @s2: a string to be compared with
*
* Return: 1 if s1 equal s2 else return 0;
*/

int _strcmp(char *s1, char *s2)
{
	if(s1 == s2)
	{
		return(0);
	}
	else if(s1 > s2)
	{
		return (-15);
	}
	else 
	{
		return(15);
	}
}
