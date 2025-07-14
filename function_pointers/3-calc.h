#ifndef CAL_H
#define CAL_H

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* a function to print characters */
int _putchar(char c);

/* a function that adds a and b */
int op_add(int a, int b);

/* a function that substarct a and b */
int op_sub(int a, int b);

/* a function that multiplies a and b */
int op_mul(int a, int b);

/* a function that divide a by b */
int op_div(int a, int b);

/* a function that returns the modulo of a / b */
int op_mod(int a, int b);

/* a function that selects the correct function */
int (*get_op_func(char *s))(int, int);

#endif
