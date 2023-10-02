#include "main.h"

/**
 *_islower - print lowercase
 *
 *@c: checks the input
 *
 * Return: 1 is lowercase, 0 for else
 *
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
