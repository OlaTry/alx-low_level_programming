#include <stdio.h>
#include "main.h"

/**
 * _isdigit  -  function that checks for a digit (0 through 9)
 *
 * @c: take input
 *
 * Return: 1 if it is a digit, 0 otherwithe
*/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
