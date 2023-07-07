#include <stdio.h>
#include "main.h"

/**
 * _strcpy -  function that copies the string
 *
 * @dest: take input
 *
 * @src: take input
 *
 * Return: 1 if it is an uppercase, 0 otherwithe
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);

}
