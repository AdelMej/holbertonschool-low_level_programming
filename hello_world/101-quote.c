#include <unistd.h>

/**
* main - print a quote
*
* Return: always one
*/
int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, quote, 59);
	return (1);
}
