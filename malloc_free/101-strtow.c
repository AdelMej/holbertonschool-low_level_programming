#include "main.h"
#include <stdlib.h>

/* function declaration */
int count_words(char *str);
int word_length(int index, char *str);
char *cpy_word(int index, char *from, char *to);
void free_resstr(char **resstr);

/**
* strtow - a function that returns a pointers to an array of strings
* @str: a string to be parsed
*
* Return: the parsed string
* null if it fails
* note: the user is responsible for freeing memory
*/
char **strtow(char *str)
{
	char **resstr;
	int sizeword, nbword;
	int i, j;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	nbword = count_words(str);
	if (nbword == 0) /* return null if no words are found */
		return (NULL);
	resstr = malloc(sizeof(char *) * (nbword + 1)); /* creating the array */
	if (resstr == NULL)
	{
		return (NULL);
	}
	j = 0;
	for (i = 0; i < nbword; i++) /* loop for creating array of strings */
	{
		while (str[j] != '\0' && str[j] == ' ')
			j++;
		sizeword = word_length(j, str);
		resstr[i] = malloc(sizeof(char) * (sizeword + 1));
		if (resstr[i] == NULL)
		{
			free_resstr(resstr);
			return (NULL);
		}
		resstr[i] = cpy_word(j, str, resstr[i]);
	}
	resstr[nbword] = NULL;

	return (resstr);
}

/**
* count_words - a function that counts the number of words in a str
* @str: the string to be tested
*
* Return: number of words
*/
int count_words(char *str)
{
	int nbword = 0;
	int in_Word = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++) /* counting words */
	{
		if (str[i] != ' ' && !in_Word)
		{
			nbword++; /* found start of a new word */
			in_Word = 1; /* we are in a word */
		}
		else if (str[i] == ' ')
		{
			in_Word = 0; /* word ended */
		}
	}
	return (nbword);
}

/**
* word_length - a function that compts the siz of a word starting from an index
* @index: the starting point of the word
* @str: a string containing the word
*
* Return: the size of the word
*/
int word_length(int index, char *str)
{
	int sizeword = 0;

	while (str[index] != '\0' && str[index] != ' ')
	{
		sizeword++;
		index++;
	}
	return (sizeword);
}
/**
* cpy_word - a function to copy the words from a string
* to another starting from an index
* @index: the index the copy will start in
* @from: the string to copy
* @to: the string to copy into
*
* Return: the resulting copied string;
*/
char *cpy_word(int index, char *from, char *to)
{
	int i = 0;

	while (from[index] != '\0' && from[index] != ' ')
	{
		to[i] = from[index];
		i++;
		index++;
	}
	to[i] = '\0';
	return (to);
}

/**
* free_resstr - a function to free resstr if malloc fails
* @resstr: the allocated array to free
*
* Return: void
*/
void free_resstr(char **resstr)
{
	int i;

	if (resstr == NULL)
		return;

	for (i = 0; resstr[i] != NULL; i++) /* cleaning up memory after fail */
		free(resstr[i]);
	free(resstr);
}
