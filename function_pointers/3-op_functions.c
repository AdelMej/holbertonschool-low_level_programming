#include "3-calc.h"

/**
* op_add - a function that does addition
* @a: first integer
* @b: second integer
*
* Return: a + b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - a function that does subtraction
* @a: first integer
* @b: second integer
*
* Return: a - b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - a function that does multiplication
* @a: first integer
* @b: second integer
*
* Return: a * b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - a function that does division
* @a: dividend
* @b: divisor
*
* Return: a / b
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - a function that returns the modulo of a / b
* @a: dividend
* @b: divisor
*
* Return: a % b
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
