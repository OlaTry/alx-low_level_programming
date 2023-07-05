#include "main.h"

/**
 * _sqrt_recursion - a function returns the natural square root of a number
 *
 * @n: take input
 *
 * Return: int
 */

int s(int n, int v);
int _sqrt_recursion(int n)
{
	return (s(n, 1));
}

/**
 * s - a function returns the natural square root of a number
 *
 * @n: take input
 *
 * @v: take input
 *
 * Return: int
 */

int s(int n, int v)
{
	if (v * v == n)
		return (v);
	else if (v * v < n)
		return (s(n, v + 1));
	else
		return (-1);
}
