#include "main.h"

/**
 * is_prime_number - a function returns 1 if the input integer
 *
 * @n: take input
 *
 * @o: take input
 *
 * Return: 0 or 1
 */

int check(int n, int o);
int is_prime_number(int n)
{
	return (check(n, 2));
}

/**
 * check - a function returns 1 if the input integer
 *
 * @n: take input
 *
 * @o: take input
 *
 * Return: int
 */

int check(int n, int o)
{
	if (o >= n && n > 1)
		return (1);
	else if (n % o == 0 || n <= 1)
		return (0);
	else
		return (check(n, o + 1));
}
