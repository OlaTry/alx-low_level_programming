#include "main.h"

/**
 * _strcat -  a function that concatenates two strings
 *
 * @dest: take input one
 *
 * @src: take input two
 *
 * Return: new string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, i2;

	while (dest[i])
		i++;
	for (i2 = 0; src[i2]; i2++)
		dest[i++] = src[i2];
	return (dest);
}
