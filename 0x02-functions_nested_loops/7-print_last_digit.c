#include "main.h"

/**
 * print_last_digit  -  function checks if character is lowercase
 *
 * @n: ckeck the input of function
 *
 * Return: returns last_digit
*/

int print_last_digit(int n)
{
int last_digit;
	if (n < 0)
	{
	last_digit = (n % 10) * -1;
	}
	else
	{
	last_digit = n % 10;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
