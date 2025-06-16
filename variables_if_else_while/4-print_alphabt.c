#include <stdio.h>
#include <stdbool.h>
/**
* main - print the alphabet without q and e
*
* Return: alwayys zero
*/

int main(void)
{
char x = 'a';
do {
if (x != 'q' && x != 'e')
{
putchar(x);
}
x++;
} while (x <= 'z');
printf("\n");
return (0);
}
