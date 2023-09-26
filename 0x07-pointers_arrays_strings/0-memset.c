#include "main.h"

/**
 * _memset - change character
 *
 * @s: input1
 * @b: input2
 * @n: input3
 * Return: char
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++, n--)
		s[itr] = b;
	return (s);
}
