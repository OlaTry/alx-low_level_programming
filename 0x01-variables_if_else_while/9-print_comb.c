#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description:  print the  number from 0 : 9
 *
 * Return: 0 (success)
*/

int main(void)
{
int a = 0;

while (a < 10)
{
putchar(a + 48);
if (a == 9)
{
putchar('$');
a++;
}
else
{
putchar(',');
putchar(' ');
a++;
}
}

return (0);
}

