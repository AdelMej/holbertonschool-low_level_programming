#include "main.h"

/**
* rev_string - a function that reverse a string
* @s: a string to be reversed
*
* Return: void
*/

void rev_string(char *s)
{
	int length = 0;
	int left = 0;
	int right;
	char temp;

	/* recuperer la taille de s */
	while (s[length] != '\0')
		length++;

	right = length - 1;

	while (left < right)
	{
		/* inversement des characteres */
		temp = s[left];
		s[left] = s[right];
		s[right] = temp;
		left++;
		right--;
	}
}
