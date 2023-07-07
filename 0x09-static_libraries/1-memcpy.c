#include "main.h"

/**
 * *_memcpy - a function that  that copies memory area
 *
 * @dest: take input
 *
 * @src: take input
 *
 * @n: take input
 *
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
