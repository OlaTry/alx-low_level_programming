#include <stdio.h>
#include "main.h"

/**
 * _atoi -  function that convert a string to an integer
 *
 * @s: take input
 *
 * Return: converted integer from string
*/

int _atoi(char *s)
{
	unsigned int num = 0;
	int si = 1;

	do {
		if (*s == '-')
			si *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * si);
}
