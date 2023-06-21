#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 success
 */

int main(void)
{
int c;
unsigned long  one = 0, two = 1, sum;
for (c = 0; c < 50; c++)
{
	sum = one + two;
	printf("%lu", sum);

	one = two;
	two = sum;

	if (c == 49)
		printf("\n");
	else
		printf(", ");
}

return (0);
}
