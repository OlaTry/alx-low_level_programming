#include "main.h"
#include <stdio.h>

/**
 * *create_array - a function that locates creates an array of chars
 *
 * @size: take input
 *
 * @c: take input
 *
 * Return: int
 */

char *create_array(unsigned int size, char c)
{
	char *m = malloc(size);

	if (size == 0 || m == 0)
		return (0);
	while (size--)
		m[size] = c;
	return (m);
}
