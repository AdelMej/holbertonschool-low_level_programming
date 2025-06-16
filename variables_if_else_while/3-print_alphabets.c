#include <stdio.h>

/**
* main - print all the alphabet including majuscules
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
x = 'A';
do {
putchar(x);
x++;
} while (x <= 'Z');
printf("\n");
return (0);
}
