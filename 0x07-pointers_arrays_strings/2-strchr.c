#include "main.h"

/**
 * _strchr - skip specific character
 *
 * @s: input1
 * @c: input2
 *
 * Return: char
*/

char *_strchr(char *s, char c)
{
	int itr;

	for (itr = 0; s[itr] == c; itr++)
		return (s + itr);
	return ('\0');

}
