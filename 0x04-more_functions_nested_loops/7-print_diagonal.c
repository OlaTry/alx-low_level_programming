#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - a function that draws a diagonal line
 * @n: The number of times the character \ should be printed
 *
 * Return: void
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
}
_putchar('\\');
_putchar('\n');
}
}
}
