#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: A C print the numbers from 0 : 9
 *
 * Return: 0 (success)
*/

int main(void)
{
int a = 0;
while (a < 10)
{
putchar(a + 48);
a++;
}
putchar('\n');

return (0);
}
