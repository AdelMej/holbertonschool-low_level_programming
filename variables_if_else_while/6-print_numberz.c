#include <stdio.h>

/**
* main - print all numbers of base 10 using putchar
*
* Return: always zero
*/

int main(void)
{
int x = 0;
while (x < 10)
{
putchar(x + '0');
x++;
}
return (0);
}
