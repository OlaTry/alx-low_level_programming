#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print the alphabet in lowercase
 *
 * Return: 0 (success)
*/

int main(void)
{

char a = 'a';
while (a <= 'z')
{
if (a == 'e' || a == 'q')
{
a++;
}
putchar(a);
a++;
}
putchar('\n');

return (0);
}
