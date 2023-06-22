#include <main.h>

/**
 * print_diagonal -  a function that draws a diagonal line
 *
 * @n: take input
 *
 * Return: a diagonal
 */


void print_diagonal(int n)
{
	int p, s;

	if (n <= 0)
	{
		 _putchar('\n');
	}
	else
	{
		for (p = 1; p <= n; p++)
		{
			for (s = 1; s < p; s++)
			{
				_putchar(' ');
			i}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
