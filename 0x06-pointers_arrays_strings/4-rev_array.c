#include "main.h"

/**
 * reverse_array -  a function that reverses the content of an array
 *
 * @a: take input one
 *
 * @n: take input two
 */

void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
