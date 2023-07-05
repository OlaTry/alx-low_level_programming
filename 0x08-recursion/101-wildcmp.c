#include "main.h"

/**
 * wildcmp - a function returns the value of x raised to the power of y
 *
 * @s2: take input
 *
 * Return: s2
 */

char *m_p_s(char *s2)
{
	if (*s2 == '*')
		return (m_p_s(s2 + 1));
	else
		return (s2);
}


/**
 * inc - a function returns the value of x raised to the power of y
 *
 * @s1: take input
 *
 * @s2: take input
 *
 * Return: s2
 */

int inc(char *s1, char *s2)
{
	int r = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		r += wildcmp(s1 + 1, s2 + 1);
	r += inc(s1 + 1, s2);
	return (r);
}


/**
 * wildcmp - a function returns the value of x raised to the power of y
 *
 * @s1: take input
 *
 * @s2: take input
 *
 * Return: int
 */

int wildcmp(char *s1, char *s2)
{
	int r = 0;

	if (!*s1 && *s2 == '*' && !*m_p_s(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = m_p_s(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			r += wildcmp(s1 + 1, s2 + 1);
		r += inc(s1, s2);
		return (!!r);
	}
	return (0);
}
