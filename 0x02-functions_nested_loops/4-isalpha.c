#include "main.h"

/**
 *_isalpha - check if letter
 *
 *@c: checks the input
 *
 * Return: 1 is letter, 0 for else
 *
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
