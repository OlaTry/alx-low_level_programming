#include "main.h"

/**
 * la - a function returns 1 if a string is a palindrome and 0 if not
 *
 * @s: take input
 *
 * Return: int
 */

int is_palindrome(char *s);
int c(char *s, int st, int en, int mo);
int la(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += la(s + 1) + 1;
	return (n);
}


/**
 * is_palindrome - a function returns 1 if palindrome, 0 if not
 *
 * @s: take input
 *
 * Return: int
 */

int is_palindrome(char *s)
{
	int en = la(s);

	return (c(s, 0, en - 1, en % 2));
}

/**
 * c - a function returns 1 if a string is a palindrome and 0 if not
 *
 * @s: take input
 *
 * @st: take input
 *
 * @en: take input
 *
 * @mo: take input
 *
 * Return: int
 */

int c(char *s, int st, int en, int mo)
{
	if ((st == en && mo != 0) || (st == en + 1 && mo == 0))
		return (1);
	else if (s[st] != s[en])
		return (0);
	else
		return (c(s, st + 1, en - 1, mo));
}
