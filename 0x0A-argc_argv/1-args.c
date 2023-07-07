#include <stdio.h>

/**
 * main - entry point prints programm name
 *
 * @argc: int
 *
 * @argv: list
 *
 * Return: 0 or non zero
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
