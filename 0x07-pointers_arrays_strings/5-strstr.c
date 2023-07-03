#include "main.h"

/**
 * *_strstr - a function that locates a substring
 *
 * @haystack: take input
 *
 * @needle: take input
 *
 * Return: int
 */

char *_strstr(char *haystack, char *needle)
{
        unsigned int i;
        unsigned int j;
        char *p;

        i = 0;
        while (s[i] != '\0')
        {
                j = 0;
                while (accept[j] != '\0')
                {
                        if (accept[j] == s[i])
                        {
                                p = &s[i];
                                return (p);
                        }
                        j++;
                }
                i++;
        }
        return (0);
}
