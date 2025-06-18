#include <stdio.h>
#include <string.h>
/**
* main - print and that piece of art is useful" - Dora Korpar, 2015-10-19 on the error output
*
* Return: always one
*/
int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 1, strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"), stderr);
	return (1);
}
