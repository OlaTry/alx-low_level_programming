#include "main.h"

/**
 * _strcmp -  a function that that compares two strings
 *
 * @s2: take input one
 *
 * @s1: take input two
 *
 * Return: new string
 */

int _strcmp(char *s1, char *s2)
{
	int e = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			e = ((int)*s1 - 48) - ((int)*s2 - 48);
				break;
		}
		s1++;
		s2++;
	}
	return (e);
}
