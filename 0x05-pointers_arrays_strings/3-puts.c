#include "main.h"

/**
 * _puts - print string
 *
 * @str: input
*/

void _puts(char *str)
{
	int i;

	for (i = 0; *str[i] != '\0'; str[i]++)
	{
		_putchar(*str[i]);
	}
}
