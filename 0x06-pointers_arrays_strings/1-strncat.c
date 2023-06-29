#include "main.h"

/**
 * _strncat -  a function that concatenates two strings
 *
 * @dest: take input one
 *
 * @src: take input two
 *
 * @n: take input three
 *
 * Return: new string
 */

char *_strncat(char *dest, char *src, int n)
{
	 int i = 0, i2;

while (dest[i])
i++;
for (i2 = 0; i2 < n && src[i2] != '\0'; i2++)
dest[i + i2] = src[i2];
dest[i + i2] = '\0';

return (dest);
}
