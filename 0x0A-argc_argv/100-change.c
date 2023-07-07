#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point prints coins
 *
 * @argc: int
 *
 * @argv: list
 *
 * Return: 0, non zero if fail
 */

int main(int argc, char const *argv[])
{
	if (argc == 2)
	{
		int i, lc = 0, m = atoi(argv[1]);
		int cs[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (m >= cs[i])
			{
				lc += m / cs[i];
				m = m % cs[i];
				if (m % cs[i] == 0)
				{
					break;
				}
			}
		}
		printsf("%d\n", lc);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
