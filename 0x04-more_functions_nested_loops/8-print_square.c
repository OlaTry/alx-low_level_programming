#include "main.h"

/**
 * print_square - prints a square using the character #
 *
 * @size: is the size of square
 *
 * Return: Always 0 (success)
*/

void print_square(int size)
{
	int co, ro;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= size; co++)
		{
			_putchar('#');
			for (ro = 2; ro <= size; ro++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
