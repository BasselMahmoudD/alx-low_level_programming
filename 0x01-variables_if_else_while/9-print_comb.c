#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print from 1 to 9
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 48;

	while (digit < 58)
	{
		putchar(digit);
		if (digit != 57)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');
	return (0);
}
