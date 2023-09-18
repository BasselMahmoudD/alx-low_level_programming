#include "main.h"

/**
 * print_rev - print reverse
 *
 * @s: input
*/

void print_rev(char *s)
{
	int i;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
