#include <stdio.h>
#include "main.h"

/**
 * print_numbers -  function that prints the numbers, from 0 to 9
 *
 * Return:  0 always (success)
*/

void print_numbers(void)
{
int i = 0;
while (i <= 9)
{
_putchar(i + 48);
i++;
}
_putchar('\n');
}
