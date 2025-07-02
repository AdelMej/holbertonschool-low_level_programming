#include "main.h"

/* function declaration */
int is_divisible_by(int n, int i);

/**
* is_prime_number - Returns 1 if n is a prime number otherwise 0
* @n: a given number
*
* Return: 1 if n is a prime number
* return 0 if n is not prime or less than equal to one
*
* Note: 2 is the only even prime number
*/
int is_prime_number(int n)
{
	if (n == 2 || n == 3)
		return (1);
	if (n <= 1 || n % 2 == 0)
		return (0);
	return (is_divisible_by(n, 3));
}

/**
* is_divisible_by - a function that returns if n is divisible by i
* @n: number to check
* @i: current divisor candidate
*
* Return: 1 if no divisors are found (indicating that n is prime),
* otherwise return 0
*/
int is_divisible_by(int n, int i)
{
	if (i * i > n)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (is_divisible_by(n, i + 2));
}
