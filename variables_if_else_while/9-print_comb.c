#include <stdio.h>

/**
* main - prints all comibnations of single digits number seperated with a coma
*
*
* Return: always zero
*/

int main(void)
{
int x = 0;
do {
putchar(x + '0');
if (x != 9)
{
putchar(',');
putchar(' ');
}
x++;
} while (x < 10);
putchar('\n');
return (0);
}
