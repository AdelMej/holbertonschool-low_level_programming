#include "main.h"

/* function declaration */
static int check_prime(int n, int i);
/**
* is_prime_number - a function that returns if a number is prime or not
* @n: a given number
*
* Return: 1 if true else 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);
	return (check_prime(n, 3));
}

/**
* check_prime - a function that returns if a number is prime or not
* @n: number to check
* @i: current divisor candidate
*
* Return: 1 if true else 0
*/
static int check_prime(int n, int i)
{
	if (i * i > n)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (check_prime(n, i + 2));
}
