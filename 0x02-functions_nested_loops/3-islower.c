#include "main.h"

/**
 * _islower  -  function checks if character is lowercase
 *
 * @c: ckeck the input of function
 *
 * Return: returns 1 if the character is lowercase, 0 otherwise
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
	return (1);
}
return (0);
}
