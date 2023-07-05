#include "main.h"

/**
 * _strlen_recursion - a function that prints alength of string
 *
 * @s: take input
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s > '\0')
	{
		l = l + _strlen_recursion(s + 1) + 1;
	}
	return (l);
}
