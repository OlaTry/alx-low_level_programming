#include <stdio.h>
#include <stdlib.h>

void _puts(char *str)
{
while (*str)
{
putchar(*str++);
}
}

int _isdigit(int c)
{
return (c >= '0' && c <= '9');
}

int _atoi(char *s)
{
int result = 0;
int sign = 1;

if (*s == '-')
{
sign = -1;
s++;
}

while (_isdigit(*s))
{
result = result * 10 + (*s - '0');
s++;
}

return result * sign;
}

void print_int(int n)
{
if (n < 0)
{
putchar('-');
n = -n;
}

if (n / 10)
{
print_int(n / 10);
}

putchar(n % 10 + '0');
}

int main(int argc, char const *argv[])
{
if (argc != 3 || !_isdigit(*argv[1]) || !_isdigit(*argv[2]))
{
_puts("Error\n");
return (98);
}

int num1 = _atoi(argv[1]);
int num2 = _atoi(argv[2]);

print_int(num1*num2);
putchar('\n');

return (0);
}
