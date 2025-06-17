#include "main.h"
/**
* main - use _printchar to print a value
*
* Return: always zero
*/

int main(void)
{
	char *putcharstr = "_putchar";
	int i;

	for (i = 0; putcharstr[i] != '\0'; i++)
	{
		_putchar(putcharstr[i]);
	}
	_putchar('\n');
	return (0);
}
