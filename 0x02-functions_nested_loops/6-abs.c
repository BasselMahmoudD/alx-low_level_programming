#include "main.h"

/**
 *_abs - computes absolute values of an integer
 *
 *@n: takes integer type
 *
 * Return: Always 0 (Success)
 *
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
