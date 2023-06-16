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
while (a < 'z')
{
putchar(a);
putchar("\n");
a++;
}
return (0);
}
