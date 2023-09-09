#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print combination of tow numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit1 = 48;
	int digit2;

	while (digit1 < 58)
	{
		digit2 = digit1 + 1;

		while (digit2 < 58)
		{
			putchar(digit1);
			putchar(digit2);
			if (digit1 != 56 && digit2 != 57)
			{
			putchar(',');
			putchar(' ');
			}
			digit2++;
		}
		digit1++;
	}
	putchar('\n');
	return (0);
}
