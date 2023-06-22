#include <stdio.h>
#include "main.h"

/**
 * print_square -  function that prints a square
 *
 * @size: take input
 *
 * Return: 1 if it is an uppercase, 0 otherwithe
*/

void print_square(int size)
{
int r, c;

for (r = 1; r <= size; r++)
{
for (c = 1; c <= size; c++)
{
_putchar('#');
}
_putchar('\n');
}
}

