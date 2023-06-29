#include "main.h"
#include <stdio.h>

/**
 * isPrintAbleASCII -  a function that prints an ascii
 *
 * @n: take input
 *
 * Return: 1 if true, 0 if false
 */

int isPrintAbleASCII(int n)
{
	return (n >= 32 && n <= 126);
}


/**
 * printHexes -  a function that prints an ascii
 *
 * @b: take input
 *
 * @start: take input
 *
 * @end: take input
 *
 * Return: 1 if true, 0 if false
 */

void printHexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}


/**
 * printASCII -  a function that prints an ascii
 *
 * @b: take input
 *
 * @start: take input
 *
 * @end: take input
 */

void printASCII(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isPrintAbleASCII(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}




/**
 * print_buffer -  a function that prints a buffer
 *
 * @b: take input
 *
 * @size: take input
 *
 * Return: lower
 */
void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	} else
		printf("\n");
}
