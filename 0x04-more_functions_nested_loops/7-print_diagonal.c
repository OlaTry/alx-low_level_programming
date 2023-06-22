#include "main.h"

/**
 * print_diagonal -  function that draws a diagonal line
 *
 * @n: take input
*/

void print_diagonal(int n)
{
int l, s;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (l = 1; l <= n; l++)
{
for (s = 1; s <= l; s++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
}
