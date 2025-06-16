#include <stdio.h>

/**
* main - print the alphabet in reverse
*
* Return: always zero
*/

int main(void)
{
char x = 'z';
do {
putchar(x);
x--;
} while (x >= 'a');
putchar('\n');
return (0);
}
