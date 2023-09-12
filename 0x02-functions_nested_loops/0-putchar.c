#include "main.h"

/**
 * main - Entry point
 *
 * Description: print putchar
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	putchar('\n');
	return (0);
}
