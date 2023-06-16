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
char a = 'z';
while (a >= 'a')
{
putchar(a);
a--;
}
putchar('\n');

return (0);
}
