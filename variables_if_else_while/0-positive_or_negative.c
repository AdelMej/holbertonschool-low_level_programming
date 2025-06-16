#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - print if a number is positive negative or zero
  *
  * Return: always zero
  */
int main(void)
{
int n = 0;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n == 0)
printf("%d is zero\n", n);
else if (n > 0)
printf("%d is positive\n", n);
else
printf("%d is negative\n", n);

return (0);
}
