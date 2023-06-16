#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: A C print the digit number
 *
 * Return: 0 (success)
*/

int main(void)
{
int a = 0;

while (a <= 9)
{
int b = 0;
while (b <= 9)
{
if (a != b && a < b)
{
putchar (a + 48);
putchar (b + 48);
if (a + b != 17)
{
putchar(',');
putchar(' ');
}
}
b++;
}
a++;
}
putchar('\n');

return (0);
}

