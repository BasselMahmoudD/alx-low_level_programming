#include "main.h"

/**
 * _strcmp - compare tow string
 *
 * @s1: input 1
 * @s2: inut2
 *
 * Return: equal
*/

int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (equal);
}
