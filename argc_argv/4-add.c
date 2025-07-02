#include <stdio.h>
#include <stdlib.h>
/**
* main - 
*
*/
int main(int argc, char **argv)
{
	int i, j;
	int sum = 0;

	if(argc == 1)
	{
		printf("%d\n", 0);
		return (sum);
	}
	
	for(i = 1; i < argc; i++)
	{
		for(j = 0; argv[i][j] != '\0'; j++)
		{
			if(argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
