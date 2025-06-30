#include "main.h"

/* declaration */
int _sqrt_helper(int n, int guess);

/**
* _sqrt_recursion - Returns the natural square root of a number.
* @n: The number to find the square root of.
*
* Return: The natural square root, or -1 if none exists.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - Recursively checks for the natural square root.
 * @n: The number to find the square root of.
 * @guess: The current number being tested as the square root.
 *
 * Return: The natural square root, or -1 if none exists.
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (_sqrt_helper(n, guess + 1));
}
