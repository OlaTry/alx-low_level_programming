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
int a = 97;
while (a < 122)
{
putchar(a);
putchar("\n");
a++;
}
return (0);
}
