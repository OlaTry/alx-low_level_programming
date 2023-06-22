#include <stdio.h>
#include "main.h"

/**
 * _sqrt - square root
 *
 * @x: take input
 *
 * Return: square root of x
*/

double _sqrt(double x)
{
float s, t;
s = x / 2;
t = 0;
while (s != t)
{
t = s;
s = (x / t + t) / 2;
}
return (s);
}



/**
 * largest_prime_factor - finds and prints the largest
 *
 * @num: take input
*/

void largest_prime_factor(long int num)
{
int p, l;
while (num % 2 == 0)
	num = num / 2;
for (p = 3; p <= _sqrt(num); p += 2)
{
while (num % p == 0)
{
num = num / p;
l = p;
}
}
if (num > 2)
	l = num;
printf("%d\n", l);
}




/**
 * main -  Entry Point
 *
 * Return: always  0 (sucess)
*/

int main(void)
{
largest_prime_factor(612852475143);
return (0);
}
