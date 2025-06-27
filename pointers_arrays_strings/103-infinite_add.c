#include "main.h"
#include <stdio.h>
/**
* infinite_add - a function that adds 2 integers stored in a string
* @n1: a string of integers
* @n2: a string of integers
* @r: a string to store the result in
* @size_r: the size of the array
*
* Return: the result of the operation
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry, j, i, n1length, n2length, i1, i2, digit1, digit2;
	int sum;
	char temp;

	for (n1length = 0; n1[n1length] != '\0'; n1length++)
		;
	for (n2length = 0; n2[n2length] != '\0'; n2length++)
		;
	carry = 0;
	i1 = n1length - 1;
	i2 = n2length - 1;
	i = 0;
	while ((i1 >= 0 || i2 >= 0 || carry) && i < size_r - 1)
	{
		if (i1 >= 0)
			digit1 = n1[i1] - '0';
		else
			digit1 = 0;
		if (i2 >= 0)
			digit2 = n2[i2] - '0';
		else
			digit2 = 0;
		sum = digit1 + digit2 + carry;
		r[i] = (sum % 10) + '0';
		carry = sum / 10;
		i++;
		i1--;
		i2--;
	}
	r[i] = '\0';
	if (i1 >= 0 || i2 >= 0 || carry || i == size_r)
		return (0);
	for (j = 0; j < i / 2; j++)
	{
		temp = r[j];
		r[j] = r[i - 1 - j];
		r[i - 1 - j] = temp;
	}
	return (r);
}
