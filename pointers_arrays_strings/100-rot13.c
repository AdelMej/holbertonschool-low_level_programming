#include "main.h"

/**
* rot13 - a function that encodes a given string in rot13
* @str: a given string
*
* Return: the encoded string
*/

char *rot13(char *s)
{
	int i;
	char base;
    char *p = s;

    while (*p) {
        /* Only one if statement is allowed */
        if ((*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z')) {
            base = 'A';
            i = 0;

            /* First loop to determine if lowercase */
            for (i = 'a'; i <= 'z'; i++) {
                if (*p == i) {
                    base = 'a';
                    break;
                }
            }

            /* Apply ROT13 */
            *p = ((*p - base + 13) % 26) + base;
        }
        p++;
    }
    return (s);
}
