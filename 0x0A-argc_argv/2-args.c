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
int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
