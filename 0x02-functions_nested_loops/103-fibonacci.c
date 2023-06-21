#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: finds and prints the sum of the even-valued terms
 *
 * Return: 0 success
 */

int main(void)
{
float total_sum;
unsigned long  one = 0, two = 1, sum;
while (1)
{
sum = one + two;
if (sum > 4000000)
	break;
if ((sum % 2) == 0)
	total_sum += sum
one = two;
two = sum;
}
printf("%.0f\n", total_sum);
return (0);
}
