#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* argstostr - a function that creates a string of arguments
* seperated by a new line
* @ac: number of arguments
* @av: array containing the arguments
*
* Return: a string containing all the arguments
* Note: the user is responsible for freeing memory
*/
char *argstostr(int ac, char **av)
{
	int i, j, k;
	int sizeStr = 0;
	char *resStr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			sizeStr++;
		}
		sizeStr++;
	}

	resStr = malloc(sizeof(char) * (sizeStr + 1));
	if (resStr == NULL)
		return (NULL);

	resStr[sizeStr] = '\0';
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			resStr[k] = av[i][j];
			k++;
		}
		resStr[k] = '\n';
		k++;
	}
	return (resStr);
}
