#include "main.h"

/**
 * times_table  -  function prints the 9 times table, starting with 0
 *
 * Return: returns prints the 9 times table
*/

void times_table(void)
{
int n, m, prod;
for (n = 0; n <= 9; n++)
{
	_putchar(48);
for (m = 1; m <= 9; m++)
{
_putchar (',');
	_putchar(' ');
	prod = n * m;
if (prod <= 9)
	{
_putchar(' ');
	}
	else
	{
_putchar((prod / 10) + 48);
	}
_putchar((prod % 10) + 48);

}
_putchar('\n');
}
}
