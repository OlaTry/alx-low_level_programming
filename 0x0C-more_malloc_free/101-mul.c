#include <stdio.h>
#include <stdlib.h>

/**
 * _puts - a function that prints a string to stdout
 *
 * @str: string to be printed
 */
void _puts(char *str)
{
        while (*str)
        {
                putchar(*str++);
        }
}

/**
 * _isdigit - a function that checks for a digit (0 through 9)
 *
 * @c: integer to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
        return (c >= '0' && c <= '9');
}

/**
 * _atoi - a function that converts a string to an integer
 *
 * @s: string to be converted
 *
 * Return: integer value of converted string
 */
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

/**
 * print_int - a function that prints an integer to stdout
 *
 * @n: integer to be printed
 */
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

/**
 * main - a function that multiplies two positive numbers
 *
 * @argc: number of command-line arguments
 *
 * @argv: array of command-line arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char const *argv[])
{
        if (argc != 3 || !_isdigit(*argv[1]) || !_isdigit(*argv[2]))
        {
                _puts("Error\n");
                return (98);
        }

        int num1 = _atoi(argv[1]);
        int num2 = _atoi(argv[2]);

        print_int(num1 * num2);
        putchar('\n');

        return (0);
}
