#include <stdio.h>

/**
* main - print the alphabet
*
* Return: always zero
*/
int main(void)
{
char x = 'a';
do {
putchar(x);
x++;
} while (x <= 'z');
printf("\n");
return (0);
}
