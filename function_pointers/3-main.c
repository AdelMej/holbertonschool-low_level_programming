#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - a program that does basic operations
* @argc: number of arguments
* @argv: a string with arguments
* Return: 0 if it succeed
* exit with 98 if incorrect arguments are passed
* exit with 99 if no operation is found
* exit with 100 if a division by 0 is attempted
*/
int main(int argc, char **argv)
{
	int a, b, result;
	int (*operation)(int, int); /* creating a pointer function */

	if (argc != 4) /* verifying number of arguments*/
	{
		printf("Error\n");
		exit(98);
	}

	/* setting to integer */
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	/* getting the function to execute */
	operation = get_op_func(argv[2]);

	if (operation == NULL) /* verifying if a correct operation was given */
	{
		printf("Error\n");
		exit(99);
	}
	result = operation(a, b); /* doing the operation */

	printf("%d\n", result); /* printing result */
	return (0); /* success */
}
