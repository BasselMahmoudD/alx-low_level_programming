#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print combination of three numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit1 = 48;
	int digit2, digit3;

	while (digit1 < 58)
	{
		digit2 = digit1 + 1;
		while (digit2 < 58)
		{
			digit3 = digit2 + 1;
			while (digit3 < 58)
			{
				putchar(digit1);
				putchar(digit2);
				putchar(digit3);
				if (digit1 != 55)
				{
					putchar(',');
					putchar(' ');
				}
				digit3++;
			}
			digit2++;
		}

		digit1++;
	}
	putchar('\n');
	return (0);
}
