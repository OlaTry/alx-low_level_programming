#include <stdio.h>
#include "main.h"

/**
 * _strlen -  function that returns the length of a string
 *
 * @s: take input
 *
 * Return: length of the array
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;
	return (i);
}

