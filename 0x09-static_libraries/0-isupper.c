#include <stdio.h>
#include "main.h"

/**
 * _isupper -  function that checks for uppercase character
 *
 * @c: take input
 *
 * Return: 1 if it is an uppercase, 0 otherwithe
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
	return (1);
}
else
{
	return (0);
}
}
