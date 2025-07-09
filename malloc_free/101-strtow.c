#include "main.h"
#include <stdlib.h>

/* function declaration */
int count_words(char *str);
int word_length(int index, char *str);
char *cpy_word(int index, char *from, char *to);
void free_resStr(char **resStr);

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
	char **resStr;
	int sizeWord, nbWord;
	int i, j;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	nbWord = count_words(str);
	if (nbWord == 0) /* return null if no words are found */
		return (NULL);
	resStr = malloc(sizeof(char *) * (nbWord + 1)); /* creating the array */
	if (resStr == NULL)
		return (NULL);

	j = 0;
	for (i = 0; i < nbWord; i++) /* loop for creating array of strings */
	{
		while (str[j] != '\0' && str[j] == ' ')
			j++;
		sizeWord = word_length(j, str);
		resStr[i] = malloc(sizeof(char) * (sizeWord + 1));
		if (resStr[i] == NULL)
		{
			free_resStr(resStr);
			return (NULL);
		}
		resStr[i] = cpy_word(j, str, resStr[i]);
		j +=sizeWord;
	}
	resStr[nbWord] = NULL;

	return (resStr);
}

/**
* count_words - a function that counts the number of words in a str
* @str: the string to be tested
*
* Return: number of words
*/
int count_words(char *str)
{
	int nbWord = 0;
	int in_Word = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++) /* counting words */
	{
		if (str[i] != ' ' && !in_Word)
		{
			nbWord++; /* found start of a new word */
			in_Word = 1; /* we are in a word */
		}
		else if (str[i] == ' ')
		{
			in_Word = 0; /* word ended */
		}
	}
	return (nbWord);
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
	int sizeWord = 0;

	while (str[index] != '\0' && str[index] != ' ')
	{
		sizeWord++;
		index++;
	}
	return (sizeWord);
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
* free_resStr - a function to free resStr if malloc fails
* @resStr: the allocated array to free
*
* Return: void
*/
void free_resStr(char **resStr)
{
	int i;

	if (resStr == NULL)
		return;

	for (i = 0; resStr[i] != NULL; i++) /* cleaning up memory after fail */
		free(resStr[i]);
	free(resStr);
}
