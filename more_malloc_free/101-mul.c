#include <stdio.h>
#include <stdlib.h>

/* function declaration */
char *multBigNumber(char *s1, char *s2);
int _strlen(char *str);
void revString(char *str);
void _strcpy(char *src, char *dest);

/**
* main - a program that does a multiplication with given numbers
* @argc: the number of arguments
* @argv: an array containing the arguments
*
* Return: 0 if succesful 98 if it fails
*/
int main(int argc, char **argv)
{
	int i, j;
	char *res;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < 3; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	res = multBigNumber(argv[1], argv[2]);
	printf("%s\n", res);
	free(res);

	return (0);
}

/**
* multBigNumber - a function to multiple 2 numbers stored in a string strings
* @s1: the first string to multiply
* @s2: the second string to multiply
*
* Return: the multiplication of 2 big numbers stored in a string
*/
char *multBigNumber(char *s1, char *s2)
{
	char *bigNumber;
	int len, i, j, mulDigit, carry, sizeS1, sizeS2, digit1, digit2;
	char *revS1, *revS2;

	sizeS1 = _strlen(s1);
	sizeS2 = _strlen(s2);

	revS1 = malloc(sizeS1 + 1);
	if (revS1 == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	revS2 = malloc(sizeS2 + 1);
	if (revS2 == NULL)
	{
		free(revS1);
		printf("Error\n");
		exit(98);
	}
	_strcpy(s1, revS1);
	_strcpy(s2, revS2);
	revString(revS1);
	revString(revS2);
	bigNumber = calloc(sizeS1 + sizeS2 + 1, sizeof(char));
	if (bigNumber == NULL)
	{
		free(revS1);
		free(revS2);
		exit(98);
	}
	for (i = 0; revS1[i] != '\0'; i++)
	{
		carry = 0;
		for (j = 0; revS2[j] != '\0'; j++)
		{
			digit1 = revS1[i] - '0';
			digit2 = revS2[j] - '0';

			mulDigit = digit1 * digit2 + bigNumber[i + j] + carry;
			bigNumber[i + j] = mulDigit % 10;
			carry = mulDigit / 10;
		}
		if (carry)
			bigNumber[i + j] += carry;
	}

	len = sizeS1 + sizeS2;
	while (len > 1 && bigNumber[len - 1] == 0)
		len--;

	bigNumber[len] = '\0';

	for (i = 0; i < len; i++)
		bigNumber[i] += '0';

	free(revS1);
	free(revS2);
	revString(bigNumber);
	return (bigNumber);
}

/**
* _strlen - a function that calculate the length of a string
* @str: a string to be countedor
*
* Return: string length
*/
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
* _strcpy - a function that copy a string into another one
* @src: the string to be copied
* @dest: the string to copy into
*/
void _strcpy(char *src, char *dest)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
}
/**
* revString - reverse a givenString
* @str: a string to reverse
*
* Return: void
*/
void revString(char *str)
{
	int i, sizeStr;
	char temp;

	sizeStr = _strlen(str);
	for (i = 0; i < sizeStr / 2; i++)
	{
		temp = str[i];
		str[i] = str[sizeStr - i - 1];
		str[sizeStr - i - 1] = temp;
	}
}
