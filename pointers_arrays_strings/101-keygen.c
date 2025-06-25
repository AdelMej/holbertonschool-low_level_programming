#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int i;
	char *time = time(NULL);

	for(i = 0; i < 14; i++)
	{
		srand(time(NULL));
		printf("%.3s %.3s%3d %.2d:%.2d:%.2d %d\n", time, time);
	}
		printf("\n");

	return (0);
}
