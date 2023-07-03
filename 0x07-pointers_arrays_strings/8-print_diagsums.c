#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 *
 * @a: take input
 *
 * @size: take input
 */

void print_diagsums(int *a, int size)
{
	int i;
	int one = 0;
	int two = 0;

	for (i = 0; i < size; i++)
	{
		one += a[i];
		two += a[size - i - 1];
		a += size;
	}
	printf("%d, ", one);
	printf("%d\n", two);
}
