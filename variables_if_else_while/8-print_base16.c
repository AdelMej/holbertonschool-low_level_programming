#include <stdio.h>

/**
* main - print the 16 numbers of base 16 using putchar
*
* Return: always zero
*/

int main(void)
{
char x = '0';
while (x <= '9')
{
putchar(x);
x++;
}
x = 'a';
while (x <= 'f')
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}
