#include <stdio.h>
#include "main.h"

/**
 * print_line - function that draws a straight line
 *
 * @n: take input
 *
 * Return: 1 if it is an uppercase, 0 otherwithe
*/

void print_line(int n)
{
int l;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (l = 1; l <= n; l++)
{
_putchar('_');
}
_putchar('\n');
}
}
