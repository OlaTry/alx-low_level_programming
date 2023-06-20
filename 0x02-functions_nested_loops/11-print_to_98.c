#include <stdio.h>
#include "main.h"

/**
 * print_to_98  -  function prints all natural numbers
 *
 * @n: ckeck the input of function
 *
 * Return: returns 1 if the character is lowercase, 0 otherwise
*/

void print_to_98(int n)
{
int g;
if (n > 98)
{
	for (g = n; g > 98; g--)
	{
		printf("%d, ", g);
	}
}
else
		for (g = n; g < 98; g++)
			printf("%d, ", g);
printf("98\n");


}
