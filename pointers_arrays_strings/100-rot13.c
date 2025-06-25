#include "main.h"

/**
* rot13 - a function that encodes a given string in rot13
* @s: a given string
*
* Return: the encoded string
*/

char *rot13(char *s)
{
	char *p = s;
	int i;
	char c;
	char base;

	while (*p)
	{
		c = *p;
		base = 0;

		/* First loop: set base to 'a' if c is a lowercase letter */
		for (i = 'a'; i <= 'z'; i++)
		{
			base += (c == i) * ('a' - base);
		}

		/* Second loop: set base to 'A' if c is an uppercase */
		/* letter and base is still 0 */
		for (i = 'A'; i <= 'Z'; i++)
		{
			base += ((c == i) && (base == 0)) * ('A' - base);
		}

		/* One and only if statement: apply ROT13 if c was a letter */
		if (base)
		{
			*p = ((c - base + 13) % 26) + base;
		}

		p++;
	}
	return (s);
}
