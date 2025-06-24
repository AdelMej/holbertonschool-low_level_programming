#include <stdio.h>

/**
* main - a program that prints the largest prime number of 612852475143
*
* Return: always zero
*/

int main(void)
{
	unsigned long number = 612852475143;
    unsigned long divisor = 2;

    while (divisor * divisor <= number)
    {
        if (number % divisor == 0)
        {
            number /= divisor;
        }
        else
        {
            divisor++;
        }
    }

    printf("%lu\n", number);
    return (0);
}

