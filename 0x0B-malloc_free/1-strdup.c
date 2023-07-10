#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - a function that returns a newly allocated space in memory
 *
 * @str: take input
 *
 * Return: int
 */

char *_strdup(char *str)
{
	int i = 0;
	int size = 0;
	char *n;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;
	n = malloc(size * sizeof(*str) + 1);

	if (n == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			n[i] = str[i];
	}
	return (n);
}
