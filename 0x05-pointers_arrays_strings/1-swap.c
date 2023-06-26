#include <stdio.h>
#include "main.h"

/**
 * swap_int -  function that swaps the values of two integers
 *
 * @a: take input *a
 *
 * @b: take input *b
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

