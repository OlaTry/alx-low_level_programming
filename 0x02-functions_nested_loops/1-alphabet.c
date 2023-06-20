#include <stdio.h>
#include "main.h"

/**
 * main - Entry point for the program
 *
 * Description : print the alphabet, in lowercase
 *
 *  Return: Always 0 (success)
*/

int  main(void)
{
char c = 97;

while (c <= 122)
{
_putchar(c);
c++;
}
_putchar('\n');

return (0);
}
