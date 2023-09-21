#include "main.h"
#include <stdio.h>

/**
 * islower - lower ccase
 *
 * @c: input
 *
 * Return: int
*/

int islower(char c)
{
	return (c >= 97 && c <= 122);
}
/**
 * isDelimiter - delimiter
 *
 * @c: input
 *
 * Return: int
*/
int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);

}

/**
 * *cap_string - cap
 *
 * @str: input
 *
 * Return: char
*/
char *cap_string(char *str)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = 1;
		else if (islower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}
