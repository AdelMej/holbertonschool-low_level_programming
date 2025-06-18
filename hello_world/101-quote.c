#include <unistd.h>
#include <string.h>
/**
* main - print and that piece of art is useful" - Dora Korpar, 2015-10-19 on the error output
*
* Return: always one
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"));
	return (1);
}
