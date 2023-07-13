#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: the number of bytes to allocate
 *
 * Return: a pointer to the allocated memory, or exit 98 if allocation fails
 */


void *malloc_checked(unsigned int b)
{
	int *ma = malloc(b);

	if (ma == 0)
		exit(98);
	return (ma);
}
