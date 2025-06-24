#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0 (Success)
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
