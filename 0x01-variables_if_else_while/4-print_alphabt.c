#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print a to z expected e & q
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	if (ch != 'q' && ch != 'e')
		putchar(ch);
	ch++;
	}
	putchar('\n');
	return (0);
}
