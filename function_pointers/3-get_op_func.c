#include "3-calc.h"

/**
* get_op_func - a function that returns an operation
* if there is a match otherwise return NULL
* @s: operation to check
*
* Return: the operation if it succeed
* otherwise return NULL
*/
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL) /* parcouring the array of structures */
	{
		/* succeed if match found and there isn't an added character */
		if (ops[i].op[0] == s[0] && s[1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}

	/* return NULL if no match are found or s[1] != '\0' */
	return (NULL);
}
