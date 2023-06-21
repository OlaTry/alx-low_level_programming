#include <stdio.h>
/**
 * numLength - returns the length of strings
 *
 * @num: take the input
 *
 * Return: numbers of digits
 */
int numLength(int num)
{
	int length = 0;

	if (!num)

		return (1);
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}

/**
 * main - Entry Point
 *
 * Description: prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 success
 */


int main(void)
{
int c, i;
unsigned long  one = 1, two = 2, sum, mx = 100000000;
unsigned long  onee = 0, twoo = 0, summ = 0;

for (c = 1; c <= 98; c++)
{
	if (onee > 0)
		printf("%lu\n", onee);
	i = numLength(mx) - 1 - numLength(one);
	while (onee > 0 && i > 0)
	{
		printf("%d", 0);
		i--;
	}
	printf("%lu", one);

	sum = (one + two) % mx;
	summ = onee + twoo + (one + two) / mx;
	one = two;
	onee = twoo;
	two = sum;
	twoo = summ;

	if (c != 98)
		printf(", ");
	else
		printf("\n");
}

return (0);
}
