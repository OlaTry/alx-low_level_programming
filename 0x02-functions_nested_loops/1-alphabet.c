#include <stdio.h>


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
putchar(c);
c++;
}
putchar('\n');

return (0);
}
